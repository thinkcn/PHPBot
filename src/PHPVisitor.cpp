#include <algorithm>
#include "antlr4-runtime/antlr4-runtime.h"
#include "PHPVisitor.h"
#include "Token.h"

antlrcpp::Any PHPVisitor::visitProg(PHPParser::ProgContext *ctx) 
{
    antlr4::Token *token =   ctx->getStart(); 

    int line    = token->getLine(); 
    std::string word = token->getText(); 

    debug() &&  printf("func:%s line:%d %s\n", __FUNCTION__, line, word.data());

    return visitChildren(ctx);
}

antlrcpp::Any PHPVisitor::visitPhpBlock(PHPParser::PhpBlockContext *context) 
{
    antlr4::Token *token =   context->getStart(); 

    int line    = token->getLine(); 
    std::string word = token->getText(); 

    //printf("func:%s line:%d %s\n", __FUNCTION__, line, word.data());
    return visitChildren(context);
}

antlrcpp::Any PHPVisitor::visitClassName(PHPParser::ClassNameContext *context) 
{
    antlr4::Token *token =   context->Identifier()->getSymbol(); 

    int line    = token->getLine();// - 1;
    std::string word = token->getText();

    debug() &&  printf("func:%s line:%d %s\n", __FUNCTION__, line, word.data());
    return visitChildren(context);
}

antlrcpp::Any PHPVisitor::visitClassDefinition(PHPParser::ClassDefinitionContext *context) 
{
    antlr4::Token *token = context->getStart(); 

    int line    = token->getLine();
    std::string word = token->getText(); 


    debug() &&  printf("func:%s line:%d %s\n", __FUNCTION__, line, word.data());
    return visitChildren(context);
}

antlrcpp::Any PHPVisitor::visitClassImplements(PHPParser::ClassImplementsContext *context) 
{
    antlr4::Token *token =   context->getStart(); 

    int line    = token->getLine(); 
    std::string word = token->getText(); 

    debug() && printf("func:%s line:%d %s\n", __FUNCTION__, line, word.data());
    return visitChildren(context);
}


antlrcpp::Any PHPVisitor::visitClassMember(PHPParser::ClassMemberContext *context) 
{
 
    debug() && printf("\n");
    antlr4::Token *token = context->getStart(); 

    int line    = token->getLine(); 
    std::string word = token->getText(); 

    debug() && printf("func:%s line:%d %s\n", __FUNCTION__, line, word.data());
 
    PHPParser::FieldDefinitionContext *field = context->fieldDefinition();
    if (field) {
        antlr4::Token *token9 =   field->fieldName()->variablename()->getStart(); 
     
        std::string word9 = token9->getText(); 
        debug() &&  printf("\tfield:%s line:%zu %s\n", __FUNCTION__, token9->getLine(), word9.data());

        classFields.push_back(word9);
    }
 
    // 修饰
    std::vector<PHPParser::FieldModifierContext *> members = context->fieldModifier();
    if (members.size() > 0){

        for (size_t i =0; i < members.size(); i ++) {

            antlr4::Token *token5 =   context->fieldModifier(i)->getStart(); 

            int line5    = token5->getLine(); 
            std::string word5 = token5->getText(); 
            //printf("\tfunc-par:%s line:%d %s\n", __FUNCTION__, line5, word5.data());
        }
    }

    if (context->Function()) { 
        antlr4::Token *token2 =   context->Function()->getSymbol(); 

        int line2    = token2->getLine();
        std::string word2 = token2->getText(); 
        //printf("functionA---:%s line:%d %s\n", __FUNCTION__, line2, word2.data());

        if (context->functionName()) {
            antlr4::Token *token3 =   context->functionName()->getStart(); 

            int line3    = token3->getLine(); 
            std::string word3 = token3->getText(); 

            methods.push_back(word3);

            debug() && printf("function name---:%s line:%d %s\n", __FUNCTION__, line3, word3.data());
        }

        PHPParser::ParametersDefinitionContext *param = context->parametersDefinition();
        if (param) {

            std::vector<PHPParser::ParamDefContext *> params = param->paramDef();

            for (size_t i =0; i < params.size(); i ++) {
                antlr4::Token *token7 = param->paramDef(i)->paramName()->Identifier()->getSymbol(); 

                std::string word7 = token7->getText(); 

                debug() &&  printf("\tfunction param---:%s line:%zu %s\n", __FUNCTION__, token7->getLine(), word7.data());
            }
        }
    }

    // PSR-2不支持 //TODO
    if (context->Var()) {
        antlr4::Token *token8 =   context->Var()->getSymbol(); 

        int line8    = token8->getLine(); 
        std::string word8 = token8->getText(); 

        debug() && printf("\tvar---:%s line:%d %s\n", __FUNCTION__, line8, word8.data());
    }
    return visitChildren(context);
}


