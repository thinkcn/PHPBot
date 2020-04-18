# PHPBot
PHP code generator, which currently includes the ability to generate Getter and Setter

## Building PHPBot

1. Prepare Antlr4 jar

```bash
curl -O https://www.antlr.org/download/antlr-4.7.1-complete.jar
```

2. Install Antlr Cpp Runtime

```bash
svn co https://github.com/antlr/antlr4/trunk/runtime/Cpp cppruntime
cd cppruntime
mkdir build && mkdir run && cd build
# TODO: Please note to modify to your own path. 
alias antlr-4='java -Xmx500M -cp "/path/to/antlr-4.7.1-complete.jar:$CLASSPATH" org.antlr.v4.Tool'
cmake .. -DANTLR_JAR_LOCATION=/path/to/antlr-4.7.1-complete.jar -DWITH_DEMO=True
make
# TODO: modify to your own path.
DESTDIR=/antlrcpp/runtime/path/inatall/path/ make install
```

3. Build

```bash
git pull https://github.com/thinkcn/PHPBot.git
cd PHPBot
# modify 'ANTLR_CPP_RUNTIME_DST' of CMakeLists.txt 
mkdir build
cd build
cmake ..
make
```

## Test

```bash
# Generate Getter
./phpbot ../tests/test.php -g
# Generate Setter
./phpbot ../tests/test.php -s
# Both
./phpbot ../tests/test.php -gs
# Help
./phpbot ../tests/test.php -h
```

4. Others

- Tested to pass on WSL and MacOS