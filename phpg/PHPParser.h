
// Generated from PHPParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  PHPParser : public antlr4::Parser {
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
    RuleProg = 0, RuleHtmlblock = 1, RuleHtml = 2, RulePhpBlock = 3, RuleProlog = 4, 
    RuleEpilog = 5, RuleStatement = 6, RuleComplexStatement = 7, RuleForstatement = 8, 
    RuleIfstatement = 9, RuleForeachstatement = 10, RuleWhilestatement = 11, 
    RuleDostatement = 12, RuleSwitchstatement = 13, RuleSimpleStatement = 14, 
    RuleGlobalStatement = 15, RuleStaticVariableAssignmentStatement = 16, 
    RuleBreakStatement = 17, RuleContinueStatement = 18, RuleReturnStatement = 19, 
    RuleRequireStatement = 20, RuleCases = 21, RuleCasestatement = 22, RuleDefaultcase = 23, 
    RuleVariable = 24, RuleVariablename = 25, RuleName = 26, RuleStaticMemberAccess = 27, 
    RuleMemberAccess = 28, RuleBracketedBlock = 29, RuleInterfaceDefinition = 30, 
    RuleInterfaceName = 31, RuleInterfaceExtends = 32, RuleInterfaceMember = 33, 
    RuleClassName = 34, RuleClassDefinition = 35, RuleClassImplements = 36, 
    RuleClassMember = 37, RuleClassModifier = 38, RuleConstDefinition = 39, 
    RuleFieldDefinition = 40, RuleFieldModifier = 41, RuleFieldName = 42, 
    RuleFunctionDefinition = 43, RuleParametersDefinition = 44, RuleFunctionInvocation = 45, 
    RuleFunctionName = 46, RuleFunctionInvocationParameters = 47, RuleParamDef = 48, 
    RuleParamName = 49, RuleCommaList = 50, RuleExpression = 51, RuleWeakLogicalOr = 52, 
    RuleWeakLogicalXor = 53, RuleWeakLogicalAnd = 54, RuleAssignment = 55, 
    RuleListVariables = 56, RuleTernary = 57, RuleLogicalOr = 58, RuleLogicalAnd = 59, 
    RuleBitwiseOr = 60, RuleBitWiseAnd = 61, RuleEqualityCheck = 62, RuleComparisionCheck = 63, 
    RuleBitWiseShift = 64, RuleAddition = 65, RuleMultiplication = 66, RuleLogicalNot = 67, 
    RuleInstanceOf = 68, RuleNegateOrCast = 69, RuleIncrement = 70, RuleNewOrClone = 71, 
    RuleAtomOrReference = 72, RuleArrayDeclaration = 73, RuleArrayEntry = 74, 
    RuleKeyValuePair = 75, RuleAtom = 76, RuleReference = 77, RuleNumber = 78, 
    RuleInteger = 79, RuleReal = 80, RuleString = 81
  };

  PHPParser(antlr4::TokenStream *input);
  ~PHPParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class HtmlblockContext;
  class HtmlContext;
  class PhpBlockContext;
  class PrologContext;
  class EpilogContext;
  class StatementContext;
  class ComplexStatementContext;
  class ForstatementContext;
  class IfstatementContext;
  class ForeachstatementContext;
  class WhilestatementContext;
  class DostatementContext;
  class SwitchstatementContext;
  class SimpleStatementContext;
  class GlobalStatementContext;
  class StaticVariableAssignmentStatementContext;
  class BreakStatementContext;
  class ContinueStatementContext;
  class ReturnStatementContext;
  class RequireStatementContext;
  class CasesContext;
  class CasestatementContext;
  class DefaultcaseContext;
  class VariableContext;
  class VariablenameContext;
  class NameContext;
  class StaticMemberAccessContext;
  class MemberAccessContext;
  class BracketedBlockContext;
  class InterfaceDefinitionContext;
  class InterfaceNameContext;
  class InterfaceExtendsContext;
  class InterfaceMemberContext;
  class ClassNameContext;
  class ClassDefinitionContext;
  class ClassImplementsContext;
  class ClassMemberContext;
  class ClassModifierContext;
  class ConstDefinitionContext;
  class FieldDefinitionContext;
  class FieldModifierContext;
  class FieldNameContext;
  class FunctionDefinitionContext;
  class ParametersDefinitionContext;
  class FunctionInvocationContext;
  class FunctionNameContext;
  class FunctionInvocationParametersContext;
  class ParamDefContext;
  class ParamNameContext;
  class CommaListContext;
  class ExpressionContext;
  class WeakLogicalOrContext;
  class WeakLogicalXorContext;
  class WeakLogicalAndContext;
  class AssignmentContext;
  class ListVariablesContext;
  class TernaryContext;
  class LogicalOrContext;
  class LogicalAndContext;
  class BitwiseOrContext;
  class BitWiseAndContext;
  class EqualityCheckContext;
  class ComparisionCheckContext;
  class BitWiseShiftContext;
  class AdditionContext;
  class MultiplicationContext;
  class LogicalNotContext;
  class InstanceOfContext;
  class NegateOrCastContext;
  class IncrementContext;
  class NewOrCloneContext;
  class AtomOrReferenceContext;
  class ArrayDeclarationContext;
  class ArrayEntryContext;
  class KeyValuePairContext;
  class AtomContext;
  class ReferenceContext;
  class NumberContext;
  class IntegerContext;
  class RealContext;
  class StringContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PhpBlockContext *> phpBlock();
    PhpBlockContext* phpBlock(size_t i);
    std::vector<HtmlblockContext *> htmlblock();
    HtmlblockContext* htmlblock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  HtmlblockContext : public antlr4::ParserRuleContext {
  public:
    HtmlblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PHPO();
    std::vector<HtmlContext *> html();
    HtmlContext* html(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HtmlblockContext* htmlblock();

  class  HtmlContext : public antlr4::ParserRuleContext {
  public:
    HtmlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Html();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HtmlContext* html();

  class  PhpBlockContext : public antlr4::ParserRuleContext {
  public:
    PhpBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrologContext *prolog();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    EpilogContext *epilog();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhpBlockContext* phpBlock();

  class  PrologContext : public antlr4::ParserRuleContext {
  public:
    PrologContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PHPStart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrologContext* prolog();

  class  EpilogContext : public antlr4::ParserRuleContext {
  public:
    EpilogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PHPEnd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EpilogContext* epilog();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    BracketedBlockContext *bracketedBlock();
    ClassDefinitionContext *classDefinition();
    InterfaceDefinitionContext *interfaceDefinition();
    ComplexStatementContext *complexStatement();
    SimpleStatementContext *simpleStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ComplexStatementContext : public antlr4::ParserRuleContext {
  public:
    ComplexStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfstatementContext *ifstatement();
    ForstatementContext *forstatement();
    ForeachstatementContext *foreachstatement();
    WhilestatementContext *whilestatement();
    DostatementContext *dostatement();
    SwitchstatementContext *switchstatement();
    FunctionDefinitionContext *functionDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComplexStatementContext* complexStatement();

  class  ForstatementContext : public antlr4::ParserRuleContext {
  public:
    ForstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForstatementContext* forstatement();

  class  IfstatementContext : public antlr4::ParserRuleContext {
  public:
    IfstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ElseIf();
    antlr4::tree::TerminalNode* ElseIf(size_t i);
    antlr4::tree::TerminalNode *Else();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfstatementContext* ifstatement();

  class  ForeachstatementContext : public antlr4::ParserRuleContext {
  public:
    ForeachstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Foreach();
    VariableContext *variable();
    ArrayEntryContext *arrayEntry();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForeachstatementContext* foreachstatement();

  class  WhilestatementContext : public antlr4::ParserRuleContext {
  public:
    WhilestatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    StatementContext *statement();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhilestatementContext* whilestatement();

  class  DostatementContext : public antlr4::ParserRuleContext {
  public:
    DostatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Do();
    StatementContext *statement();
    antlr4::tree::TerminalNode *While();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DostatementContext* dostatement();

  class  SwitchstatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Switch();
    ExpressionContext *expression();
    CasesContext *cases();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchstatementContext* switchstatement();

  class  SimpleStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GlobalStatementContext *globalStatement();
    StaticVariableAssignmentStatementContext *staticVariableAssignmentStatement();
    BreakStatementContext *breakStatement();
    ContinueStatementContext *continueStatement();
    ReturnStatementContext *returnStatement();
    RequireStatementContext *requireStatement();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleStatementContext* simpleStatement();

  class  GlobalStatementContext : public antlr4::ParserRuleContext {
  public:
    GlobalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Global();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalStatementContext* globalStatement();

  class  StaticVariableAssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    StaticVariableAssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *Equals();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Static();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StaticVariableAssignmentStatementContext* staticVariableAssignmentStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *DecimalNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *DecimalNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  RequireStatementContext : public antlr4::ParserRuleContext {
  public:
    RequireStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RequireOperator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequireStatementContext* requireStatement();

  class  CasesContext : public antlr4::ParserRuleContext {
  public:
    CasesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefaultcaseContext *defaultcase();
    std::vector<CasestatementContext *> casestatement();
    CasestatementContext* casestatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CasesContext* cases();

  class  CasestatementContext : public antlr4::ParserRuleContext {
  public:
    CasestatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Case();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Colon();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CasestatementContext* casestatement();

  class  DefaultcaseContext : public antlr4::ParserRuleContext {
  public:
    DefaultcaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Colon();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultcaseContext* defaultcase();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dollar();
    std::vector<VariablenameContext *> variablename();
    VariablenameContext* variablename(size_t i);
    antlr4::tree::TerminalNode *InstanceMember();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  VariablenameContext : public antlr4::ParserRuleContext {
  public:
    VariablenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariablenameContext* variablename();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StaticMemberAccessContext *staticMemberAccess();
    MemberAccessContext *memberAccess();
    VariableContext *variable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  StaticMemberAccessContext : public antlr4::ParserRuleContext {
  public:
    StaticMemberAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *ClassMember();
    VariableContext *variable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StaticMemberAccessContext* staticMemberAccess();

  class  MemberAccessContext : public antlr4::ParserRuleContext {
  public:
    MemberAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    std::vector<antlr4::tree::TerminalNode *> OpenSquareBracket();
    antlr4::tree::TerminalNode* OpenSquareBracket(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CloseSquareBracket();
    antlr4::tree::TerminalNode* CloseSquareBracket(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberAccessContext* memberAccess();

  class  BracketedBlockContext : public antlr4::ParserRuleContext {
  public:
    BracketedBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BracketedBlockContext* bracketedBlock();

  class  InterfaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    InterfaceNameContext *interfaceName();
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    InterfaceExtendsContext *interfaceExtends();
    std::vector<InterfaceMemberContext *> interfaceMember();
    InterfaceMemberContext* interfaceMember(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceDefinitionContext* interfaceDefinition();

  class  InterfaceNameContext : public antlr4::ParserRuleContext {
  public:
    InterfaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceNameContext* interfaceName();

  class  InterfaceExtendsContext : public antlr4::ParserRuleContext {
  public:
    InterfaceExtendsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extends();
    std::vector<InterfaceNameContext *> interfaceName();
    InterfaceNameContext* interfaceName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceExtendsContext* interfaceExtends();

  class  InterfaceMemberContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Equals();
    AtomContext *atom();
    antlr4::tree::TerminalNode *Function();
    FunctionNameContext *functionName();
    ParametersDefinitionContext *parametersDefinition();
    std::vector<FieldModifierContext *> fieldModifier();
    FieldModifierContext* fieldModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceMemberContext* interfaceMember();

  class  ClassNameContext : public antlr4::ParserRuleContext {
  public:
    ClassNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassNameContext* className();

  class  ClassDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClassDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    std::vector<ClassNameContext *> className();
    ClassNameContext* className(size_t i);
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    ClassModifierContext *classModifier();
    antlr4::tree::TerminalNode *Extends();
    ClassImplementsContext *classImplements();
    std::vector<ClassMemberContext *> classMember();
    ClassMemberContext* classMember(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDefinitionContext* classDefinition();

  class  ClassImplementsContext : public antlr4::ParserRuleContext {
  public:
    ClassImplementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Implements();
    std::vector<InterfaceNameContext *> interfaceName();
    InterfaceNameContext* interfaceName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassImplementsContext* classImplements();

  class  ClassMemberContext : public antlr4::ParserRuleContext {
  public:
    ClassMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function();
    FunctionNameContext *functionName();
    ParametersDefinitionContext *parametersDefinition();
    BracketedBlockContext *bracketedBlock();
    std::vector<FieldModifierContext *> fieldModifier();
    FieldModifierContext* fieldModifier(size_t i);
    ConstDefinitionContext *constDefinition();
    FieldDefinitionContext *fieldDefinition();
    antlr4::tree::TerminalNode *Var();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassMemberContext* classMember();

  class  ClassModifierContext : public antlr4::ParserRuleContext {
  public:
    ClassModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Abstract();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassModifierContext* classModifier();

  class  ConstDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ConstDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    VariablenameContext *variablename();
    antlr4::tree::TerminalNode *Equals();
    AtomContext *atom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstDefinitionContext* constDefinition();

  class  FieldDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FieldDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldNameContext *fieldName();
    antlr4::tree::TerminalNode *Equals();
    AtomContext *atom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldDefinitionContext* fieldDefinition();

  class  FieldModifierContext : public antlr4::ParserRuleContext {
  public:
    FieldModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AccessModifier();
    antlr4::tree::TerminalNode *Abstract();
    antlr4::tree::TerminalNode *Static();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldModifierContext* fieldModifier();

  class  FieldNameContext : public antlr4::ParserRuleContext {
  public:
    FieldNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dollar();
    VariablenameContext *variablename();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldNameContext* fieldName();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function();
    FunctionNameContext *functionName();
    ParametersDefinitionContext *parametersDefinition();
    BracketedBlockContext *bracketedBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  ParametersDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ParametersDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    std::vector<ParamDefContext *> paramDef();
    ParamDefContext* paramDef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersDefinitionContext* parametersDefinition();

  class  FunctionInvocationContext : public antlr4::ParserRuleContext {
  public:
    FunctionInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionNameContext *functionName();
    FunctionInvocationParametersContext *functionInvocationParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionInvocationContext* functionInvocation();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameContext* functionName();

  class  FunctionInvocationParametersContext : public antlr4::ParserRuleContext {
  public:
    FunctionInvocationParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenRoundBracket();
    CommaListContext *commaList();
    antlr4::tree::TerminalNode *CloseRoundBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionInvocationParametersContext* functionInvocationParameters();

  class  ParamDefContext : public antlr4::ParserRuleContext {
  public:
    ParamDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamNameContext *paramName();
    antlr4::tree::TerminalNode *Equals();
    AtomContext *atom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamDefContext* paramDef();

  class  ParamNameContext : public antlr4::ParserRuleContext {
  public:
    ParamNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dollar();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Ampersand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamNameContext* paramName();

  class  CommaListContext : public antlr4::ParserRuleContext {
  public:
    CommaListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommaListContext* commaList();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WeakLogicalOrContext *weakLogicalOr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  WeakLogicalOrContext : public antlr4::ParserRuleContext {
  public:
    WeakLogicalOrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WeakLogicalXorContext *> weakLogicalXor();
    WeakLogicalXorContext* weakLogicalXor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WeakLogicalOrContext* weakLogicalOr();

  class  WeakLogicalXorContext : public antlr4::ParserRuleContext {
  public:
    WeakLogicalXorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WeakLogicalAndContext *> weakLogicalAnd();
    WeakLogicalAndContext* weakLogicalAnd(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Xor();
    antlr4::tree::TerminalNode* Xor(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WeakLogicalXorContext* weakLogicalXor();

  class  WeakLogicalAndContext : public antlr4::ParserRuleContext {
  public:
    WeakLogicalAndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WeakLogicalAndContext* weakLogicalAnd();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ListVariablesContext *listVariables();
    AssignmentContext *assignment();
    antlr4::tree::TerminalNode *Equals();
    antlr4::tree::TerminalNode *AssignmentOperator();
    TernaryContext *ternary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  ListVariablesContext : public antlr4::ParserRuleContext {
  public:
    ListVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *List();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *CloseRoundBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListVariablesContext* listVariables();

  class  TernaryContext : public antlr4::ParserRuleContext {
  public:
    TernaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrContext *logicalOr();
    antlr4::tree::TerminalNode *QuestionMark();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TernaryContext* ternary();

  class  LogicalOrContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicalAndContext *> logicalAnd();
    LogicalAndContext* logicalAnd(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LogicalOr();
    antlr4::tree::TerminalNode* LogicalOr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOrContext* logicalOr();

  class  LogicalAndContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitwiseOrContext *> bitwiseOr();
    BitwiseOrContext* bitwiseOr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LogicalAnd();
    antlr4::tree::TerminalNode* LogicalAnd(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalAndContext* logicalAnd();

  class  BitwiseOrContext : public antlr4::ParserRuleContext {
  public:
    BitwiseOrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitWiseAndContext *> bitWiseAnd();
    BitWiseAndContext* bitWiseAnd(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Pipe();
    antlr4::tree::TerminalNode* Pipe(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitwiseOrContext* bitwiseOr();

  class  BitWiseAndContext : public antlr4::ParserRuleContext {
  public:
    BitWiseAndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqualityCheckContext *> equalityCheck();
    EqualityCheckContext* equalityCheck(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ampersand();
    antlr4::tree::TerminalNode* Ampersand(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitWiseAndContext* bitWiseAnd();

  class  EqualityCheckContext : public antlr4::ParserRuleContext {
  public:
    EqualityCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComparisionCheckContext *> comparisionCheck();
    ComparisionCheckContext* comparisionCheck(size_t i);
    antlr4::tree::TerminalNode *EqualityOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityCheckContext* equalityCheck();

  class  ComparisionCheckContext : public antlr4::ParserRuleContext {
  public:
    ComparisionCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitWiseShiftContext *> bitWiseShift();
    BitWiseShiftContext* bitWiseShift(size_t i);
    antlr4::tree::TerminalNode *ComparisionOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisionCheckContext* comparisionCheck();

  class  BitWiseShiftContext : public antlr4::ParserRuleContext {
  public:
    BitWiseShiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AdditionContext *> addition();
    AdditionContext* addition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ShiftOperator();
    antlr4::tree::TerminalNode* ShiftOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitWiseShiftContext* bitWiseShift();

  class  AdditionContext : public antlr4::ParserRuleContext {
  public:
    AdditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiplicationContext *> multiplication();
    MultiplicationContext* multiplication(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Plus();
    antlr4::tree::TerminalNode* Plus(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Minus();
    antlr4::tree::TerminalNode* Minus(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditionContext* addition();

  class  MultiplicationContext : public antlr4::ParserRuleContext {
  public:
    MultiplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicalNotContext *> logicalNot();
    LogicalNotContext* logicalNot(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Asterisk();
    antlr4::tree::TerminalNode* Asterisk(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Forwardslash();
    antlr4::tree::TerminalNode* Forwardslash(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Percent();
    antlr4::tree::TerminalNode* Percent(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicationContext* multiplication();

  class  LogicalNotContext : public antlr4::ParserRuleContext {
  public:
    LogicalNotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Bang();
    LogicalNotContext *logicalNot();
    InstanceOfContext *instanceOf();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalNotContext* logicalNot();

  class  InstanceOfContext : public antlr4::ParserRuleContext {
  public:
    InstanceOfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NegateOrCastContext *> negateOrCast();
    NegateOrCastContext* negateOrCast(size_t i);
    antlr4::tree::TerminalNode *Instanceof();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstanceOfContext* instanceOf();

  class  NegateOrCastContext : public antlr4::ParserRuleContext {
  public:
    NegateOrCastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementContext *increment();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *SuppressWarnings();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *PrimitiveType();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    WeakLogicalAndContext *weakLogicalAnd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NegateOrCastContext* negateOrCast();

  class  IncrementContext : public antlr4::ParserRuleContext {
  public:
    IncrementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IncrementOperator();
    NameContext *name();
    NewOrCloneContext *newOrClone();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncrementContext* increment();

  class  NewOrCloneContext : public antlr4::ParserRuleContext {
  public:
    NewOrCloneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    NameContext *name();
    antlr4::tree::TerminalNode *Clone();
    AtomOrReferenceContext *atomOrReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewOrCloneContext* newOrClone();

  class  AtomOrReferenceContext : public antlr4::ParserRuleContext {
  public:
    AtomOrReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomContext *atom();
    ReferenceContext *reference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomOrReferenceContext* atomOrReference();

  class  ArrayDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ArrayDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Array();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    std::vector<ArrayEntryContext *> arrayEntry();
    ArrayEntryContext* arrayEntry(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayDeclarationContext* arrayDeclaration();

  class  ArrayEntryContext : public antlr4::ParserRuleContext {
  public:
    ArrayEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyValuePairContext *keyValuePair();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayEntryContext* arrayEntry();

  class  KeyValuePairContext : public antlr4::ParserRuleContext {
  public:
    KeyValuePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ArrayAssign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyValuePairContext* keyValuePair();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    StringContext *string();
    antlr4::tree::TerminalNode *Boolean();
    ArrayDeclarationContext *arrayDeclaration();
    FunctionInvocationContext *functionInvocation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  ReferenceContext : public antlr4::ParserRuleContext {
  public:
    ReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ampersand();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferenceContext* reference();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();
    RealContext *real();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecimalNumber();
    antlr4::tree::TerminalNode *HexNumber();
    antlr4::tree::TerminalNode *OctalNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerContext* integer();

  class  RealContext : public antlr4::ParserRuleContext {
  public:
    RealContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Float();
    antlr4::tree::TerminalNode* Float(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RealE();
    antlr4::tree::TerminalNode* RealE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DecimalNumber();
    antlr4::tree::TerminalNode* DecimalNumber(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RealContext* real();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SingleQuotedString();
    antlr4::tree::TerminalNode *DoubleQuotedString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

