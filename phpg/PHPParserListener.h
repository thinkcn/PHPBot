
// Generated from PHPParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PHPParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PHPParser.
 */
class  PHPParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(PHPParser::ProgContext *ctx) = 0;
  virtual void exitProg(PHPParser::ProgContext *ctx) = 0;

  virtual void enterHtmlblock(PHPParser::HtmlblockContext *ctx) = 0;
  virtual void exitHtmlblock(PHPParser::HtmlblockContext *ctx) = 0;

  virtual void enterHtml(PHPParser::HtmlContext *ctx) = 0;
  virtual void exitHtml(PHPParser::HtmlContext *ctx) = 0;

  virtual void enterPhpBlock(PHPParser::PhpBlockContext *ctx) = 0;
  virtual void exitPhpBlock(PHPParser::PhpBlockContext *ctx) = 0;

  virtual void enterProlog(PHPParser::PrologContext *ctx) = 0;
  virtual void exitProlog(PHPParser::PrologContext *ctx) = 0;

  virtual void enterEpilog(PHPParser::EpilogContext *ctx) = 0;
  virtual void exitEpilog(PHPParser::EpilogContext *ctx) = 0;

  virtual void enterStatement(PHPParser::StatementContext *ctx) = 0;
  virtual void exitStatement(PHPParser::StatementContext *ctx) = 0;

  virtual void enterComplexStatement(PHPParser::ComplexStatementContext *ctx) = 0;
  virtual void exitComplexStatement(PHPParser::ComplexStatementContext *ctx) = 0;

  virtual void enterForstatement(PHPParser::ForstatementContext *ctx) = 0;
  virtual void exitForstatement(PHPParser::ForstatementContext *ctx) = 0;

  virtual void enterIfstatement(PHPParser::IfstatementContext *ctx) = 0;
  virtual void exitIfstatement(PHPParser::IfstatementContext *ctx) = 0;

  virtual void enterForeachstatement(PHPParser::ForeachstatementContext *ctx) = 0;
  virtual void exitForeachstatement(PHPParser::ForeachstatementContext *ctx) = 0;

  virtual void enterWhilestatement(PHPParser::WhilestatementContext *ctx) = 0;
  virtual void exitWhilestatement(PHPParser::WhilestatementContext *ctx) = 0;

  virtual void enterDostatement(PHPParser::DostatementContext *ctx) = 0;
  virtual void exitDostatement(PHPParser::DostatementContext *ctx) = 0;

  virtual void enterSwitchstatement(PHPParser::SwitchstatementContext *ctx) = 0;
  virtual void exitSwitchstatement(PHPParser::SwitchstatementContext *ctx) = 0;

  virtual void enterSimpleStatement(PHPParser::SimpleStatementContext *ctx) = 0;
  virtual void exitSimpleStatement(PHPParser::SimpleStatementContext *ctx) = 0;

  virtual void enterGlobalStatement(PHPParser::GlobalStatementContext *ctx) = 0;
  virtual void exitGlobalStatement(PHPParser::GlobalStatementContext *ctx) = 0;

  virtual void enterStaticVariableAssignmentStatement(PHPParser::StaticVariableAssignmentStatementContext *ctx) = 0;
  virtual void exitStaticVariableAssignmentStatement(PHPParser::StaticVariableAssignmentStatementContext *ctx) = 0;

  virtual void enterBreakStatement(PHPParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(PHPParser::BreakStatementContext *ctx) = 0;

  virtual void enterContinueStatement(PHPParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(PHPParser::ContinueStatementContext *ctx) = 0;

  virtual void enterReturnStatement(PHPParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(PHPParser::ReturnStatementContext *ctx) = 0;

  virtual void enterRequireStatement(PHPParser::RequireStatementContext *ctx) = 0;
  virtual void exitRequireStatement(PHPParser::RequireStatementContext *ctx) = 0;

  virtual void enterCases(PHPParser::CasesContext *ctx) = 0;
  virtual void exitCases(PHPParser::CasesContext *ctx) = 0;

  virtual void enterCasestatement(PHPParser::CasestatementContext *ctx) = 0;
  virtual void exitCasestatement(PHPParser::CasestatementContext *ctx) = 0;

  virtual void enterDefaultcase(PHPParser::DefaultcaseContext *ctx) = 0;
  virtual void exitDefaultcase(PHPParser::DefaultcaseContext *ctx) = 0;

  virtual void enterVariable(PHPParser::VariableContext *ctx) = 0;
  virtual void exitVariable(PHPParser::VariableContext *ctx) = 0;

  virtual void enterVariablename(PHPParser::VariablenameContext *ctx) = 0;
  virtual void exitVariablename(PHPParser::VariablenameContext *ctx) = 0;

  virtual void enterName(PHPParser::NameContext *ctx) = 0;
  virtual void exitName(PHPParser::NameContext *ctx) = 0;

  virtual void enterStaticMemberAccess(PHPParser::StaticMemberAccessContext *ctx) = 0;
  virtual void exitStaticMemberAccess(PHPParser::StaticMemberAccessContext *ctx) = 0;

  virtual void enterMemberAccess(PHPParser::MemberAccessContext *ctx) = 0;
  virtual void exitMemberAccess(PHPParser::MemberAccessContext *ctx) = 0;

  virtual void enterBracketedBlock(PHPParser::BracketedBlockContext *ctx) = 0;
  virtual void exitBracketedBlock(PHPParser::BracketedBlockContext *ctx) = 0;

  virtual void enterInterfaceDefinition(PHPParser::InterfaceDefinitionContext *ctx) = 0;
  virtual void exitInterfaceDefinition(PHPParser::InterfaceDefinitionContext *ctx) = 0;

  virtual void enterInterfaceName(PHPParser::InterfaceNameContext *ctx) = 0;
  virtual void exitInterfaceName(PHPParser::InterfaceNameContext *ctx) = 0;

  virtual void enterInterfaceExtends(PHPParser::InterfaceExtendsContext *ctx) = 0;
  virtual void exitInterfaceExtends(PHPParser::InterfaceExtendsContext *ctx) = 0;

  virtual void enterInterfaceMember(PHPParser::InterfaceMemberContext *ctx) = 0;
  virtual void exitInterfaceMember(PHPParser::InterfaceMemberContext *ctx) = 0;

  virtual void enterClassName(PHPParser::ClassNameContext *ctx) = 0;
  virtual void exitClassName(PHPParser::ClassNameContext *ctx) = 0;

  virtual void enterClassDefinition(PHPParser::ClassDefinitionContext *ctx) = 0;
  virtual void exitClassDefinition(PHPParser::ClassDefinitionContext *ctx) = 0;

  virtual void enterClassImplements(PHPParser::ClassImplementsContext *ctx) = 0;
  virtual void exitClassImplements(PHPParser::ClassImplementsContext *ctx) = 0;

  virtual void enterClassMember(PHPParser::ClassMemberContext *ctx) = 0;
  virtual void exitClassMember(PHPParser::ClassMemberContext *ctx) = 0;

  virtual void enterClassModifier(PHPParser::ClassModifierContext *ctx) = 0;
  virtual void exitClassModifier(PHPParser::ClassModifierContext *ctx) = 0;

  virtual void enterConstDefinition(PHPParser::ConstDefinitionContext *ctx) = 0;
  virtual void exitConstDefinition(PHPParser::ConstDefinitionContext *ctx) = 0;

  virtual void enterFieldDefinition(PHPParser::FieldDefinitionContext *ctx) = 0;
  virtual void exitFieldDefinition(PHPParser::FieldDefinitionContext *ctx) = 0;

  virtual void enterFieldModifier(PHPParser::FieldModifierContext *ctx) = 0;
  virtual void exitFieldModifier(PHPParser::FieldModifierContext *ctx) = 0;

  virtual void enterFieldName(PHPParser::FieldNameContext *ctx) = 0;
  virtual void exitFieldName(PHPParser::FieldNameContext *ctx) = 0;

  virtual void enterFunctionDefinition(PHPParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(PHPParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterParametersDefinition(PHPParser::ParametersDefinitionContext *ctx) = 0;
  virtual void exitParametersDefinition(PHPParser::ParametersDefinitionContext *ctx) = 0;

  virtual void enterFunctionInvocation(PHPParser::FunctionInvocationContext *ctx) = 0;
  virtual void exitFunctionInvocation(PHPParser::FunctionInvocationContext *ctx) = 0;

  virtual void enterFunctionName(PHPParser::FunctionNameContext *ctx) = 0;
  virtual void exitFunctionName(PHPParser::FunctionNameContext *ctx) = 0;

  virtual void enterFunctionInvocationParameters(PHPParser::FunctionInvocationParametersContext *ctx) = 0;
  virtual void exitFunctionInvocationParameters(PHPParser::FunctionInvocationParametersContext *ctx) = 0;

  virtual void enterParamDef(PHPParser::ParamDefContext *ctx) = 0;
  virtual void exitParamDef(PHPParser::ParamDefContext *ctx) = 0;

  virtual void enterParamName(PHPParser::ParamNameContext *ctx) = 0;
  virtual void exitParamName(PHPParser::ParamNameContext *ctx) = 0;

  virtual void enterCommaList(PHPParser::CommaListContext *ctx) = 0;
  virtual void exitCommaList(PHPParser::CommaListContext *ctx) = 0;

  virtual void enterExpression(PHPParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(PHPParser::ExpressionContext *ctx) = 0;

  virtual void enterWeakLogicalOr(PHPParser::WeakLogicalOrContext *ctx) = 0;
  virtual void exitWeakLogicalOr(PHPParser::WeakLogicalOrContext *ctx) = 0;

  virtual void enterWeakLogicalXor(PHPParser::WeakLogicalXorContext *ctx) = 0;
  virtual void exitWeakLogicalXor(PHPParser::WeakLogicalXorContext *ctx) = 0;

  virtual void enterWeakLogicalAnd(PHPParser::WeakLogicalAndContext *ctx) = 0;
  virtual void exitWeakLogicalAnd(PHPParser::WeakLogicalAndContext *ctx) = 0;

  virtual void enterAssignment(PHPParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(PHPParser::AssignmentContext *ctx) = 0;

  virtual void enterListVariables(PHPParser::ListVariablesContext *ctx) = 0;
  virtual void exitListVariables(PHPParser::ListVariablesContext *ctx) = 0;

  virtual void enterTernary(PHPParser::TernaryContext *ctx) = 0;
  virtual void exitTernary(PHPParser::TernaryContext *ctx) = 0;

  virtual void enterLogicalOr(PHPParser::LogicalOrContext *ctx) = 0;
  virtual void exitLogicalOr(PHPParser::LogicalOrContext *ctx) = 0;

  virtual void enterLogicalAnd(PHPParser::LogicalAndContext *ctx) = 0;
  virtual void exitLogicalAnd(PHPParser::LogicalAndContext *ctx) = 0;

  virtual void enterBitwiseOr(PHPParser::BitwiseOrContext *ctx) = 0;
  virtual void exitBitwiseOr(PHPParser::BitwiseOrContext *ctx) = 0;

  virtual void enterBitWiseAnd(PHPParser::BitWiseAndContext *ctx) = 0;
  virtual void exitBitWiseAnd(PHPParser::BitWiseAndContext *ctx) = 0;

  virtual void enterEqualityCheck(PHPParser::EqualityCheckContext *ctx) = 0;
  virtual void exitEqualityCheck(PHPParser::EqualityCheckContext *ctx) = 0;

  virtual void enterComparisionCheck(PHPParser::ComparisionCheckContext *ctx) = 0;
  virtual void exitComparisionCheck(PHPParser::ComparisionCheckContext *ctx) = 0;

  virtual void enterBitWiseShift(PHPParser::BitWiseShiftContext *ctx) = 0;
  virtual void exitBitWiseShift(PHPParser::BitWiseShiftContext *ctx) = 0;

  virtual void enterAddition(PHPParser::AdditionContext *ctx) = 0;
  virtual void exitAddition(PHPParser::AdditionContext *ctx) = 0;

  virtual void enterMultiplication(PHPParser::MultiplicationContext *ctx) = 0;
  virtual void exitMultiplication(PHPParser::MultiplicationContext *ctx) = 0;

  virtual void enterLogicalNot(PHPParser::LogicalNotContext *ctx) = 0;
  virtual void exitLogicalNot(PHPParser::LogicalNotContext *ctx) = 0;

  virtual void enterInstanceOf(PHPParser::InstanceOfContext *ctx) = 0;
  virtual void exitInstanceOf(PHPParser::InstanceOfContext *ctx) = 0;

  virtual void enterNegateOrCast(PHPParser::NegateOrCastContext *ctx) = 0;
  virtual void exitNegateOrCast(PHPParser::NegateOrCastContext *ctx) = 0;

  virtual void enterIncrement(PHPParser::IncrementContext *ctx) = 0;
  virtual void exitIncrement(PHPParser::IncrementContext *ctx) = 0;

  virtual void enterNewOrClone(PHPParser::NewOrCloneContext *ctx) = 0;
  virtual void exitNewOrClone(PHPParser::NewOrCloneContext *ctx) = 0;

  virtual void enterAtomOrReference(PHPParser::AtomOrReferenceContext *ctx) = 0;
  virtual void exitAtomOrReference(PHPParser::AtomOrReferenceContext *ctx) = 0;

  virtual void enterArrayDeclaration(PHPParser::ArrayDeclarationContext *ctx) = 0;
  virtual void exitArrayDeclaration(PHPParser::ArrayDeclarationContext *ctx) = 0;

  virtual void enterArrayEntry(PHPParser::ArrayEntryContext *ctx) = 0;
  virtual void exitArrayEntry(PHPParser::ArrayEntryContext *ctx) = 0;

  virtual void enterKeyValuePair(PHPParser::KeyValuePairContext *ctx) = 0;
  virtual void exitKeyValuePair(PHPParser::KeyValuePairContext *ctx) = 0;

  virtual void enterAtom(PHPParser::AtomContext *ctx) = 0;
  virtual void exitAtom(PHPParser::AtomContext *ctx) = 0;

  virtual void enterReference(PHPParser::ReferenceContext *ctx) = 0;
  virtual void exitReference(PHPParser::ReferenceContext *ctx) = 0;

  virtual void enterNumber(PHPParser::NumberContext *ctx) = 0;
  virtual void exitNumber(PHPParser::NumberContext *ctx) = 0;

  virtual void enterInteger(PHPParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(PHPParser::IntegerContext *ctx) = 0;

  virtual void enterReal(PHPParser::RealContext *ctx) = 0;
  virtual void exitReal(PHPParser::RealContext *ctx) = 0;

  virtual void enterString(PHPParser::StringContext *ctx) = 0;
  virtual void exitString(PHPParser::StringContext *ctx) = 0;


};

