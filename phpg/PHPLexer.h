
// Generated from PHPLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  PHPLexer : public antlr4::Lexer {
public:
  enum {
    PHPStart = 1, PHPO = 2, Html = 3, HtmlWS = 4, PHPEnd = 5, MultiLineComment = 6, 
    SinglelineComment = 7, UnixComment = 8, RealE = 9, As = 10, SemiColon = 11, 
    Instanceof = 12, And = 13, List = 14, Const = 15, Or = 16, Xor = 17, 
    Global = 18, Continue = 19, Return = 20, Implements = 21, Var = 22, 
    Class = 23, Extends = 24, Do = 25, Switch = 26, Case = 27, Default = 28, 
    Function = 29, Break = 30, If = 31, Else = 32, ElseIf = 33, For = 34, 
    Foreach = 35, While = 36, Equals = 37, New = 38, Clone = 39, Ampersand = 40, 
    Pipe = 41, Bang = 42, Plus = 43, Minus = 44, Asterisk = 45, Percent = 46, 
    Forwardslash = 47, Tilde = 48, InstanceMember = 49, SuppressWarnings = 50, 
    Dollar = 51, Dot = 52, ArrayAssign = 53, LogicalOr = 54, LogicalAnd = 55, 
    ClassMember = 56, QuestionMark = 57, OpenRoundBracket = 58, CloseRoundBracket = 59, 
    OpenSquareBracket = 60, CloseSquareBracket = 61, OpenCurlyBracket = 62, 
    CloseCurlyBracket = 63, Interface = 64, Comma = 65, Colon = 66, Abstract = 67, 
    Static = 68, Array = 69, RequireOperator = 70, PrimitiveType = 71, AccessModifier = 72, 
    DecimalNumber = 73, HexNumber = 74, OctalNumber = 75, Float = 76, Digits = 77, 
    Boolean = 78, SingleQuotedString = 79, EscapeCharacter = 80, DoubleQuotedString = 81, 
    Identifier = 82, AssignmentOperator = 83, EqualityOperator = 84, ComparisionOperator = 85, 
    ShiftOperator = 86, IncrementOperator = 87, WS = 88
  };

  enum {
    PHPMode = 1
  };

  PHPLexer(antlr4::CharStream *input);
  ~PHPLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

