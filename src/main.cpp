/**
 * Copyright (c) 2020, mll <coleflowersma at gmail dot com>
 * All rights reserved.
 */
#include <iostream>
#include <string.h>
#include <stdio.h> 
#include "antlr4-runtime/antlr4-runtime.h" 
#include "PHPLexer.h"
#include "PHPParser.h"
#include "PHPParserVisitor.h"
#include "PHPVisitor.h"

#define PHPBOT_VERSION "Beta1.0.0"

using namespace std;
using namespace antlr4;

void usage(void) {
    fprintf(stderr,
    "phobot %s\n"
    "\n"
    "Usage: phobot [OPTIONS] [phpfile]\n"
    "  -h             Output this help and exit.\n"
    "  -gs            Output PHP class Getter and Setter.\n"
    "  -g             Output PHP class Getter.\n"
    "  -s             Output PHP class Setter.\n" 
    "  -d             Open debug mode.\n" 
    //"  -c             Output PHP class copyright.\n"
    "  --help         Output this help and exit.\n"
    "  --version      Output version and exit.\n"
    "\n",
        PHPBOT_VERSION);
    exit(1);
}

void version(void)
{
    fprintf(stderr, "phobot %s\n", PHPBOT_VERSION);
    exit(1);
}

int main(int argc, const char* argv[]) { 
    
    if (argc <= 1) {
        usage();
        return 1;
    }
    const char* name = argv[1];

    //TODO: 检测参数文件存在

    char *cmd = "gettersetter";
    bool isDebug = false;

    for (int i = 1; i < argc; i++) {
        int lastarg = i==argc-1;

        if (!strcmp(argv[i],"-h") && lastarg) {
            usage();
        } else if (!strcmp(argv[i],"--help")) {
            usage();
        } else if(!strcmp(argv[i], "--version")) {
            version();
        } else if (!strcmp(argv[i],"-gs")) {
            cmd = "gettersetter";
        } else if (!strcmp(argv[i], "-g")) {
            cmd = "getter";
        } else if (!strcmp(argv[i], "-s")) {
            cmd = "setter";
        } else if (!strcmp(argv[i], "-c")) {
            cmd = "copyright";
        } else if (!strcmp(argv[i], "-d")) {
            isDebug = true;
        }
    }

    std::ifstream stream;

    stream.open(name);
    
    ANTLRInputStream input(stream);
    PHPLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    PHPParser parser(&tokens);
    PHPParser::ProgContext* tree = parser.prog();
    
    PHPVisitor visitor;
    visitor.setDebug(isDebug);
    visitor.visitProg(tree);

    if (!strcmp(cmd, "setter")) { 
        std::string res = visitor.gerSetter();
        printf("%s\n", res.data()); 
    } else if(!strcmp(cmd, "getter")) {
        std::string res = visitor.gerGetter();
        printf("%s\n", res.data());
    } else if(!strcmp(cmd, "gettersetter")) {
        std::string res = visitor.gerGetterSetter();
        printf("%s\n", res.data());
    }
    return 0;
}