antlrcpp::Any PHPVisitor::visitClassModifier(PHPParser::ClassModifierContext *context)
{
    antlr4::Token *token =   context->getStart(); 
    int line    = token->getLine();
    std::string word = token->getText(); 

    debug() && printf("func:%s line:%d %s\n", __FUNCTION__, line, word.data());
    return visitChildren(context);
}


std::string PHPVisitor::gerSetter() 
{
    std::stringstream str;
    for (size_t i =0; i < classFields.size(); i ++) {
        std::string field = classFields[i]; 

        std::string setter = gerFieldSetter(field);
        //printf("%s\n", setter.data());

        str << setter;

        if (i < classFields.size() - 1) {
            str << "\n";
        }
    }

    return str.str();
}

std::string PHPVisitor::gerGetter()
{
    std::stringstream str;
    for (size_t i =0; i < classFields.size(); i ++) {
        std::string field = classFields[i]; 

        std::string getter = gerFieldGetter(field); 

        str << getter;

        if (i < classFields.size() - 1) {
            str << "\n";
        }
    }

    return str.str();
}

std::string PHPVisitor::gerGetterSetter()
{
    std::stringstream str;
    for (size_t i =0; i < classFields.size(); i ++) {
        std::string field = classFields[i]; 

        std::string getter = gerFieldGetter(field); 
        std::string setter = gerFieldSetter(field); 

        str << setter << "\n" << getter;

        if (i < classFields.size() - 1) {
            str << "\n";
        }
    }

    return str.str(); 
}

std::string PHPVisitor::gerFieldGetter(std::string field)
{
    std::string name = "get" + std::string(toUpper(field));
    if (std::find(methods.begin(), methods.end(), name) != methods.end()) {
        return "";
    }
    std::string tab = "    ";// "\t";
    std::stringstream res;   
    res << tab << "/**\n"
    << tab << " * @return mixed\n" //TODO: 类型推导
    << tab << " */\n"
    << tab << "public function " << name <<"()\n"
    << tab << "{\n"
    << tab << "\treturn $this->" << field << ";\n"
    << tab << "}\n";
    return res.str();
}

std::string PHPVisitor::gerFieldSetter(std::string field) 
{
    std::string name = "set" + std::string(toUpper(field));
    if (std::find(methods.begin(), methods.end(), name) != methods.end()) {
        return "";
    }
    std::string tab = "    ";// "\t";
    std::stringstream res;   
    res << tab << "/**\n"
    << tab << " * @param mixed $" << field << "\n" //TODO:: 类型推导
    << tab << " *\n"
    << tab << " * @return self\n"
    << tab << " */\n"
    << tab << "public function " << name <<"($" << field <<")\n"
    << tab << "{\n"
    << tab << "\t$this->" << field <<" = $" << field << ";\n"
    "\n" // 空行
    << tab << "\treturn $this;\n" //TODO: config
    << tab << "}\n";
    return res.str();
}

char* PHPVisitor::toUpper(std::string str) 
{
    char* res = (char *)str.data();

    if(res[0] >= 'a' && res[0] <= 'z'){
        res[0] = res[0]-32;
    }

    return res;
}

void PHPVisitor::setDebug(bool _isDebug) {
    isDebug = _isDebug;
}

bool PHPVisitor::debug() {
    return isDebug; // TODO: config
}