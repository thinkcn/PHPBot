
// Generated from PHPParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PHPParserListener.h"


/**
 * This class provides an empty implementation of PHPParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PHPParserBaseListener : public PHPParserListener {
public:

  virtual void enterProg(PHPParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(PHPParser::ProgContext * /*ctx*/) override { }

  virtual void enterHtmlblock(PHPParser::HtmlblockContext * /*ctx*/) override { }
  virtual void exitHtmlblock(PHPParser::HtmlblockContext * /*ctx*/) override { }

  virtual void enterHtml(PHPParser::HtmlContext * /*ctx*/) override { }
  virtual void exitHtml(PHPParser::HtmlContext * /*ctx*/) override { }

  virtual void enterPhpBlock(PHPParser::PhpBlockContext * /*ctx*/) override { }
  virtual void exitPhpBlock(PHPParser::PhpBlockContext * /*ctx*/) override { }

  virtual void enterProlog(PHPParser::PrologContext * /*ctx*/) override { }
  virtual void exitProlog(PHPParser::PrologContext * /*ctx*/) override { }

  virtual void enterEpilog(PHPParser::EpilogContext * /*ctx*/) override { }
  virtual void exitEpilog(PHPParser::EpilogContext * /*ctx*/) override { }

  virtual void enterStatement(PHPParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(PHPParser::StatementContext * /*ctx*/) override { }

  virtual void enterComplexStatement(PHPParser::ComplexStatementContext * /*ctx*/) override { }
  virtual void exitComplexStatement(PHPParser::ComplexStatementContext * /*ctx*/) override { }

  virtual void enterForstatement(PHPParser::ForstatementContext * /*ctx*/) override { }
  virtual void exitForstatement(PHPParser::ForstatementContext * /*ctx*/) override { }

  virtual void enterIfstatement(PHPParser::IfstatementContext * /*ctx*/) override { }
  virtual void exitIfstatement(PHPParser::IfstatementContext * /*ctx*/) override { }

  virtual void enterForeachstatement(PHPParser::ForeachstatementContext * /*ctx*/) override { }
  virtual void exitForeachstatement(PHPParser::ForeachstatementContext * /*ctx*/) override { }

  virtual void enterWhilestatement(PHPParser::WhilestatementContext * /*ctx*/) override { }
  virtual void exitWhilestatement(PHPParser::WhilestatementContext * /*ctx*/) override { }

  virtual void enterDostatement(PHPParser::DostatementContext * /*ctx*/) override { }
  virtual void exitDostatement(PHPParser::DostatementContext * /*ctx*/) override { }

  virtual void enterSwitchstatement(PHPParser::SwitchstatementContext * /*ctx*/) override { }
  virtual void exitSwitchstatement(PHPParser::SwitchstatementContext * /*ctx*/) override { }

  virtual void enterSimpleStatement(PHPParser::SimpleStatementContext * /*ctx*/) override { }
  virtual void exitSimpleStatement(PHPParser::SimpleStatementContext * /*ctx*/) override { }

  virtual void enterGlobalStatement(PHPParser::GlobalStatementContext * /*ctx*/) override { }
  virtual void exitGlobalStatement(PHPParser::GlobalStatementContext * /*ctx*/) override { }

  virtual void enterStaticVariableAssignmentStatement(PHPParser::StaticVariableAssignmentStatementContext * /*ctx*/) override { }
  virtual void exitStaticVariableAssignmentStatement(PHPParser::StaticVariableAssignmentStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(PHPParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(PHPParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(PHPParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(PHPParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(PHPParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(PHPParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterRequireStatement(PHPParser::RequireStatementContext * /*ctx*/) override { }
  virtual void exitRequireStatement(PHPParser::RequireStatementContext * /*ctx*/) override { }

  virtual void enterCases(PHPParser::CasesContext * /*ctx*/) override { }
  virtual void exitCases(PHPParser::CasesContext * /*ctx*/) override { }

  virtual void enterCasestatement(PHPParser::CasestatementContext * /*ctx*/) override { }
  virtual void exitCasestatement(PHPParser::CasestatementContext * /*ctx*/) override { }

  virtual void enterDefaultcase(PHPParser::DefaultcaseContext * /*ctx*/) override { }
  virtual void exitDefaultcase(PHPParser::DefaultcaseContext * /*ctx*/) override { }

  virtual void enterVariable(PHPParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(PHPParser::VariableContext * /*ctx*/) override { }

  virtual void enterVariablename(PHPParser::VariablenameContext * /*ctx*/) override { }
  virtual void exitVariablename(PHPParser::VariablenameContext * /*ctx*/) override { }

  virtual void enterName(PHPParser::NameContext * /*ctx*/) override { }
  virtual void exitName(PHPParser::NameContext * /*ctx*/) override { }

  virtual void enterStaticMemberAccess(PHPParser::StaticMemberAccessContext * /*ctx*/) override { }
  virtual void exitStaticMemberAccess(PHPParser::StaticMemberAccessContext * /*ctx*/) override { }

  virtual void enterMemberAccess(PHPParser::MemberAccessContext * /*ctx*/) override { }
  virtual void exitMemberAccess(PHPParser::MemberAccessContext * /*ctx*/) override { }

  virtual void enterBracketedBlock(PHPParser::BracketedBlockContext * /*ctx*/) override { }
  virtual void exitBracketedBlock(PHPParser::BracketedBlockContext * /*ctx*/) override { }

  virtual void enterInterfaceDefinition(PHPParser::InterfaceDefinitionContext * /*ctx*/) override { }
  virtual void exitInterfaceDefinition(PHPParser::InterfaceDefinitionContext * /*ctx*/) override { }

  virtual void enterInterfaceName(PHPParser::InterfaceNameContext * /*ctx*/) override { }
  virtual void exitInterfaceName(PHPParser::InterfaceNameContext * /*ctx*/) override { }

  virtual void enterInterfaceExtends(PHPParser::InterfaceExtendsContext * /*ctx*/) override { }
  virtual void exitInterfaceExtends(PHPParser::InterfaceExtendsContext * /*ctx*/) override { }

  virtual void enterInterfaceMember(PHPParser::InterfaceMemberContext * /*ctx*/) override { }
  virtual void exitInterfaceMember(PHPParser::InterfaceMemberContext * /*ctx*/) override { }

  virtual void enterClassName(PHPParser::ClassNameContext * /*ctx*/) override { }
  virtual void exitClassName(PHPParser::ClassNameContext * /*ctx*/) override { }

  virtual void enterClassDefinition(PHPParser::ClassDefinitionContext * /*ctx*/) override { }
  virtual void exitClassDefinition(PHPParser::ClassDefinitionContext * /*ctx*/) override { }

  virtual void enterClassImplements(PHPParser::ClassImplementsContext * /*ctx*/) override { }
  virtual void exitClassImplements(PHPParser::ClassImplementsContext * /*ctx*/) override { }

  virtual void enterClassMember(PHPParser::ClassMemberContext * /*ctx*/) override { }
  virtual void exitClassMember(PHPParser::ClassMemberContext * /*ctx*/) override { }

  virtual void enterClassModifier(PHPParser::ClassModifierContext * /*ctx*/) override { }
  virtual void exitClassModifier(PHPParser::ClassModifierContext * /*ctx*/) override { }

  virtual void enterConstDefinition(PHPParser::ConstDefinitionContext * /*ctx*/) override { }
  virtual void exitConstDefinition(PHPParser::ConstDefinitionContext * /*ctx*/) override { }

  virtual void enterFieldDefinition(PHPParser::FieldDefinitionContext * /*ctx*/) override { }
  virtual void exitFieldDefinition(PHPParser::FieldDefinitionContext * /*ctx*/) override { }

  virtual void enterFieldModifier(PHPParser::FieldModifierContext * /*ctx*/) override { }
  virtual void exitFieldModifier(PHPParser::FieldModifierContext * /*ctx*/) override { }

  virtual void enterFieldName(PHPParser::FieldNameContext * /*ctx*/) override { }
  virtual void exitFieldName(PHPParser::FieldNameContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(PHPParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(PHPParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterParametersDefinition(PHPParser::ParametersDefinitionContext * /*ctx*/) override { }
  virtual void exitParametersDefinition(PHPParser::ParametersDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionInvocation(PHPParser::FunctionInvocationContext * /*ctx*/) override { }
  virtual void exitFunctionInvocation(PHPParser::FunctionInvocationContext * /*ctx*/) override { }

  virtual void enterFunctionName(PHPParser::FunctionNameContext * /*ctx*/) override { }
  virtual void exitFunctionName(PHPParser::FunctionNameContext * /*ctx*/) override { }

  virtual void enterFunctionInvocationParameters(PHPParser::FunctionInvocationParametersContext * /*ctx*/) override { }
  virtual void exitFunctionInvocationParameters(PHPParser::FunctionInvocationParametersContext * /*ctx*/) override { }

  virtual void enterParamDef(PHPParser::ParamDefContext * /*ctx*/) override { }
  virtual void exitParamDef(PHPParser::ParamDefContext * /*ctx*/) override { }

  virtual void enterParamName(PHPParser::ParamNameContext * /*ctx*/) override { }
  virtual void exitParamName(PHPParser::ParamNameContext * /*ctx*/) override { }

  virtual void enterCommaList(PHPParser::CommaListContext * /*ctx*/) override { }
  virtual void exitCommaList(PHPParser::CommaListContext * /*ctx*/) override { }

  virtual void enterExpression(PHPParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(PHPParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterWeakLogicalOr(PHPParser::WeakLogicalOrContext * /*ctx*/) override { }
  virtual void exitWeakLogicalOr(PHPParser::WeakLogicalOrContext * /*ctx*/) override { }

  virtual void enterWeakLogicalXor(PHPParser::WeakLogicalXorContext * /*ctx*/) override { }
  virtual void exitWeakLogicalXor(PHPParser::WeakLogicalXorContext * /*ctx*/) override { }

  virtual void enterWeakLogicalAnd(PHPParser::WeakLogicalAndContext * /*ctx*/) override { }
  virtual void exitWeakLogicalAnd(PHPParser::WeakLogicalAndContext * /*ctx*/) override { }

  virtual void enterAssignment(PHPParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(PHPParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterListVariables(PHPParser::ListVariablesContext * /*ctx*/) override { }
  virtual void exitListVariables(PHPParser::ListVariablesContext * /*ctx*/) override { }

  virtual void enterTernary(PHPParser::TernaryContext * /*ctx*/) override { }
  virtual void exitTernary(PHPParser::TernaryContext * /*ctx*/) override { }

  virtual void enterLogicalOr(PHPParser::LogicalOrContext * /*ctx*/) override { }
  virtual void exitLogicalOr(PHPParser::LogicalOrContext * /*ctx*/) override { }

  virtual void enterLogicalAnd(PHPParser::LogicalAndContext * /*ctx*/) override { }
  virtual void exitLogicalAnd(PHPParser::LogicalAndContext * /*ctx*/) override { }

  virtual void enterBitwiseOr(PHPParser::BitwiseOrContext * /*ctx*/) override { }
  virtual void exitBitwiseOr(PHPParser::BitwiseOrContext * /*ctx*/) override { }

  virtual void enterBitWiseAnd(PHPParser::BitWiseAndContext * /*ctx*/) override { }
  virtual void exitBitWiseAnd(PHPParser::BitWiseAndContext * /*ctx*/) override { }

  virtual void enterEqualityCheck(PHPParser::EqualityCheckContext * /*ctx*/) override { }
  virtual void exitEqualityCheck(PHPParser::EqualityCheckContext * /*ctx*/) override { }

  virtual void enterComparisionCheck(PHPParser::ComparisionCheckContext * /*ctx*/) override { }
  virtual void exitComparisionCheck(PHPParser::ComparisionCheckContext * /*ctx*/) override { }

  virtual void enterBitWiseShift(PHPParser::BitWiseShiftContext * /*ctx*/) override { }
  virtual void exitBitWiseShift(PHPParser::BitWiseShiftContext * /*ctx*/) override { }

  virtual void enterAddition(PHPParser::AdditionContext * /*ctx*/) override { }
  virtual void exitAddition(PHPParser::AdditionContext * /*ctx*/) override { }

  virtual void enterMultiplication(PHPParser::MultiplicationContext * /*ctx*/) override { }
  virtual void exitMultiplication(PHPParser::MultiplicationContext * /*ctx*/) override { }

  virtual void enterLogicalNot(PHPParser::LogicalNotContext * /*ctx*/) override { }
  virtual void exitLogicalNot(PHPParser::LogicalNotContext * /*ctx*/) override { }

  virtual void enterInstanceOf(PHPParser::InstanceOfContext * /*ctx*/) override { }
  virtual void exitInstanceOf(PHPParser::InstanceOfContext * /*ctx*/) override { }

  virtual void enterNegateOrCast(PHPParser::NegateOrCastContext * /*ctx*/) override { }
  virtual void exitNegateOrCast(PHPParser::NegateOrCastContext * /*ctx*/) override { }

  virtual void enterIncrement(PHPParser::IncrementContext * /*ctx*/) override { }
  virtual void exitIncrement(PHPParser::IncrementContext * /*ctx*/) override { }

  virtual void enterNewOrClone(PHPParser::NewOrCloneContext * /*ctx*/) override { }
  virtual void exitNewOrClone(PHPParser::NewOrCloneContext * /*ctx*/) override { }

  virtual void enterAtomOrReference(PHPParser::AtomOrReferenceContext * /*ctx*/) override { }
  virtual void exitAtomOrReference(PHPParser::AtomOrReferenceContext * /*ctx*/) override { }

  virtual void enterArrayDeclaration(PHPParser::ArrayDeclarationContext * /*ctx*/) override { }
  virtual void exitArrayDeclaration(PHPParser::ArrayDeclarationContext * /*ctx*/) override { }

  virtual void enterArrayEntry(PHPParser::ArrayEntryContext * /*ctx*/) override { }
  virtual void exitArrayEntry(PHPParser::ArrayEntryContext * /*ctx*/) override { }

  virtual void enterKeyValuePair(PHPParser::KeyValuePairContext * /*ctx*/) override { }
  virtual void exitKeyValuePair(PHPParser::KeyValuePairContext * /*ctx*/) override { }

  virtual void enterAtom(PHPParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(PHPParser::AtomContext * /*ctx*/) override { }

  virtual void enterReference(PHPParser::ReferenceContext * /*ctx*/) override { }
  virtual void exitReference(PHPParser::ReferenceContext * /*ctx*/) override { }

  virtual void enterNumber(PHPParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(PHPParser::NumberContext * /*ctx*/) override { }

  virtual void enterInteger(PHPParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(PHPParser::IntegerContext * /*ctx*/) override { }

  virtual void enterReal(PHPParser::RealContext * /*ctx*/) override { }
  virtual void exitReal(PHPParser::RealContext * /*ctx*/) override { }

  virtual void enterString(PHPParser::StringContext * /*ctx*/) override { }
  virtual void exitString(PHPParser::StringContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

