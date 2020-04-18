cmake_minimum_required(VERSION 2.8)

project("PHPCoder")

# antlr cpp runtime install dir 
set(ANTLR_CPP_RUNTIME_DST ~/antlr/runtime)

# CMake commands copied by the CMake file for CImg

# To use PKG_CHECK_MODULES to find some optional packages
find_package(PkgConfig)
 

# ### Search Additional Libraries ##########
  
SET(CMAKE_CXX_FLAGS "-std=c++11 -O3")

# #### End of additional libraries search ##########


### Configure Paths according to detected packages
       

if(NOT APPLE)
  if(NOT WIN32)
    if(X11_FOUND)
      SET(CIMG_CFLAGS "${CIMG_CFLAGS} ${CIMG_XSHM_CCFLAGS} ${CIMG_XRANDR_CCFLAGS}")
      SET(SYSTEM_LIBS ${SYSTEM_LIBS})
    endif()
  endif(NOT WIN32)
endif(NOT APPLE)

if(X11_FOUND)
  link_directories(${X11_LIB_DIRS})
  include_directories(${X11_INCLUDE_DIR})
  SET( SYSTEM_LIBS ${SYSTEM_LIBS} ${X11_LIBRARIES} )
endif()

if (NOT WIN32)
  SET( SYSTEM_LIBS ${SYSTEM_LIBS} ${CMAKE_THREAD_LIBS_INIT} )
endif()

if( WIN32)
  SET( SYSTEM_LIBS  ${SYSTEM_LIBS}  gdi32 )
endif()
 

if(LAPACK_FOUND)
  SET(CIMG_CFLAGS "${CIMG_CFLAGS} ${CIMG_LAPACK_CCFLAGS}")
  link_directories( ${LAPACK_LIBRARY_DIRS} )
  include_directories( ${LAPACK_INCLUDE_DIRS} )
  SET( SYSTEM_LIBS ${SYSTEM_LIBS} ${LAPACK_LIBRARIES} )
endif()

if(BLAS_FOUND)
  SET(CIMG_CFLAGS "${CIMG_CFLAGS} ${CIMG_BLAS_CCFLAGS}")
  link_directories( ${BLAS_LIBRARY_DIRS} )
  include_directories( ${BLAS_INCLUDE_DIRS} )
  SET( SYSTEM_LIBS ${SYSTEM_LIBS} ${BLAS_LIBRARIES} )
endif()

# Add CIMG Flags to Compilation Flags
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CIMG_CFLAGS}") 

# CMake commands for this specific project start here

# to disable some warnings for CImg
if (NOT WIN32)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wdeprecated -Wno-attributes" )
endif()

if (APPLE)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wdeprecated -Wwritable-strings -std=c++11" )
endif()

if (MSVC)
  set(CMAKE_CXX_FLAGS "/EHsc /wd4127 /wd4311 /wd4312 /wd4512 /wd4571 /wd4640 /wd4706 /wd4710 /wd4800 /wd4804 /wd4820 /wd4996")
endif()


set(phpcoder-GENERATED_SRC
  #${PROJECT_SOURCE_DIR}/phpsrc/PhpLexer.cpp 
  #${PROJECT_SOURCE_DIR}/phpsrc/PhpParser.cpp
  #${PROJECT_SOURCE_DIR}/phpsrc/PhpParserBaseListener.cpp   
  #{PROJECT_SOURCE_DIR}/phpsrc/PhpParserListener.cpp 


  ${PROJECT_SOURCE_DIR}/phpg/PHPLexer.cpp 
  ${PROJECT_SOURCE_DIR}/phpg/PHPParser.cpp 
  ${PROJECT_SOURCE_DIR}/phpg/PHPParserBaseListener.cpp 
  ${PROJECT_SOURCE_DIR}/phpg/PHPParserBaseVisitor.cpp 
  ${PROJECT_SOURCE_DIR}/phpg/PHPParserListener.cpp 
  ${PROJECT_SOURCE_DIR}/phpg/PHPParserVisitor.cpp  
 )

