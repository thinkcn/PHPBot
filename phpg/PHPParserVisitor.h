
// Generated from PHPParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PHPParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PHPParser.
 */
class  PHPParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PHPParser.
   */
    virtual antlrcpp::Any visitProg(PHPParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitHtmlblock(PHPParser::HtmlblockContext *context) = 0;

    virtual antlrcpp::Any visitHtml(PHPParser::HtmlContext *context) = 0;

    virtual antlrcpp::Any visitPhpBlock(PHPParser::PhpBlockContext *context) = 0;

    virtual antlrcpp::Any visitProlog(PHPParser::PrologContext *context) = 0;

    virtual antlrcpp::Any visitEpilog(PHPParser::EpilogContext *context) = 0;

    virtual antlrcpp::Any visitStatement(PHPParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitComplexStatement(PHPParser::ComplexStatementContext *context) = 0;

    virtual antlrcpp::Any visitForstatement(PHPParser::ForstatementContext *context) = 0;

    virtual antlrcpp::Any visitIfstatement(PHPParser::IfstatementContext *context) = 0;

    virtual antlrcpp::Any visitForeachstatement(PHPParser::ForeachstatementContext *context) = 0;

    virtual antlrcpp::Any visitWhilestatement(PHPParser::WhilestatementContext *context) = 0;

    virtual antlrcpp::Any visitDostatement(PHPParser::DostatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchstatement(PHPParser::SwitchstatementContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStatement(PHPParser::SimpleStatementContext *context) = 0;

    virtual antlrcpp::Any visitGlobalStatement(PHPParser::GlobalStatementContext *context) = 0;

    virtual antlrcpp::Any visitStaticVariableAssignmentStatement(PHPParser::StaticVariableAssignmentStatementContext *context) = 0;

    virtual antlrcpp::Any visitBreakStatement(PHPParser::BreakStatementContext *context) = 0;

    virtual antlrcpp::Any visitContinueStatement(PHPParser::ContinueStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(PHPParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitRequireStatement(PHPParser::RequireStatementContext *context) = 0;

    virtual antlrcpp::Any visitCases(PHPParser::CasesContext *context) = 0;

    virtual antlrcpp::Any visitCasestatement(PHPParser::CasestatementContext *context) = 0;

    virtual antlrcpp::Any visitDefaultcase(PHPParser::DefaultcaseContext *context) = 0;

    virtual antlrcpp::Any visitVariable(PHPParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitVariablename(PHPParser::VariablenameContext *context) = 0;

    virtual antlrcpp::Any visitName(PHPParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitStaticMemberAccess(PHPParser::StaticMemberAccessContext *context) = 0;

    virtual antlrcpp::Any visitMemberAccess(PHPParser::MemberAccessContext *context) = 0;

    virtual antlrcpp::Any visitBracketedBlock(PHPParser::BracketedBlockContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceDefinition(PHPParser::InterfaceDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceName(PHPParser::InterfaceNameContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceExtends(PHPParser::InterfaceExtendsContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceMember(PHPParser::InterfaceMemberContext *context) = 0;

    virtual antlrcpp::Any visitClassName(PHPParser::ClassNameContext *context) = 0;

    virtual antlrcpp::Any visitClassDefinition(PHPParser::ClassDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitClassImplements(PHPParser::ClassImplementsContext *context) = 0;

    virtual antlrcpp::Any visitClassMember(PHPParser::ClassMemberContext *context) = 0;

    virtual antlrcpp::Any visitClassModifier(PHPParser::ClassModifierContext *context) = 0;

    virtual antlrcpp::Any visitConstDefinition(PHPParser::ConstDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFieldDefinition(PHPParser::FieldDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFieldModifier(PHPParser::FieldModifierContext *context) = 0;

    virtual antlrcpp::Any visitFieldName(PHPParser::FieldNameContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(PHPParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitParametersDefinition(PHPParser::ParametersDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionInvocation(PHPParser::FunctionInvocationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionName(PHPParser::FunctionNameContext *context) = 0;

    virtual antlrcpp::Any visitFunctionInvocationParameters(PHPParser::FunctionInvocationParametersContext *context) = 0;

    virtual antlrcpp::Any visitParamDef(PHPParser::ParamDefContext *context) = 0;

    virtual antlrcpp::Any visitParamName(PHPParser::ParamNameContext *context) = 0;

    virtual antlrcpp::Any visitCommaList(PHPParser::CommaListContext *context) = 0;

    virtual antlrcpp::Any visitExpression(PHPParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitWeakLogicalOr(PHPParser::WeakLogicalOrContext *context) = 0;

    virtual antlrcpp::Any visitWeakLogicalXor(PHPParser::WeakLogicalXorContext *context) = 0;

    virtual antlrcpp::Any visitWeakLogicalAnd(PHPParser::WeakLogicalAndContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(PHPParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitListVariables(PHPParser::ListVariablesContext *context) = 0;

    virtual antlrcpp::Any visitTernary(PHPParser::TernaryContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOr(PHPParser::LogicalOrContext *context) = 0;

    virtual antlrcpp::Any visitLogicalAnd(PHPParser::LogicalAndContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseOr(PHPParser::BitwiseOrContext *context) = 0;

    virtual antlrcpp::Any visitBitWiseAnd(PHPParser::BitWiseAndContext *context) = 0;

    virtual antlrcpp::Any visitEqualityCheck(PHPParser::EqualityCheckContext *context) = 0;

    virtual antlrcpp::Any visitComparisionCheck(PHPParser::ComparisionCheckContext *context) = 0;

    virtual antlrcpp::Any visitBitWiseShift(PHPParser::BitWiseShiftContext *context) = 0;

    virtual antlrcpp::Any visitAddition(PHPParser::AdditionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplication(PHPParser::MultiplicationContext *context) = 0;

    virtual antlrcpp::Any visitLogicalNot(PHPParser::LogicalNotContext *context) = 0;

    virtual antlrcpp::Any visitInstanceOf(PHPParser::InstanceOfContext *context) = 0;

    virtual antlrcpp::Any visitNegateOrCast(PHPParser::NegateOrCastContext *context) = 0;

    virtual antlrcpp::Any visitIncrement(PHPParser::IncrementContext *context) = 0;

    virtual antlrcpp::Any visitNewOrClone(PHPParser::NewOrCloneContext *context) = 0;

    virtual antlrcpp::Any visitAtomOrReference(PHPParser::AtomOrReferenceContext *context) = 0;

    virtual antlrcpp::Any visitArrayDeclaration(PHPParser::ArrayDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitArrayEntry(PHPParser::ArrayEntryContext *context) = 0;

    virtual antlrcpp::Any visitKeyValuePair(PHPParser::KeyValuePairContext *context) = 0;

    virtual antlrcpp::Any visitAtom(PHPParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitReference(PHPParser::ReferenceContext *context) = 0;

    virtual antlrcpp::Any visitNumber(PHPParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitInteger(PHPParser::IntegerContext *context) = 0;

    virtual antlrcpp::Any visitReal(PHPParser::RealContext *context) = 0;

    virtual antlrcpp::Any visitString(PHPParser::StringContext *context) = 0;


};

