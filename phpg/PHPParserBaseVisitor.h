
// Generated from PHPParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PHPParserVisitor.h"


/**
 * This class provides an empty implementation of PHPParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PHPParserBaseVisitor : public PHPParserVisitor {
public:

  virtual antlrcpp::Any visitProg(PHPParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHtmlblock(PHPParser::HtmlblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHtml(PHPParser::HtmlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPhpBlock(PHPParser::PhpBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProlog(PHPParser::PrologContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEpilog(PHPParser::EpilogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(PHPParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComplexStatement(PHPParser::ComplexStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForstatement(PHPParser::ForstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfstatement(PHPParser::IfstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForeachstatement(PHPParser::ForeachstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhilestatement(PHPParser::WhilestatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDostatement(PHPParser::DostatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchstatement(PHPParser::SwitchstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStatement(PHPParser::SimpleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobalStatement(PHPParser::GlobalStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStaticVariableAssignmentStatement(PHPParser::StaticVariableAssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStatement(PHPParser::BreakStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStatement(PHPParser::ContinueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(PHPParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRequireStatement(PHPParser::RequireStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCases(PHPParser::CasesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCasestatement(PHPParser::CasestatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultcase(PHPParser::DefaultcaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(PHPParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariablename(PHPParser::VariablenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(PHPParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStaticMemberAccess(PHPParser::StaticMemberAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberAccess(PHPParser::MemberAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBracketedBlock(PHPParser::BracketedBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceDefinition(PHPParser::InterfaceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceName(PHPParser::InterfaceNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceExtends(PHPParser::InterfaceExtendsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceMember(PHPParser::InterfaceMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassName(PHPParser::ClassNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassDefinition(PHPParser::ClassDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassImplements(PHPParser::ClassImplementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassMember(PHPParser::ClassMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassModifier(PHPParser::ClassModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstDefinition(PHPParser::ConstDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldDefinition(PHPParser::FieldDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldModifier(PHPParser::FieldModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldName(PHPParser::FieldNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinition(PHPParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametersDefinition(PHPParser::ParametersDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionInvocation(PHPParser::FunctionInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionName(PHPParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionInvocationParameters(PHPParser::FunctionInvocationParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamDef(PHPParser::ParamDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamName(PHPParser::ParamNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommaList(PHPParser::CommaListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(PHPParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWeakLogicalOr(PHPParser::WeakLogicalOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWeakLogicalXor(PHPParser::WeakLogicalXorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWeakLogicalAnd(PHPParser::WeakLogicalAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(PHPParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListVariables(PHPParser::ListVariablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernary(PHPParser::TernaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOr(PHPParser::LogicalOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalAnd(PHPParser::LogicalAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitwiseOr(PHPParser::BitwiseOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitWiseAnd(PHPParser::BitWiseAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityCheck(PHPParser::EqualityCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisionCheck(PHPParser::ComparisionCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitWiseShift(PHPParser::BitWiseShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddition(PHPParser::AdditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplication(PHPParser::MultiplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalNot(PHPParser::LogicalNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstanceOf(PHPParser::InstanceOfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegateOrCast(PHPParser::NegateOrCastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncrement(PHPParser::IncrementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewOrClone(PHPParser::NewOrCloneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtomOrReference(PHPParser::AtomOrReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayDeclaration(PHPParser::ArrayDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayEntry(PHPParser::ArrayEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyValuePair(PHPParser::KeyValuePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(PHPParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference(PHPParser::ReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(PHPParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger(PHPParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal(PHPParser::RealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(PHPParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }


};