foreach( src_file ${phpcoder-GENERATED_SRC} )
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach( src_file ${phpcoder-GENERATED_SRC} )

MESSAGE(STATUS "HOME dir: ${ANTLR_CPP_RUNTIME_DST}/usr/local/")

include_directories(
  ${ANTLR_CPP_RUNTIME_DST}/usr/local/include/antlr4-runtime/
  ${ANTLR_CPP_RUNTIME_DST}/usr/local/include/misc
  ${ANTLR_CPP_RUNTIME_DST}/usr/local/include/atn
  ${ANTLR_CPP_RUNTIME_DST}/usr/local/include/dfa
  ${ANTLR_CPP_RUNTIME_DST}/usr/local/include/tree
  ${ANTLR_CPP_RUNTIME_DST}/usr/local/include/support
  ${ANTLR_CPP_RUNTIME_DST}/usr/local/include/
  ${PROJECT_SOURCE_DIR}/
  ${PROJECT_SOURCE_DIR}/phpg/
  ${PROJECT_SOURCE_DIR}/src/
  ${PROJECT_SOURCE_DIR}/libs/
  )

set(phpcoder-SRC
  ${PROJECT_SOURCE_DIR}/src/main.cpp
  ${PROJECT_SOURCE_DIR}/src/PHPVisitor.cpp 
  ${phpcoder-GENERATED_SRC}
  )

if (NOT CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set (flags_1 "-Wno-overloaded-virtual")
else()
  set (flags_1 "-MP /wd4251")
endif()

foreach( src_file ${phpcoder-SRC} )
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach( src_file ${phpcoder-SRC} )

add_executable(phpbot
  ${phpcoder-SRC}
)

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")  
  # see https://github.com/antlr/antlr4/issues/1874
  target_compile_options(phpbot PUBLIC "$<$<CONFIG:DEBUG>:/MT>")
endif()

if(WIN32)
  target_link_libraries(phpbot "${ANTLR_CPP_RUNTIME_DST}/usr/local/lib/antlr4-runtime.lib")
endif()

if(APPLE)
  target_link_libraries(phpbot "${ANTLR_CPP_RUNTIME_DST}/usr/local/lib/libantlr4-runtime.dylib")
elseif(UNIX)
  target_link_libraries(phpbot "${ANTLR_CPP_RUNTIME_DST}/usr/local/lib/libantlr4-runtime.so")
endif()  

target_link_libraries(phpbot ${SYSTEM_LIBS})

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
add_custom_command(TARGET phpbot POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
  "${ANTLR_CPP_RUNTIME_DST}/usr/local/lib/libantlr4-runtime.so"
  $<TARGET_FILE_DIR:phpbot>)
endif()

if(WIN32)
add_custom_command(TARGET phpbot POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
  "${ANTLR_CPP_RUNTIME_DST}/usr/local/lib/antlr4-runtime.dll"
  $<TARGET_FILE_DIR:phpbot>)
endif()

# 拷贝文件，暂时不操作
if(APPLE)
add_custom_command(TARGET phpbot POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
  "${ANTLR_CPP_RUNTIME_DST}/usr/local/lib/libantlr4-runtime.4.8.dylib"
  $<TARGET_FILE_DIR:phpbot>)
endif()

# copy the input file next to the generated executable
add_custom_command(TARGET phpbot POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
  "${PROJECT_SOURCE_DIR}/tests/test.php"
  $<TARGET_FILE_DIR:phpbot>)

# necessary because the default working directory of Visual Studio
# is not the same as the one in which the binary is created
# so we copy the input file twice:
# one for when you launch the executale in Visual Studio (CTRL+F5)
# one for when you launch it normally
if (WIN32)
add_custom_command(TARGET phpbot POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
  "${PROJECT_SOURCE_DIR}/tests/test.php"
  $<TARGET_FILE_DIR:phpbot>/../)
endif()