/**
 * Copyright (c) 2020, mll <coleflowersma at gmail dot com>
 * All rights reserved.
 */
#include "PHPParserVisitor.h"
#include "PHPParserBaseVisitor.h"

class  PHPVisitor : public PHPParserBaseVisitor {
public:

  std::vector<std::string> classFields;
  std::vector<std::string> methods;
  std::string gerSetter();
  std::string gerGetter();
  std::string gerGetterSetter();
  void setDebug(bool isDebug);

  antlrcpp::Any visitProg(PHPParser::ProgContext *ctx) override; 
  antlrcpp::Any visitPhpBlock(PHPParser::PhpBlockContext *ctx) override ;
  antlrcpp::Any visitClassName(PHPParser::ClassNameContext *context) override; 
  antlrcpp::Any visitClassDefinition(PHPParser::ClassDefinitionContext *context) override ; 
  antlrcpp::Any visitClassImplements(PHPParser::ClassImplementsContext *context) override; 
  antlrcpp::Any visitClassMember(PHPParser::ClassMemberContext *context) override; 
  antlrcpp::Any visitClassModifier(PHPParser::ClassModifierContext *context) override; 

private:
    bool isDebug = false;
    std::string gerFieldSetter(std::string field);
    std::string gerFieldGetter(std::string field);
    char* toUpper(std::string str);
    bool debug();
};