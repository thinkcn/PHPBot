
// Generated from PHPParser.g4 by ANTLR 4.7.1


#include "PHPParserListener.h"
#include "PHPParserVisitor.h"

#include "PHPParser.h"


using namespace antlrcpp;
using namespace antlr4;

PHPParser::PHPParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PHPParser::~PHPParser() {
  delete _interpreter;
}

std::string PHPParser::getGrammarFileName() const {
  return "PHPParser.g4";
}

const std::vector<std::string>& PHPParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PHPParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

PHPParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::PhpBlockContext *> PHPParser::ProgContext::phpBlock() {
  return getRuleContexts<PHPParser::PhpBlockContext>();
}

PHPParser::PhpBlockContext* PHPParser::ProgContext::phpBlock(size_t i) {
  return getRuleContext<PHPParser::PhpBlockContext>(i);
}

std::vector<PHPParser::HtmlblockContext *> PHPParser::ProgContext::htmlblock() {
  return getRuleContexts<PHPParser::HtmlblockContext>();
}

PHPParser::HtmlblockContext* PHPParser::ProgContext::htmlblock(size_t i) {
  return getRuleContext<PHPParser::HtmlblockContext>(i);
}


size_t PHPParser::ProgContext::getRuleIndex() const {
  return PHPParser::RuleProg;
}

void PHPParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void PHPParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


antlrcpp::Any PHPParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ProgContext* PHPParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, PHPParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PHPParser::PHPStart)
      | (1ULL << PHPParser::PHPO)
      | (1ULL << PHPParser::Html))) != 0)) {
      setState(166);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case PHPParser::PHPStart: {
          setState(164);
          phpBlock();
          break;
        }

        case PHPParser::PHPO:
        case PHPParser::Html: {
          setState(165);
          htmlblock();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HtmlblockContext ------------------------------------------------------------------

PHPParser::HtmlblockContext::HtmlblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::HtmlblockContext::PHPO() {
  return getToken(PHPParser::PHPO, 0);
}

std::vector<PHPParser::HtmlContext *> PHPParser::HtmlblockContext::html() {
  return getRuleContexts<PHPParser::HtmlContext>();
}

PHPParser::HtmlContext* PHPParser::HtmlblockContext::html(size_t i) {
  return getRuleContext<PHPParser::HtmlContext>(i);
}


size_t PHPParser::HtmlblockContext::getRuleIndex() const {
  return PHPParser::RuleHtmlblock;
}

void PHPParser::HtmlblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHtmlblock(this);
}

void PHPParser::HtmlblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHtmlblock(this);
}


antlrcpp::Any PHPParser::HtmlblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitHtmlblock(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::HtmlblockContext* PHPParser::htmlblock() {
  HtmlblockContext *_localctx = _tracker.createInstance<HtmlblockContext>(_ctx, getState());
  enterRule(_localctx, 2, PHPParser::RuleHtmlblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(172);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::PHPO) {
      setState(171);
      match(PHPParser::PHPO);
    }
    setState(175); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(174);
              html();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(177); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HtmlContext ------------------------------------------------------------------

PHPParser::HtmlContext::HtmlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::HtmlContext::Html() {
  return getToken(PHPParser::Html, 0);
}


size_t PHPParser::HtmlContext::getRuleIndex() const {
  return PHPParser::RuleHtml;
}

void PHPParser::HtmlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHtml(this);
}

void PHPParser::HtmlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHtml(this);
}


antlrcpp::Any PHPParser::HtmlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitHtml(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::HtmlContext* PHPParser::html() {
  HtmlContext *_localctx = _tracker.createInstance<HtmlContext>(_ctx, getState());
  enterRule(_localctx, 4, PHPParser::RuleHtml);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(PHPParser::Html);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PhpBlockContext ------------------------------------------------------------------

PHPParser::PhpBlockContext::PhpBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::PrologContext* PHPParser::PhpBlockContext::prolog() {
  return getRuleContext<PHPParser::PrologContext>(0);
}

std::vector<PHPParser::StatementContext *> PHPParser::PhpBlockContext::statement() {
  return getRuleContexts<PHPParser::StatementContext>();
}

PHPParser::StatementContext* PHPParser::PhpBlockContext::statement(size_t i) {
  return getRuleContext<PHPParser::StatementContext>(i);
}

PHPParser::EpilogContext* PHPParser::PhpBlockContext::epilog() {
  return getRuleContext<PHPParser::EpilogContext>(0);
}


size_t PHPParser::PhpBlockContext::getRuleIndex() const {
  return PHPParser::RulePhpBlock;
}

void PHPParser::PhpBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPhpBlock(this);
}

void PHPParser::PhpBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPhpBlock(this);
}


antlrcpp::Any PHPParser::PhpBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitPhpBlock(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::PhpBlockContext* PHPParser::phpBlock() {
  PhpBlockContext *_localctx = _tracker.createInstance<PhpBlockContext>(_ctx, getState());
  enterRule(_localctx, 6, PHPParser::RulePhpBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    prolog();
    setState(185);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PHPParser::List)
      | (1ULL << PHPParser::Global)
      | (1ULL << PHPParser::Continue)
      | (1ULL << PHPParser::Return)
      | (1ULL << PHPParser::Class)
      | (1ULL << PHPParser::Do)
      | (1ULL << PHPParser::Switch)
      | (1ULL << PHPParser::Function)
      | (1ULL << PHPParser::Break)
      | (1ULL << PHPParser::If)
      | (1ULL << PHPParser::For)
      | (1ULL << PHPParser::Foreach)
      | (1ULL << PHPParser::While)
      | (1ULL << PHPParser::New)
      | (1ULL << PHPParser::Clone)
      | (1ULL << PHPParser::Ampersand)
      | (1ULL << PHPParser::Bang)
      | (1ULL << PHPParser::Minus)
      | (1ULL << PHPParser::Tilde)
      | (1ULL << PHPParser::SuppressWarnings)
      | (1ULL << PHPParser::Dollar)
      | (1ULL << PHPParser::OpenRoundBracket)
      | (1ULL << PHPParser::OpenCurlyBracket))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (PHPParser::Interface - 64))
      | (1ULL << (PHPParser::Abstract - 64))
      | (1ULL << (PHPParser::Static - 64))
      | (1ULL << (PHPParser::Array - 64))
      | (1ULL << (PHPParser::RequireOperator - 64))
      | (1ULL << (PHPParser::DecimalNumber - 64))
      | (1ULL << (PHPParser::HexNumber - 64))
      | (1ULL << (PHPParser::OctalNumber - 64))
      | (1ULL << (PHPParser::Float - 64))
      | (1ULL << (PHPParser::Boolean - 64))
      | (1ULL << (PHPParser::SingleQuotedString - 64))
      | (1ULL << (PHPParser::DoubleQuotedString - 64))
      | (1ULL << (PHPParser::Identifier - 64))
      | (1ULL << (PHPParser::IncrementOperator - 64)))) != 0)) {
      setState(182);
      statement();
      setState(187);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::PHPEnd) {
      setState(188);
      epilog();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrologContext ------------------------------------------------------------------

PHPParser::PrologContext::PrologContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::PrologContext::PHPStart() {
  return getToken(PHPParser::PHPStart, 0);
}


size_t PHPParser::PrologContext::getRuleIndex() const {
  return PHPParser::RuleProlog;
}

void PHPParser::PrologContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProlog(this);
}

void PHPParser::PrologContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProlog(this);
}


antlrcpp::Any PHPParser::PrologContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitProlog(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::PrologContext* PHPParser::prolog() {
  PrologContext *_localctx = _tracker.createInstance<PrologContext>(_ctx, getState());
  enterRule(_localctx, 8, PHPParser::RuleProlog);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(PHPParser::PHPStart);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EpilogContext ------------------------------------------------------------------

PHPParser::EpilogContext::EpilogContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::EpilogContext::PHPEnd() {
  return getToken(PHPParser::PHPEnd, 0);
}


size_t PHPParser::EpilogContext::getRuleIndex() const {
  return PHPParser::RuleEpilog;
}

void PHPParser::EpilogContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEpilog(this);
}

void PHPParser::EpilogContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEpilog(this);
}


antlrcpp::Any PHPParser::EpilogContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitEpilog(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::EpilogContext* PHPParser::epilog() {
  EpilogContext *_localctx = _tracker.createInstance<EpilogContext>(_ctx, getState());
  enterRule(_localctx, 10, PHPParser::RuleEpilog);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(PHPParser::PHPEnd);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

PHPParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::StatementContext* PHPParser::StatementContext::statement() {
  return getRuleContext<PHPParser::StatementContext>(0);
}

PHPParser::BracketedBlockContext* PHPParser::StatementContext::bracketedBlock() {
  return getRuleContext<PHPParser::BracketedBlockContext>(0);
}

PHPParser::ClassDefinitionContext* PHPParser::StatementContext::classDefinition() {
  return getRuleContext<PHPParser::ClassDefinitionContext>(0);
}

PHPParser::InterfaceDefinitionContext* PHPParser::StatementContext::interfaceDefinition() {
  return getRuleContext<PHPParser::InterfaceDefinitionContext>(0);
}

PHPParser::ComplexStatementContext* PHPParser::StatementContext::complexStatement() {
  return getRuleContext<PHPParser::ComplexStatementContext>(0);
}

PHPParser::SimpleStatementContext* PHPParser::StatementContext::simpleStatement() {
  return getRuleContext<PHPParser::SimpleStatementContext>(0);
}


size_t PHPParser::StatementContext::getRuleIndex() const {
  return PHPParser::RuleStatement;
}

void PHPParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void PHPParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any PHPParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::StatementContext* PHPParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, PHPParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(206);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(195);
      match(PHPParser::OpenCurlyBracket);
      setState(196);
      statement();
      setState(197);
      match(PHPParser::CloseCurlyBracket);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(199);
      bracketedBlock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(200);
      classDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(201);
      interfaceDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(202);
      complexStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(203);
      simpleStatement();
      setState(204);
      match(PHPParser::SemiColon);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComplexStatementContext ------------------------------------------------------------------

PHPParser::ComplexStatementContext::ComplexStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::IfstatementContext* PHPParser::ComplexStatementContext::ifstatement() {
  return getRuleContext<PHPParser::IfstatementContext>(0);
}

PHPParser::ForstatementContext* PHPParser::ComplexStatementContext::forstatement() {
  return getRuleContext<PHPParser::ForstatementContext>(0);
}

PHPParser::ForeachstatementContext* PHPParser::ComplexStatementContext::foreachstatement() {
  return getRuleContext<PHPParser::ForeachstatementContext>(0);
}

PHPParser::WhilestatementContext* PHPParser::ComplexStatementContext::whilestatement() {
  return getRuleContext<PHPParser::WhilestatementContext>(0);
}

PHPParser::DostatementContext* PHPParser::ComplexStatementContext::dostatement() {
  return getRuleContext<PHPParser::DostatementContext>(0);
}

PHPParser::SwitchstatementContext* PHPParser::ComplexStatementContext::switchstatement() {
  return getRuleContext<PHPParser::SwitchstatementContext>(0);
}

PHPParser::FunctionDefinitionContext* PHPParser::ComplexStatementContext::functionDefinition() {
  return getRuleContext<PHPParser::FunctionDefinitionContext>(0);
}


size_t PHPParser::ComplexStatementContext::getRuleIndex() const {
  return PHPParser::RuleComplexStatement;
}

void PHPParser::ComplexStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComplexStatement(this);
}

void PHPParser::ComplexStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComplexStatement(this);
}


antlrcpp::Any PHPParser::ComplexStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitComplexStatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ComplexStatementContext* PHPParser::complexStatement() {
  ComplexStatementContext *_localctx = _tracker.createInstance<ComplexStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, PHPParser::RuleComplexStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PHPParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(208);
        ifstatement();
        break;
      }

      case PHPParser::For: {
        enterOuterAlt(_localctx, 2);
        setState(209);
        forstatement();
        break;
      }

      case PHPParser::Foreach: {
        enterOuterAlt(_localctx, 3);
        setState(210);
        foreachstatement();
        break;
      }

      case PHPParser::While: {
        enterOuterAlt(_localctx, 4);
        setState(211);
        whilestatement();
        break;
      }

      case PHPParser::Do: {
        enterOuterAlt(_localctx, 5);
        setState(212);
        dostatement();
        break;
      }

      case PHPParser::Switch: {
        enterOuterAlt(_localctx, 6);
        setState(213);
        switchstatement();
        break;
      }

      case PHPParser::Function: {
        enterOuterAlt(_localctx, 7);
        setState(214);
        functionDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForstatementContext ------------------------------------------------------------------

PHPParser::ForstatementContext::ForstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ForstatementContext::For() {
  return getToken(PHPParser::For, 0);
}

std::vector<PHPParser::ExpressionContext *> PHPParser::ForstatementContext::expression() {
  return getRuleContexts<PHPParser::ExpressionContext>();
}

PHPParser::ExpressionContext* PHPParser::ForstatementContext::expression(size_t i) {
  return getRuleContext<PHPParser::ExpressionContext>(i);
}

PHPParser::StatementContext* PHPParser::ForstatementContext::statement() {
  return getRuleContext<PHPParser::StatementContext>(0);
}


size_t PHPParser::ForstatementContext::getRuleIndex() const {
  return PHPParser::RuleForstatement;
}

void PHPParser::ForstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForstatement(this);
}

void PHPParser::ForstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForstatement(this);
}


antlrcpp::Any PHPParser::ForstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitForstatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ForstatementContext* PHPParser::forstatement() {
  ForstatementContext *_localctx = _tracker.createInstance<ForstatementContext>(_ctx, getState());
  enterRule(_localctx, 16, PHPParser::RuleForstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    match(PHPParser::For);
    setState(218);
    match(PHPParser::OpenRoundBracket);
    setState(219);
    expression();
    setState(220);
    match(PHPParser::SemiColon);
    setState(221);
    expression();
    setState(222);
    match(PHPParser::SemiColon);
    setState(223);
    expression();
    setState(224);
    match(PHPParser::CloseRoundBracket);
    setState(225);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfstatementContext ------------------------------------------------------------------

PHPParser::IfstatementContext::IfstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::IfstatementContext::If() {
  return getToken(PHPParser::If, 0);
}

std::vector<PHPParser::ExpressionContext *> PHPParser::IfstatementContext::expression() {
  return getRuleContexts<PHPParser::ExpressionContext>();
}

PHPParser::ExpressionContext* PHPParser::IfstatementContext::expression(size_t i) {
  return getRuleContext<PHPParser::ExpressionContext>(i);
}

std::vector<PHPParser::StatementContext *> PHPParser::IfstatementContext::statement() {
  return getRuleContexts<PHPParser::StatementContext>();
}

PHPParser::StatementContext* PHPParser::IfstatementContext::statement(size_t i) {
  return getRuleContext<PHPParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::IfstatementContext::ElseIf() {
  return getTokens(PHPParser::ElseIf);
}

tree::TerminalNode* PHPParser::IfstatementContext::ElseIf(size_t i) {
  return getToken(PHPParser::ElseIf, i);
}

tree::TerminalNode* PHPParser::IfstatementContext::Else() {
  return getToken(PHPParser::Else, 0);
}


size_t PHPParser::IfstatementContext::getRuleIndex() const {
  return PHPParser::RuleIfstatement;
}

void PHPParser::IfstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfstatement(this);
}

void PHPParser::IfstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfstatement(this);
}


antlrcpp::Any PHPParser::IfstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitIfstatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::IfstatementContext* PHPParser::ifstatement() {
  IfstatementContext *_localctx = _tracker.createInstance<IfstatementContext>(_ctx, getState());
  enterRule(_localctx, 18, PHPParser::RuleIfstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(PHPParser::If);
    setState(228);
    match(PHPParser::OpenRoundBracket);
    setState(229);
    expression();
    setState(230);
    match(PHPParser::CloseRoundBracket);
    setState(231);
    statement();
    setState(240);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(232);
        match(PHPParser::ElseIf);
        setState(233);
        match(PHPParser::OpenRoundBracket);
        setState(234);
        expression();
        setState(235);
        match(PHPParser::CloseRoundBracket);
        setState(236);
        statement(); 
      }
      setState(242);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
    setState(245);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(243);
      match(PHPParser::Else);
      setState(244);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachstatementContext ------------------------------------------------------------------

PHPParser::ForeachstatementContext::ForeachstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ForeachstatementContext::Foreach() {
  return getToken(PHPParser::Foreach, 0);
}

PHPParser::VariableContext* PHPParser::ForeachstatementContext::variable() {
  return getRuleContext<PHPParser::VariableContext>(0);
}

PHPParser::ArrayEntryContext* PHPParser::ForeachstatementContext::arrayEntry() {
  return getRuleContext<PHPParser::ArrayEntryContext>(0);
}

PHPParser::StatementContext* PHPParser::ForeachstatementContext::statement() {
  return getRuleContext<PHPParser::StatementContext>(0);
}


size_t PHPParser::ForeachstatementContext::getRuleIndex() const {
  return PHPParser::RuleForeachstatement;
}

void PHPParser::ForeachstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeachstatement(this);
}

void PHPParser::ForeachstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeachstatement(this);
}


antlrcpp::Any PHPParser::ForeachstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitForeachstatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ForeachstatementContext* PHPParser::foreachstatement() {
  ForeachstatementContext *_localctx = _tracker.createInstance<ForeachstatementContext>(_ctx, getState());
  enterRule(_localctx, 20, PHPParser::RuleForeachstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(PHPParser::Foreach);
    setState(248);
    match(PHPParser::OpenRoundBracket);
    setState(249);
    variable();
    setState(250);
    match(PHPParser::As);
    setState(251);
    arrayEntry();
    setState(252);
    match(PHPParser::CloseRoundBracket);
    setState(253);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhilestatementContext ------------------------------------------------------------------

PHPParser::WhilestatementContext::WhilestatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::WhilestatementContext::While() {
  return getToken(PHPParser::While, 0);
}

PHPParser::StatementContext* PHPParser::WhilestatementContext::statement() {
  return getRuleContext<PHPParser::StatementContext>(0);
}

PHPParser::ExpressionContext* PHPParser::WhilestatementContext::expression() {
  return getRuleContext<PHPParser::ExpressionContext>(0);
}


size_t PHPParser::WhilestatementContext::getRuleIndex() const {
  return PHPParser::RuleWhilestatement;
}

void PHPParser::WhilestatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhilestatement(this);
}

void PHPParser::WhilestatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhilestatement(this);
}


antlrcpp::Any PHPParser::WhilestatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitWhilestatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::WhilestatementContext* PHPParser::whilestatement() {
  WhilestatementContext *_localctx = _tracker.createInstance<WhilestatementContext>(_ctx, getState());
  enterRule(_localctx, 22, PHPParser::RuleWhilestatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    match(PHPParser::While);
    setState(256);
    match(PHPParser::OpenRoundBracket);
    setState(258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PHPParser::List)
      | (1ULL << PHPParser::New)
      | (1ULL << PHPParser::Clone)
      | (1ULL << PHPParser::Ampersand)
      | (1ULL << PHPParser::Bang)
      | (1ULL << PHPParser::Minus)
      | (1ULL << PHPParser::Tilde)
      | (1ULL << PHPParser::SuppressWarnings)
      | (1ULL << PHPParser::Dollar)
      | (1ULL << PHPParser::OpenRoundBracket))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (PHPParser::Array - 69))
      | (1ULL << (PHPParser::DecimalNumber - 69))
      | (1ULL << (PHPParser::HexNumber - 69))
      | (1ULL << (PHPParser::OctalNumber - 69))
      | (1ULL << (PHPParser::Float - 69))
      | (1ULL << (PHPParser::Boolean - 69))
      | (1ULL << (PHPParser::SingleQuotedString - 69))
      | (1ULL << (PHPParser::DoubleQuotedString - 69))
      | (1ULL << (PHPParser::Identifier - 69))
      | (1ULL << (PHPParser::IncrementOperator - 69)))) != 0)) {
      setState(257);
      expression();
    }
    setState(260);
    match(PHPParser::CloseRoundBracket);
    setState(261);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DostatementContext ------------------------------------------------------------------

PHPParser::DostatementContext::DostatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::DostatementContext::Do() {
  return getToken(PHPParser::Do, 0);
}

PHPParser::StatementContext* PHPParser::DostatementContext::statement() {
  return getRuleContext<PHPParser::StatementContext>(0);
}

tree::TerminalNode* PHPParser::DostatementContext::While() {
  return getToken(PHPParser::While, 0);
}

PHPParser::ExpressionContext* PHPParser::DostatementContext::expression() {
  return getRuleContext<PHPParser::ExpressionContext>(0);
}


size_t PHPParser::DostatementContext::getRuleIndex() const {
  return PHPParser::RuleDostatement;
}

void PHPParser::DostatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDostatement(this);
}

void PHPParser::DostatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDostatement(this);
}


antlrcpp::Any PHPParser::DostatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitDostatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::DostatementContext* PHPParser::dostatement() {
  DostatementContext *_localctx = _tracker.createInstance<DostatementContext>(_ctx, getState());
  enterRule(_localctx, 24, PHPParser::RuleDostatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    match(PHPParser::Do);
    setState(264);
    statement();
    setState(265);
    match(PHPParser::While);
    setState(266);
    match(PHPParser::OpenRoundBracket);
    setState(267);
    expression();
    setState(268);
    match(PHPParser::CloseRoundBracket);
    setState(269);
    match(PHPParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchstatementContext ------------------------------------------------------------------

PHPParser::SwitchstatementContext::SwitchstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::SwitchstatementContext::Switch() {
  return getToken(PHPParser::Switch, 0);
}

PHPParser::ExpressionContext* PHPParser::SwitchstatementContext::expression() {
  return getRuleContext<PHPParser::ExpressionContext>(0);
}

PHPParser::CasesContext* PHPParser::SwitchstatementContext::cases() {
  return getRuleContext<PHPParser::CasesContext>(0);
}


size_t PHPParser::SwitchstatementContext::getRuleIndex() const {
  return PHPParser::RuleSwitchstatement;
}

void PHPParser::SwitchstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchstatement(this);
}

void PHPParser::SwitchstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchstatement(this);
}


antlrcpp::Any PHPParser::SwitchstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitSwitchstatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::SwitchstatementContext* PHPParser::switchstatement() {
  SwitchstatementContext *_localctx = _tracker.createInstance<SwitchstatementContext>(_ctx, getState());
  enterRule(_localctx, 26, PHPParser::RuleSwitchstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(PHPParser::Switch);
    setState(272);
    match(PHPParser::OpenRoundBracket);
    setState(273);
    expression();
    setState(274);
    match(PHPParser::CloseRoundBracket);
    setState(275);
    match(PHPParser::OpenCurlyBracket);
    setState(276);
    cases();
    setState(277);
    match(PHPParser::CloseCurlyBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleStatementContext ------------------------------------------------------------------

PHPParser::SimpleStatementContext::SimpleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::GlobalStatementContext* PHPParser::SimpleStatementContext::globalStatement() {
  return getRuleContext<PHPParser::GlobalStatementContext>(0);
}

PHPParser::StaticVariableAssignmentStatementContext* PHPParser::SimpleStatementContext::staticVariableAssignmentStatement() {
  return getRuleContext<PHPParser::StaticVariableAssignmentStatementContext>(0);
}

PHPParser::BreakStatementContext* PHPParser::SimpleStatementContext::breakStatement() {
  return getRuleContext<PHPParser::BreakStatementContext>(0);
}

PHPParser::ContinueStatementContext* PHPParser::SimpleStatementContext::continueStatement() {
  return getRuleContext<PHPParser::ContinueStatementContext>(0);
}

PHPParser::ReturnStatementContext* PHPParser::SimpleStatementContext::returnStatement() {
  return getRuleContext<PHPParser::ReturnStatementContext>(0);
}

PHPParser::RequireStatementContext* PHPParser::SimpleStatementContext::requireStatement() {
  return getRuleContext<PHPParser::RequireStatementContext>(0);
}

PHPParser::ExpressionContext* PHPParser::SimpleStatementContext::expression() {
  return getRuleContext<PHPParser::ExpressionContext>(0);
}


size_t PHPParser::SimpleStatementContext::getRuleIndex() const {
  return PHPParser::RuleSimpleStatement;
}

void PHPParser::SimpleStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleStatement(this);
}

void PHPParser::SimpleStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleStatement(this);
}


antlrcpp::Any PHPParser::SimpleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitSimpleStatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::SimpleStatementContext* PHPParser::simpleStatement() {
  SimpleStatementContext *_localctx = _tracker.createInstance<SimpleStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, PHPParser::RuleSimpleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(286);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(279);
      globalStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(280);
      staticVariableAssignmentStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(281);
      breakStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(282);
      continueStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(283);
      returnStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(284);
      requireStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(285);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalStatementContext ------------------------------------------------------------------

PHPParser::GlobalStatementContext::GlobalStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::GlobalStatementContext::Global() {
  return getToken(PHPParser::Global, 0);
}

std::vector<PHPParser::NameContext *> PHPParser::GlobalStatementContext::name() {
  return getRuleContexts<PHPParser::NameContext>();
}

PHPParser::NameContext* PHPParser::GlobalStatementContext::name(size_t i) {
  return getRuleContext<PHPParser::NameContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::GlobalStatementContext::Comma() {
  return getTokens(PHPParser::Comma);
}

tree::TerminalNode* PHPParser::GlobalStatementContext::Comma(size_t i) {
  return getToken(PHPParser::Comma, i);
}


size_t PHPParser::GlobalStatementContext::getRuleIndex() const {
  return PHPParser::RuleGlobalStatement;
}

void PHPParser::GlobalStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalStatement(this);
}

void PHPParser::GlobalStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalStatement(this);
}


antlrcpp::Any PHPParser::GlobalStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitGlobalStatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::GlobalStatementContext* PHPParser::globalStatement() {
  GlobalStatementContext *_localctx = _tracker.createInstance<GlobalStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, PHPParser::RuleGlobalStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(PHPParser::Global);
    setState(289);
    name();
    setState(294);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PHPParser::Comma) {
      setState(290);
      match(PHPParser::Comma);
      setState(291);
      name();
      setState(296);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticVariableAssignmentStatementContext ------------------------------------------------------------------

PHPParser::StaticVariableAssignmentStatementContext::StaticVariableAssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::VariableContext* PHPParser::StaticVariableAssignmentStatementContext::variable() {
  return getRuleContext<PHPParser::VariableContext>(0);
}

tree::TerminalNode* PHPParser::StaticVariableAssignmentStatementContext::Equals() {
  return getToken(PHPParser::Equals, 0);
}

PHPParser::ExpressionContext* PHPParser::StaticVariableAssignmentStatementContext::expression() {
  return getRuleContext<PHPParser::ExpressionContext>(0);
}

tree::TerminalNode* PHPParser::StaticVariableAssignmentStatementContext::Static() {
  return getToken(PHPParser::Static, 0);
}


size_t PHPParser::StaticVariableAssignmentStatementContext::getRuleIndex() const {
  return PHPParser::RuleStaticVariableAssignmentStatement;
}

void PHPParser::StaticVariableAssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticVariableAssignmentStatement(this);
}

void PHPParser::StaticVariableAssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticVariableAssignmentStatement(this);
}


antlrcpp::Any PHPParser::StaticVariableAssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitStaticVariableAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::StaticVariableAssignmentStatementContext* PHPParser::staticVariableAssignmentStatement() {
  StaticVariableAssignmentStatementContext *_localctx = _tracker.createInstance<StaticVariableAssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, PHPParser::RuleStaticVariableAssignmentStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::Static) {
      setState(297);
      match(PHPParser::Static);
    }
    setState(300);
    variable();
    setState(301);
    match(PHPParser::Equals);
    setState(302);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

PHPParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::BreakStatementContext::Break() {
  return getToken(PHPParser::Break, 0);
}

tree::TerminalNode* PHPParser::BreakStatementContext::DecimalNumber() {
  return getToken(PHPParser::DecimalNumber, 0);
}


size_t PHPParser::BreakStatementContext::getRuleIndex() const {
  return PHPParser::RuleBreakStatement;
}

void PHPParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void PHPParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}


antlrcpp::Any PHPParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::BreakStatementContext* PHPParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, PHPParser::RuleBreakStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    match(PHPParser::Break);
    setState(306);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::DecimalNumber) {
      setState(305);
      match(PHPParser::DecimalNumber);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

PHPParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ContinueStatementContext::Continue() {
  return getToken(PHPParser::Continue, 0);
}

tree::TerminalNode* PHPParser::ContinueStatementContext::DecimalNumber() {
  return getToken(PHPParser::DecimalNumber, 0);
}


size_t PHPParser::ContinueStatementContext::getRuleIndex() const {
  return PHPParser::RuleContinueStatement;
}

void PHPParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void PHPParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}


antlrcpp::Any PHPParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ContinueStatementContext* PHPParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, PHPParser::RuleContinueStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    match(PHPParser::Continue);
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::DecimalNumber) {
      setState(309);
      match(PHPParser::DecimalNumber);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

PHPParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ReturnStatementContext::Return() {
  return getToken(PHPParser::Return, 0);
}

PHPParser::ExpressionContext* PHPParser::ReturnStatementContext::expression() {
  return getRuleContext<PHPParser::ExpressionContext>(0);
}


size_t PHPParser::ReturnStatementContext::getRuleIndex() const {
  return PHPParser::RuleReturnStatement;
}

void PHPParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void PHPParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any PHPParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ReturnStatementContext* PHPParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, PHPParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    match(PHPParser::Return);
    setState(314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PHPParser::List)
      | (1ULL << PHPParser::New)
      | (1ULL << PHPParser::Clone)
      | (1ULL << PHPParser::Ampersand)
      | (1ULL << PHPParser::Bang)
      | (1ULL << PHPParser::Minus)
      | (1ULL << PHPParser::Tilde)
      | (1ULL << PHPParser::SuppressWarnings)
      | (1ULL << PHPParser::Dollar)
      | (1ULL << PHPParser::OpenRoundBracket))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (PHPParser::Array - 69))
      | (1ULL << (PHPParser::DecimalNumber - 69))
      | (1ULL << (PHPParser::HexNumber - 69))
      | (1ULL << (PHPParser::OctalNumber - 69))
      | (1ULL << (PHPParser::Float - 69))
      | (1ULL << (PHPParser::Boolean - 69))
      | (1ULL << (PHPParser::SingleQuotedString - 69))
      | (1ULL << (PHPParser::DoubleQuotedString - 69))
      | (1ULL << (PHPParser::Identifier - 69))
      | (1ULL << (PHPParser::IncrementOperator - 69)))) != 0)) {
      setState(313);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RequireStatementContext ------------------------------------------------------------------

PHPParser::RequireStatementContext::RequireStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::RequireStatementContext::RequireOperator() {
  return getToken(PHPParser::RequireOperator, 0);
}

PHPParser::ExpressionContext* PHPParser::RequireStatementContext::expression() {
  return getRuleContext<PHPParser::ExpressionContext>(0);
}


size_t PHPParser::RequireStatementContext::getRuleIndex() const {
  return PHPParser::RuleRequireStatement;
}

void PHPParser::RequireStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequireStatement(this);
}

void PHPParser::RequireStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequireStatement(this);
}


antlrcpp::Any PHPParser::RequireStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitRequireStatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::RequireStatementContext* PHPParser::requireStatement() {
  RequireStatementContext *_localctx = _tracker.createInstance<RequireStatementContext>(_ctx, getState());
  enterRule(_localctx, 40, PHPParser::RuleRequireStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(PHPParser::RequireOperator);
    setState(317);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CasesContext ------------------------------------------------------------------

PHPParser::CasesContext::CasesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::DefaultcaseContext* PHPParser::CasesContext::defaultcase() {
  return getRuleContext<PHPParser::DefaultcaseContext>(0);
}

std::vector<PHPParser::CasestatementContext *> PHPParser::CasesContext::casestatement() {
  return getRuleContexts<PHPParser::CasestatementContext>();
}

PHPParser::CasestatementContext* PHPParser::CasesContext::casestatement(size_t i) {
  return getRuleContext<PHPParser::CasestatementContext>(i);
}


size_t PHPParser::CasesContext::getRuleIndex() const {
  return PHPParser::RuleCases;
}

void PHPParser::CasesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCases(this);
}

void PHPParser::CasesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCases(this);
}


antlrcpp::Any PHPParser::CasesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitCases(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::CasesContext* PHPParser::cases() {
  CasesContext *_localctx = _tracker.createInstance<CasesContext>(_ctx, getState());
  enterRule(_localctx, 42, PHPParser::RuleCases);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PHPParser::Case) {
      setState(319);
      casestatement();
      setState(324);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(325);
    defaultcase();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CasestatementContext ------------------------------------------------------------------

PHPParser::CasestatementContext::CasestatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::CasestatementContext::Case() {
  return getToken(PHPParser::Case, 0);
}

PHPParser::ExpressionContext* PHPParser::CasestatementContext::expression() {
  return getRuleContext<PHPParser::ExpressionContext>(0);
}

tree::TerminalNode* PHPParser::CasestatementContext::Colon() {
  return getToken(PHPParser::Colon, 0);
}

std::vector<PHPParser::StatementContext *> PHPParser::CasestatementContext::statement() {
  return getRuleContexts<PHPParser::StatementContext>();
}

PHPParser::StatementContext* PHPParser::CasestatementContext::statement(size_t i) {
  return getRuleContext<PHPParser::StatementContext>(i);
}


size_t PHPParser::CasestatementContext::getRuleIndex() const {
  return PHPParser::RuleCasestatement;
}

void PHPParser::CasestatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCasestatement(this);
}

void PHPParser::CasestatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCasestatement(this);
}


antlrcpp::Any PHPParser::CasestatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitCasestatement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::CasestatementContext* PHPParser::casestatement() {
  CasestatementContext *_localctx = _tracker.createInstance<CasestatementContext>(_ctx, getState());
  enterRule(_localctx, 44, PHPParser::RuleCasestatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(PHPParser::Case);
    setState(328);
    expression();
    setState(329);
    match(PHPParser::Colon);
    setState(333);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PHPParser::List)
      | (1ULL << PHPParser::Global)
      | (1ULL << PHPParser::Continue)
      | (1ULL << PHPParser::Return)
      | (1ULL << PHPParser::Class)
      | (1ULL << PHPParser::Do)
      | (1ULL << PHPParser::Switch)
      | (1ULL << PHPParser::Function)
      | (1ULL << PHPParser::Break)
      | (1ULL << PHPParser::If)
      | (1ULL << PHPParser::For)
      | (1ULL << PHPParser::Foreach)
      | (1ULL << PHPParser::While)
      | (1ULL << PHPParser::New)
      | (1ULL << PHPParser::Clone)
      | (1ULL << PHPParser::Ampersand)
      | (1ULL << PHPParser::Bang)
      | (1ULL << PHPParser::Minus)
      | (1ULL << PHPParser::Tilde)
      | (1ULL << PHPParser::SuppressWarnings)
      | (1ULL << PHPParser::Dollar)
      | (1ULL << PHPParser::OpenRoundBracket)
      | (1ULL << PHPParser::OpenCurlyBracket))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (PHPParser::Interface - 64))
      | (1ULL << (PHPParser::Abstract - 64))
      | (1ULL << (PHPParser::Static - 64))
      | (1ULL << (PHPParser::Array - 64))
      | (1ULL << (PHPParser::RequireOperator - 64))
      | (1ULL << (PHPParser::DecimalNumber - 64))
      | (1ULL << (PHPParser::HexNumber - 64))
      | (1ULL << (PHPParser::OctalNumber - 64))
      | (1ULL << (PHPParser::Float - 64))
      | (1ULL << (PHPParser::Boolean - 64))
      | (1ULL << (PHPParser::SingleQuotedString - 64))
      | (1ULL << (PHPParser::DoubleQuotedString - 64))
      | (1ULL << (PHPParser::Identifier - 64))
      | (1ULL << (PHPParser::IncrementOperator - 64)))) != 0)) {
      setState(330);
      statement();
      setState(335);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultcaseContext ------------------------------------------------------------------

PHPParser::DefaultcaseContext::DefaultcaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::DefaultcaseContext::Default() {
  return getToken(PHPParser::Default, 0);
}

tree::TerminalNode* PHPParser::DefaultcaseContext::Colon() {
  return getToken(PHPParser::Colon, 0);
}

std::vector<PHPParser::StatementContext *> PHPParser::DefaultcaseContext::statement() {
  return getRuleContexts<PHPParser::StatementContext>();
}

PHPParser::StatementContext* PHPParser::DefaultcaseContext::statement(size_t i) {
  return getRuleContext<PHPParser::StatementContext>(i);
}


size_t PHPParser::DefaultcaseContext::getRuleIndex() const {
  return PHPParser::RuleDefaultcase;
}

void PHPParser::DefaultcaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultcase(this);
}

void PHPParser::DefaultcaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultcase(this);
}


antlrcpp::Any PHPParser::DefaultcaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitDefaultcase(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::DefaultcaseContext* PHPParser::defaultcase() {
  DefaultcaseContext *_localctx = _tracker.createInstance<DefaultcaseContext>(_ctx, getState());
  enterRule(_localctx, 46, PHPParser::RuleDefaultcase);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(PHPParser::Default);
    setState(337);
    match(PHPParser::Colon);
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PHPParser::List)
      | (1ULL << PHPParser::Global)
      | (1ULL << PHPParser::Continue)
      | (1ULL << PHPParser::Return)
      | (1ULL << PHPParser::Class)
      | (1ULL << PHPParser::Do)
      | (1ULL << PHPParser::Switch)
      | (1ULL << PHPParser::Function)
      | (1ULL << PHPParser::Break)
      | (1ULL << PHPParser::If)
      | (1ULL << PHPParser::For)
      | (1ULL << PHPParser::Foreach)
      | (1ULL << PHPParser::While)
      | (1ULL << PHPParser::New)
      | (1ULL << PHPParser::Clone)
      | (1ULL << PHPParser::Ampersand)
      | (1ULL << PHPParser::Bang)
      | (1ULL << PHPParser::Minus)
      | (1ULL << PHPParser::Tilde)
      | (1ULL << PHPParser::SuppressWarnings)
      | (1ULL << PHPParser::Dollar)
      | (1ULL << PHPParser::OpenRoundBracket)
      | (1ULL << PHPParser::OpenCurlyBracket))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (PHPParser::Interface - 64))
      | (1ULL << (PHPParser::Abstract - 64))
      | (1ULL << (PHPParser::Static - 64))
      | (1ULL << (PHPParser::Array - 64))
      | (1ULL << (PHPParser::RequireOperator - 64))
      | (1ULL << (PHPParser::DecimalNumber - 64))
      | (1ULL << (PHPParser::HexNumber - 64))
      | (1ULL << (PHPParser::OctalNumber - 64))
      | (1ULL << (PHPParser::Float - 64))
      | (1ULL << (PHPParser::Boolean - 64))
      | (1ULL << (PHPParser::SingleQuotedString - 64))
      | (1ULL << (PHPParser::DoubleQuotedString - 64))
      | (1ULL << (PHPParser::Identifier - 64))
      | (1ULL << (PHPParser::IncrementOperator - 64)))) != 0)) {
      setState(338);
      statement();
      setState(343);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

PHPParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::VariableContext::Dollar() {
  return getToken(PHPParser::Dollar, 0);
}

std::vector<PHPParser::VariablenameContext *> PHPParser::VariableContext::variablename() {
  return getRuleContexts<PHPParser::VariablenameContext>();
}

PHPParser::VariablenameContext* PHPParser::VariableContext::variablename(size_t i) {
  return getRuleContext<PHPParser::VariablenameContext>(i);
}

tree::TerminalNode* PHPParser::VariableContext::InstanceMember() {
  return getToken(PHPParser::InstanceMember, 0);
}


size_t PHPParser::VariableContext::getRuleIndex() const {
  return PHPParser::RuleVariable;
}

void PHPParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void PHPParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any PHPParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::VariableContext* PHPParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 48, PHPParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(351);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(344);
      match(PHPParser::Dollar);
      setState(345);
      variablename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(346);
      match(PHPParser::Dollar);
      setState(347);
      variablename();
      setState(348);
      match(PHPParser::InstanceMember);
      setState(349);
      variablename();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariablenameContext ------------------------------------------------------------------

PHPParser::VariablenameContext::VariablenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::VariablenameContext::Identifier() {
  return getToken(PHPParser::Identifier, 0);
}


size_t PHPParser::VariablenameContext::getRuleIndex() const {
  return PHPParser::RuleVariablename;
}

void PHPParser::VariablenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariablename(this);
}

void PHPParser::VariablenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariablename(this);
}


antlrcpp::Any PHPParser::VariablenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitVariablename(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::VariablenameContext* PHPParser::variablename() {
  VariablenameContext *_localctx = _tracker.createInstance<VariablenameContext>(_ctx, getState());
  enterRule(_localctx, 50, PHPParser::RuleVariablename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    match(PHPParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

PHPParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::StaticMemberAccessContext* PHPParser::NameContext::staticMemberAccess() {
  return getRuleContext<PHPParser::StaticMemberAccessContext>(0);
}

PHPParser::MemberAccessContext* PHPParser::NameContext::memberAccess() {
  return getRuleContext<PHPParser::MemberAccessContext>(0);
}

PHPParser::VariableContext* PHPParser::NameContext::variable() {
  return getRuleContext<PHPParser::VariableContext>(0);
}


size_t PHPParser::NameContext::getRuleIndex() const {
  return PHPParser::RuleName;
}

void PHPParser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void PHPParser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}


antlrcpp::Any PHPParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::NameContext* PHPParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 52, PHPParser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(358);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(355);
      staticMemberAccess();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(356);
      memberAccess();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(357);
      variable();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticMemberAccessContext ------------------------------------------------------------------

PHPParser::StaticMemberAccessContext::StaticMemberAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::StaticMemberAccessContext::Identifier() {
  return getToken(PHPParser::Identifier, 0);
}

tree::TerminalNode* PHPParser::StaticMemberAccessContext::ClassMember() {
  return getToken(PHPParser::ClassMember, 0);
}

PHPParser::VariableContext* PHPParser::StaticMemberAccessContext::variable() {
  return getRuleContext<PHPParser::VariableContext>(0);
}


size_t PHPParser::StaticMemberAccessContext::getRuleIndex() const {
  return PHPParser::RuleStaticMemberAccess;
}

void PHPParser::StaticMemberAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticMemberAccess(this);
}

void PHPParser::StaticMemberAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticMemberAccess(this);
}


antlrcpp::Any PHPParser::StaticMemberAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitStaticMemberAccess(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::StaticMemberAccessContext* PHPParser::staticMemberAccess() {
  StaticMemberAccessContext *_localctx = _tracker.createInstance<StaticMemberAccessContext>(_ctx, getState());
  enterRule(_localctx, 54, PHPParser::RuleStaticMemberAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    match(PHPParser::Identifier);
    setState(361);
    match(PHPParser::ClassMember);
    setState(362);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberAccessContext ------------------------------------------------------------------

PHPParser::MemberAccessContext::MemberAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::VariableContext* PHPParser::MemberAccessContext::variable() {
  return getRuleContext<PHPParser::VariableContext>(0);
}

std::vector<tree::TerminalNode *> PHPParser::MemberAccessContext::OpenSquareBracket() {
  return getTokens(PHPParser::OpenSquareBracket);
}

tree::TerminalNode* PHPParser::MemberAccessContext::OpenSquareBracket(size_t i) {
  return getToken(PHPParser::OpenSquareBracket, i);
}

std::vector<PHPParser::ExpressionContext *> PHPParser::MemberAccessContext::expression() {
  return getRuleContexts<PHPParser::ExpressionContext>();
}

PHPParser::ExpressionContext* PHPParser::MemberAccessContext::expression(size_t i) {
  return getRuleContext<PHPParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::MemberAccessContext::CloseSquareBracket() {
  return getTokens(PHPParser::CloseSquareBracket);
}

tree::TerminalNode* PHPParser::MemberAccessContext::CloseSquareBracket(size_t i) {
  return getToken(PHPParser::CloseSquareBracket, i);
}


size_t PHPParser::MemberAccessContext::getRuleIndex() const {
  return PHPParser::RuleMemberAccess;
}

void PHPParser::MemberAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccess(this);
}

void PHPParser::MemberAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccess(this);
}


antlrcpp::Any PHPParser::MemberAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitMemberAccess(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::MemberAccessContext* PHPParser::memberAccess() {
  MemberAccessContext *_localctx = _tracker.createInstance<MemberAccessContext>(_ctx, getState());
  enterRule(_localctx, 56, PHPParser::RuleMemberAccess);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    variable();
    setState(371);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PHPParser::OpenSquareBracket) {
      setState(365);
      match(PHPParser::OpenSquareBracket);
      setState(366);
      expression();
      setState(367);
      match(PHPParser::CloseSquareBracket);
      setState(373);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BracketedBlockContext ------------------------------------------------------------------

PHPParser::BracketedBlockContext::BracketedBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::StatementContext *> PHPParser::BracketedBlockContext::statement() {
  return getRuleContexts<PHPParser::StatementContext>();
}

PHPParser::StatementContext* PHPParser::BracketedBlockContext::statement(size_t i) {
  return getRuleContext<PHPParser::StatementContext>(i);
}


size_t PHPParser::BracketedBlockContext::getRuleIndex() const {
  return PHPParser::RuleBracketedBlock;
}

void PHPParser::BracketedBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracketedBlock(this);
}

void PHPParser::BracketedBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracketedBlock(this);
}


antlrcpp::Any PHPParser::BracketedBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitBracketedBlock(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::BracketedBlockContext* PHPParser::bracketedBlock() {
  BracketedBlockContext *_localctx = _tracker.createInstance<BracketedBlockContext>(_ctx, getState());
  enterRule(_localctx, 58, PHPParser::RuleBracketedBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    match(PHPParser::OpenCurlyBracket);
    setState(378);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PHPParser::List)
      | (1ULL << PHPParser::Global)
      | (1ULL << PHPParser::Continue)
      | (1ULL << PHPParser::Return)
      | (1ULL << PHPParser::Class)
      | (1ULL << PHPParser::Do)
      | (1ULL << PHPParser::Switch)
      | (1ULL << PHPParser::Function)
      | (1ULL << PHPParser::Break)
      | (1ULL << PHPParser::If)
      | (1ULL << PHPParser::For)
      | (1ULL << PHPParser::Foreach)
      | (1ULL << PHPParser::While)
      | (1ULL << PHPParser::New)
      | (1ULL << PHPParser::Clone)
      | (1ULL << PHPParser::Ampersand)
      | (1ULL << PHPParser::Bang)
      | (1ULL << PHPParser::Minus)
      | (1ULL << PHPParser::Tilde)
      | (1ULL << PHPParser::SuppressWarnings)
      | (1ULL << PHPParser::Dollar)
      | (1ULL << PHPParser::OpenRoundBracket)
      | (1ULL << PHPParser::OpenCurlyBracket))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (PHPParser::Interface - 64))
      | (1ULL << (PHPParser::Abstract - 64))
      | (1ULL << (PHPParser::Static - 64))
      | (1ULL << (PHPParser::Array - 64))
      | (1ULL << (PHPParser::RequireOperator - 64))
      | (1ULL << (PHPParser::DecimalNumber - 64))
      | (1ULL << (PHPParser::HexNumber - 64))
      | (1ULL << (PHPParser::OctalNumber - 64))
      | (1ULL << (PHPParser::Float - 64))
      | (1ULL << (PHPParser::Boolean - 64))
      | (1ULL << (PHPParser::SingleQuotedString - 64))
      | (1ULL << (PHPParser::DoubleQuotedString - 64))
      | (1ULL << (PHPParser::Identifier - 64))
      | (1ULL << (PHPParser::IncrementOperator - 64)))) != 0)) {
      setState(375);
      statement();
      setState(380);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(381);
    match(PHPParser::CloseCurlyBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDefinitionContext ------------------------------------------------------------------

PHPParser::InterfaceDefinitionContext::InterfaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::InterfaceDefinitionContext::Interface() {
  return getToken(PHPParser::Interface, 0);
}

PHPParser::InterfaceNameContext* PHPParser::InterfaceDefinitionContext::interfaceName() {
  return getRuleContext<PHPParser::InterfaceNameContext>(0);
}

tree::TerminalNode* PHPParser::InterfaceDefinitionContext::OpenCurlyBracket() {
  return getToken(PHPParser::OpenCurlyBracket, 0);
}

tree::TerminalNode* PHPParser::InterfaceDefinitionContext::CloseCurlyBracket() {
  return getToken(PHPParser::CloseCurlyBracket, 0);
}

PHPParser::InterfaceExtendsContext* PHPParser::InterfaceDefinitionContext::interfaceExtends() {
  return getRuleContext<PHPParser::InterfaceExtendsContext>(0);
}

std::vector<PHPParser::InterfaceMemberContext *> PHPParser::InterfaceDefinitionContext::interfaceMember() {
  return getRuleContexts<PHPParser::InterfaceMemberContext>();
}

PHPParser::InterfaceMemberContext* PHPParser::InterfaceDefinitionContext::interfaceMember(size_t i) {
  return getRuleContext<PHPParser::InterfaceMemberContext>(i);
}


size_t PHPParser::InterfaceDefinitionContext::getRuleIndex() const {
  return PHPParser::RuleInterfaceDefinition;
}

void PHPParser::InterfaceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDefinition(this);
}

void PHPParser::InterfaceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDefinition(this);
}


antlrcpp::Any PHPParser::InterfaceDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceDefinition(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::InterfaceDefinitionContext* PHPParser::interfaceDefinition() {
  InterfaceDefinitionContext *_localctx = _tracker.createInstance<InterfaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 60, PHPParser::RuleInterfaceDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(383);
    match(PHPParser::Interface);
    setState(384);
    interfaceName();
    setState(386);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::Extends) {
      setState(385);
      interfaceExtends();
    }
    setState(388);
    match(PHPParser::OpenCurlyBracket);
    setState(392);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 15) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 15)) & ((1ULL << (PHPParser::Const - 15))
      | (1ULL << (PHPParser::Function - 15))
      | (1ULL << (PHPParser::Abstract - 15))
      | (1ULL << (PHPParser::Static - 15))
      | (1ULL << (PHPParser::AccessModifier - 15)))) != 0)) {
      setState(389);
      interfaceMember();
      setState(394);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(395);
    match(PHPParser::CloseCurlyBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceNameContext ------------------------------------------------------------------

PHPParser::InterfaceNameContext::InterfaceNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::InterfaceNameContext::Identifier() {
  return getToken(PHPParser::Identifier, 0);
}


size_t PHPParser::InterfaceNameContext::getRuleIndex() const {
  return PHPParser::RuleInterfaceName;
}

void PHPParser::InterfaceNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceName(this);
}

void PHPParser::InterfaceNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceName(this);
}


antlrcpp::Any PHPParser::InterfaceNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceName(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::InterfaceNameContext* PHPParser::interfaceName() {
  InterfaceNameContext *_localctx = _tracker.createInstance<InterfaceNameContext>(_ctx, getState());
  enterRule(_localctx, 62, PHPParser::RuleInterfaceName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    match(PHPParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceExtendsContext ------------------------------------------------------------------

PHPParser::InterfaceExtendsContext::InterfaceExtendsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::InterfaceExtendsContext::Extends() {
  return getToken(PHPParser::Extends, 0);
}

std::vector<PHPParser::InterfaceNameContext *> PHPParser::InterfaceExtendsContext::interfaceName() {
  return getRuleContexts<PHPParser::InterfaceNameContext>();
}

PHPParser::InterfaceNameContext* PHPParser::InterfaceExtendsContext::interfaceName(size_t i) {
  return getRuleContext<PHPParser::InterfaceNameContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::InterfaceExtendsContext::Comma() {
  return getTokens(PHPParser::Comma);
}

tree::TerminalNode* PHPParser::InterfaceExtendsContext::Comma(size_t i) {
  return getToken(PHPParser::Comma, i);
}


size_t PHPParser::InterfaceExtendsContext::getRuleIndex() const {
  return PHPParser::RuleInterfaceExtends;
}

void PHPParser::InterfaceExtendsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceExtends(this);
}

void PHPParser::InterfaceExtendsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceExtends(this);
}


antlrcpp::Any PHPParser::InterfaceExtendsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceExtends(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::InterfaceExtendsContext* PHPParser::interfaceExtends() {
  InterfaceExtendsContext *_localctx = _tracker.createInstance<InterfaceExtendsContext>(_ctx, getState());
  enterRule(_localctx, 64, PHPParser::RuleInterfaceExtends);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    match(PHPParser::Extends);
    setState(400);
    interfaceName();
    setState(405);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PHPParser::Comma) {
      setState(401);
      match(PHPParser::Comma);
      setState(402);
      interfaceName();
      setState(407);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMemberContext ------------------------------------------------------------------

PHPParser::InterfaceMemberContext::InterfaceMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::InterfaceMemberContext::Const() {
  return getToken(PHPParser::Const, 0);
}

tree::TerminalNode* PHPParser::InterfaceMemberContext::Identifier() {
  return getToken(PHPParser::Identifier, 0);
}

tree::TerminalNode* PHPParser::InterfaceMemberContext::Equals() {
  return getToken(PHPParser::Equals, 0);
}

PHPParser::AtomContext* PHPParser::InterfaceMemberContext::atom() {
  return getRuleContext<PHPParser::AtomContext>(0);
}

tree::TerminalNode* PHPParser::InterfaceMemberContext::Function() {
  return getToken(PHPParser::Function, 0);
}

PHPParser::FunctionNameContext* PHPParser::InterfaceMemberContext::functionName() {
  return getRuleContext<PHPParser::FunctionNameContext>(0);
}

PHPParser::ParametersDefinitionContext* PHPParser::InterfaceMemberContext::parametersDefinition() {
  return getRuleContext<PHPParser::ParametersDefinitionContext>(0);
}

std::vector<PHPParser::FieldModifierContext *> PHPParser::InterfaceMemberContext::fieldModifier() {
  return getRuleContexts<PHPParser::FieldModifierContext>();
}

PHPParser::FieldModifierContext* PHPParser::InterfaceMemberContext::fieldModifier(size_t i) {
  return getRuleContext<PHPParser::FieldModifierContext>(i);
}


size_t PHPParser::InterfaceMemberContext::getRuleIndex() const {
  return PHPParser::RuleInterfaceMember;
}

void PHPParser::InterfaceMemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMember(this);
}

void PHPParser::InterfaceMemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMember(this);
}


antlrcpp::Any PHPParser::InterfaceMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceMember(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::InterfaceMemberContext* PHPParser::interfaceMember() {
  InterfaceMemberContext *_localctx = _tracker.createInstance<InterfaceMemberContext>(_ctx, getState());
  enterRule(_localctx, 66, PHPParser::RuleInterfaceMember);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(426);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PHPParser::Const: {
        enterOuterAlt(_localctx, 1);
        setState(408);
        match(PHPParser::Const);
        setState(409);
        match(PHPParser::Identifier);
        setState(412);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PHPParser::Equals) {
          setState(410);
          match(PHPParser::Equals);
          setState(411);
          atom();
        }
        setState(414);
        match(PHPParser::SemiColon);
        break;
      }

      case PHPParser::Function:
      case PHPParser::Abstract:
      case PHPParser::Static:
      case PHPParser::AccessModifier: {
        enterOuterAlt(_localctx, 2);
        setState(418);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 67) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 67)) & ((1ULL << (PHPParser::Abstract - 67))
          | (1ULL << (PHPParser::Static - 67))
          | (1ULL << (PHPParser::AccessModifier - 67)))) != 0)) {
          setState(415);
          fieldModifier();
          setState(420);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(421);
        match(PHPParser::Function);
        setState(422);
        functionName();
        setState(423);
        parametersDefinition();
        setState(424);
        match(PHPParser::SemiColon);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassNameContext ------------------------------------------------------------------

PHPParser::ClassNameContext::ClassNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ClassNameContext::Identifier() {
  return getToken(PHPParser::Identifier, 0);
}


size_t PHPParser::ClassNameContext::getRuleIndex() const {
  return PHPParser::RuleClassName;
}

void PHPParser::ClassNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassName(this);
}

void PHPParser::ClassNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassName(this);
}


antlrcpp::Any PHPParser::ClassNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitClassName(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ClassNameContext* PHPParser::className() {
  ClassNameContext *_localctx = _tracker.createInstance<ClassNameContext>(_ctx, getState());
  enterRule(_localctx, 68, PHPParser::RuleClassName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    match(PHPParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDefinitionContext ------------------------------------------------------------------

PHPParser::ClassDefinitionContext::ClassDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ClassDefinitionContext::Class() {
  return getToken(PHPParser::Class, 0);
}

std::vector<PHPParser::ClassNameContext *> PHPParser::ClassDefinitionContext::className() {
  return getRuleContexts<PHPParser::ClassNameContext>();
}

PHPParser::ClassNameContext* PHPParser::ClassDefinitionContext::className(size_t i) {
  return getRuleContext<PHPParser::ClassNameContext>(i);
}

tree::TerminalNode* PHPParser::ClassDefinitionContext::OpenCurlyBracket() {
  return getToken(PHPParser::OpenCurlyBracket, 0);
}

tree::TerminalNode* PHPParser::ClassDefinitionContext::CloseCurlyBracket() {
  return getToken(PHPParser::CloseCurlyBracket, 0);
}

PHPParser::ClassModifierContext* PHPParser::ClassDefinitionContext::classModifier() {
  return getRuleContext<PHPParser::ClassModifierContext>(0);
}

tree::TerminalNode* PHPParser::ClassDefinitionContext::Extends() {
  return getToken(PHPParser::Extends, 0);
}

PHPParser::ClassImplementsContext* PHPParser::ClassDefinitionContext::classImplements() {
  return getRuleContext<PHPParser::ClassImplementsContext>(0);
}

std::vector<PHPParser::ClassMemberContext *> PHPParser::ClassDefinitionContext::classMember() {
  return getRuleContexts<PHPParser::ClassMemberContext>();
}

PHPParser::ClassMemberContext* PHPParser::ClassDefinitionContext::classMember(size_t i) {
  return getRuleContext<PHPParser::ClassMemberContext>(i);
}


size_t PHPParser::ClassDefinitionContext::getRuleIndex() const {
  return PHPParser::RuleClassDefinition;
}

void PHPParser::ClassDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDefinition(this);
}

void PHPParser::ClassDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDefinition(this);
}


antlrcpp::Any PHPParser::ClassDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitClassDefinition(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ClassDefinitionContext* PHPParser::classDefinition() {
  ClassDefinitionContext *_localctx = _tracker.createInstance<ClassDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 70, PHPParser::RuleClassDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::Abstract) {
      setState(430);
      classModifier();
    }
    setState(433);
    match(PHPParser::Class);
    setState(434);
    className();
    setState(437);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::Extends) {
      setState(435);
      match(PHPParser::Extends);
      setState(436);
      className();
    }
    setState(440);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::Implements) {
      setState(439);
      classImplements();
    }
    setState(442);
    match(PHPParser::OpenCurlyBracket);
    setState(446);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 15) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 15)) & ((1ULL << (PHPParser::Const - 15))
      | (1ULL << (PHPParser::Var - 15))
      | (1ULL << (PHPParser::Function - 15))
      | (1ULL << (PHPParser::Dollar - 15))
      | (1ULL << (PHPParser::Abstract - 15))
      | (1ULL << (PHPParser::Static - 15))
      | (1ULL << (PHPParser::AccessModifier - 15)))) != 0)) {
      setState(443);
      classMember();
      setState(448);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(449);
    match(PHPParser::CloseCurlyBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassImplementsContext ------------------------------------------------------------------

PHPParser::ClassImplementsContext::ClassImplementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ClassImplementsContext::Implements() {
  return getToken(PHPParser::Implements, 0);
}

std::vector<PHPParser::InterfaceNameContext *> PHPParser::ClassImplementsContext::interfaceName() {
  return getRuleContexts<PHPParser::InterfaceNameContext>();
}

PHPParser::InterfaceNameContext* PHPParser::ClassImplementsContext::interfaceName(size_t i) {
  return getRuleContext<PHPParser::InterfaceNameContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::ClassImplementsContext::Comma() {
  return getTokens(PHPParser::Comma);
}

tree::TerminalNode* PHPParser::ClassImplementsContext::Comma(size_t i) {
  return getToken(PHPParser::Comma, i);
}


size_t PHPParser::ClassImplementsContext::getRuleIndex() const {
  return PHPParser::RuleClassImplements;
}

void PHPParser::ClassImplementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassImplements(this);
}

void PHPParser::ClassImplementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassImplements(this);
}


antlrcpp::Any PHPParser::ClassImplementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitClassImplements(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ClassImplementsContext* PHPParser::classImplements() {
  ClassImplementsContext *_localctx = _tracker.createInstance<ClassImplementsContext>(_ctx, getState());
  enterRule(_localctx, 72, PHPParser::RuleClassImplements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    match(PHPParser::Implements);

    setState(452);
    interfaceName();
    setState(457);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PHPParser::Comma) {
      setState(453);
      match(PHPParser::Comma);
      setState(454);
      interfaceName();
      setState(459);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMemberContext ------------------------------------------------------------------

PHPParser::ClassMemberContext::ClassMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ClassMemberContext::Function() {
  return getToken(PHPParser::Function, 0);
}

PHPParser::FunctionNameContext* PHPParser::ClassMemberContext::functionName() {
  return getRuleContext<PHPParser::FunctionNameContext>(0);
}

PHPParser::ParametersDefinitionContext* PHPParser::ClassMemberContext::parametersDefinition() {
  return getRuleContext<PHPParser::ParametersDefinitionContext>(0);
}

PHPParser::BracketedBlockContext* PHPParser::ClassMemberContext::bracketedBlock() {
  return getRuleContext<PHPParser::BracketedBlockContext>(0);
}

std::vector<PHPParser::FieldModifierContext *> PHPParser::ClassMemberContext::fieldModifier() {
  return getRuleContexts<PHPParser::FieldModifierContext>();
}

PHPParser::FieldModifierContext* PHPParser::ClassMemberContext::fieldModifier(size_t i) {
  return getRuleContext<PHPParser::FieldModifierContext>(i);
}

PHPParser::ConstDefinitionContext* PHPParser::ClassMemberContext::constDefinition() {
  return getRuleContext<PHPParser::ConstDefinitionContext>(0);
}

PHPParser::FieldDefinitionContext* PHPParser::ClassMemberContext::fieldDefinition() {
  return getRuleContext<PHPParser::FieldDefinitionContext>(0);
}

tree::TerminalNode* PHPParser::ClassMemberContext::Var() {
  return getToken(PHPParser::Var, 0);
}


size_t PHPParser::ClassMemberContext::getRuleIndex() const {
  return PHPParser::RuleClassMember;
}

void PHPParser::ClassMemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMember(this);
}

void PHPParser::ClassMemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMember(this);
}


antlrcpp::Any PHPParser::ClassMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitClassMember(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ClassMemberContext* PHPParser::classMember() {
  ClassMemberContext *_localctx = _tracker.createInstance<ClassMemberContext>(_ctx, getState());
  enterRule(_localctx, 74, PHPParser::RuleClassMember);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(488);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(463);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (PHPParser::Abstract - 67))
        | (1ULL << (PHPParser::Static - 67))
        | (1ULL << (PHPParser::AccessModifier - 67)))) != 0)) {
        setState(460);
        fieldModifier();
        setState(465);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(466);
      match(PHPParser::Function);
      setState(467);
      functionName();
      setState(468);
      parametersDefinition();
      setState(471);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case PHPParser::OpenCurlyBracket: {
          setState(469);
          bracketedBlock();
          break;
        }

        case PHPParser::SemiColon: {
          setState(470);
          match(PHPParser::SemiColon);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(473);
      constDefinition();
      setState(474);
      match(PHPParser::SemiColon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(477);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PHPParser::Var) {
        setState(476);
        match(PHPParser::Var);
      }
      setState(482);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (PHPParser::Abstract - 67))
        | (1ULL << (PHPParser::Static - 67))
        | (1ULL << (PHPParser::AccessModifier - 67)))) != 0)) {
        setState(479);
        fieldModifier();
        setState(484);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(485);
      fieldDefinition();
      setState(486);
      match(PHPParser::SemiColon);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassModifierContext ------------------------------------------------------------------

PHPParser::ClassModifierContext::ClassModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ClassModifierContext::Abstract() {
  return getToken(PHPParser::Abstract, 0);
}


size_t PHPParser::ClassModifierContext::getRuleIndex() const {
  return PHPParser::RuleClassModifier;
}

void PHPParser::ClassModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassModifier(this);
}

void PHPParser::ClassModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassModifier(this);
}


antlrcpp::Any PHPParser::ClassModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitClassModifier(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ClassModifierContext* PHPParser::classModifier() {
  ClassModifierContext *_localctx = _tracker.createInstance<ClassModifierContext>(_ctx, getState());
  enterRule(_localctx, 76, PHPParser::RuleClassModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(490);
    match(PHPParser::Abstract);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDefinitionContext ------------------------------------------------------------------

PHPParser::ConstDefinitionContext::ConstDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ConstDefinitionContext::Const() {
  return getToken(PHPParser::Const, 0);
}

PHPParser::VariablenameContext* PHPParser::ConstDefinitionContext::variablename() {
  return getRuleContext<PHPParser::VariablenameContext>(0);
}

tree::TerminalNode* PHPParser::ConstDefinitionContext::Equals() {
  return getToken(PHPParser::Equals, 0);
}

PHPParser::AtomContext* PHPParser::ConstDefinitionContext::atom() {
  return getRuleContext<PHPParser::AtomContext>(0);
}


size_t PHPParser::ConstDefinitionContext::getRuleIndex() const {
  return PHPParser::RuleConstDefinition;
}

void PHPParser::ConstDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDefinition(this);
}

void PHPParser::ConstDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDefinition(this);
}


antlrcpp::Any PHPParser::ConstDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitConstDefinition(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ConstDefinitionContext* PHPParser::constDefinition() {
  ConstDefinitionContext *_localctx = _tracker.createInstance<ConstDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 78, PHPParser::RuleConstDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(492);
    match(PHPParser::Const);
    setState(493);
    variablename();
    setState(494);
    match(PHPParser::Equals);
    setState(495);
    atom();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDefinitionContext ------------------------------------------------------------------

PHPParser::FieldDefinitionContext::FieldDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::FieldNameContext* PHPParser::FieldDefinitionContext::fieldName() {
  return getRuleContext<PHPParser::FieldNameContext>(0);
}

tree::TerminalNode* PHPParser::FieldDefinitionContext::Equals() {
  return getToken(PHPParser::Equals, 0);
}

PHPParser::AtomContext* PHPParser::FieldDefinitionContext::atom() {
  return getRuleContext<PHPParser::AtomContext>(0);
}


size_t PHPParser::FieldDefinitionContext::getRuleIndex() const {
  return PHPParser::RuleFieldDefinition;
}

void PHPParser::FieldDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDefinition(this);
}

void PHPParser::FieldDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDefinition(this);
}


antlrcpp::Any PHPParser::FieldDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitFieldDefinition(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::FieldDefinitionContext* PHPParser::fieldDefinition() {
  FieldDefinitionContext *_localctx = _tracker.createInstance<FieldDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 80, PHPParser::RuleFieldDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    fieldName();
    setState(500);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::Equals) {
      setState(498);
      match(PHPParser::Equals);
      setState(499);
      atom();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldModifierContext ------------------------------------------------------------------

PHPParser::FieldModifierContext::FieldModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::FieldModifierContext::AccessModifier() {
  return getToken(PHPParser::AccessModifier, 0);
}

tree::TerminalNode* PHPParser::FieldModifierContext::Abstract() {
  return getToken(PHPParser::Abstract, 0);
}

tree::TerminalNode* PHPParser::FieldModifierContext::Static() {
  return getToken(PHPParser::Static, 0);
}


size_t PHPParser::FieldModifierContext::getRuleIndex() const {
  return PHPParser::RuleFieldModifier;
}

void PHPParser::FieldModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldModifier(this);
}

void PHPParser::FieldModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldModifier(this);
}


antlrcpp::Any PHPParser::FieldModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitFieldModifier(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::FieldModifierContext* PHPParser::fieldModifier() {
  FieldModifierContext *_localctx = _tracker.createInstance<FieldModifierContext>(_ctx, getState());
  enterRule(_localctx, 82, PHPParser::RuleFieldModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    _la = _input->LA(1);
    if (!(((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (PHPParser::Abstract - 67))
      | (1ULL << (PHPParser::Static - 67))
      | (1ULL << (PHPParser::AccessModifier - 67)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldNameContext ------------------------------------------------------------------

PHPParser::FieldNameContext::FieldNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::FieldNameContext::Dollar() {
  return getToken(PHPParser::Dollar, 0);
}

PHPParser::VariablenameContext* PHPParser::FieldNameContext::variablename() {
  return getRuleContext<PHPParser::VariablenameContext>(0);
}


size_t PHPParser::FieldNameContext::getRuleIndex() const {
  return PHPParser::RuleFieldName;
}

void PHPParser::FieldNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldName(this);
}

void PHPParser::FieldNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldName(this);
}


antlrcpp::Any PHPParser::FieldNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitFieldName(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::FieldNameContext* PHPParser::fieldName() {
  FieldNameContext *_localctx = _tracker.createInstance<FieldNameContext>(_ctx, getState());
  enterRule(_localctx, 84, PHPParser::RuleFieldName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    match(PHPParser::Dollar);
    setState(505);
    variablename();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

PHPParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::FunctionDefinitionContext::Function() {
  return getToken(PHPParser::Function, 0);
}

PHPParser::FunctionNameContext* PHPParser::FunctionDefinitionContext::functionName() {
  return getRuleContext<PHPParser::FunctionNameContext>(0);
}

PHPParser::ParametersDefinitionContext* PHPParser::FunctionDefinitionContext::parametersDefinition() {
  return getRuleContext<PHPParser::ParametersDefinitionContext>(0);
}

PHPParser::BracketedBlockContext* PHPParser::FunctionDefinitionContext::bracketedBlock() {
  return getRuleContext<PHPParser::BracketedBlockContext>(0);
}


size_t PHPParser::FunctionDefinitionContext::getRuleIndex() const {
  return PHPParser::RuleFunctionDefinition;
}

void PHPParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void PHPParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any PHPParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::FunctionDefinitionContext* PHPParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 86, PHPParser::RuleFunctionDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    match(PHPParser::Function);
    setState(508);
    functionName();
    setState(509);
    parametersDefinition();
    setState(510);
    bracketedBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersDefinitionContext ------------------------------------------------------------------

PHPParser::ParametersDefinitionContext::ParametersDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ParametersDefinitionContext::OpenRoundBracket() {
  return getToken(PHPParser::OpenRoundBracket, 0);
}

tree::TerminalNode* PHPParser::ParametersDefinitionContext::CloseRoundBracket() {
  return getToken(PHPParser::CloseRoundBracket, 0);
}

std::vector<PHPParser::ParamDefContext *> PHPParser::ParametersDefinitionContext::paramDef() {
  return getRuleContexts<PHPParser::ParamDefContext>();
}

PHPParser::ParamDefContext* PHPParser::ParametersDefinitionContext::paramDef(size_t i) {
  return getRuleContext<PHPParser::ParamDefContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::ParametersDefinitionContext::Comma() {
  return getTokens(PHPParser::Comma);
}

tree::TerminalNode* PHPParser::ParametersDefinitionContext::Comma(size_t i) {
  return getToken(PHPParser::Comma, i);
}


size_t PHPParser::ParametersDefinitionContext::getRuleIndex() const {
  return PHPParser::RuleParametersDefinition;
}

void PHPParser::ParametersDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersDefinition(this);
}

void PHPParser::ParametersDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersDefinition(this);
}


antlrcpp::Any PHPParser::ParametersDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitParametersDefinition(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ParametersDefinitionContext* PHPParser::parametersDefinition() {
  ParametersDefinitionContext *_localctx = _tracker.createInstance<ParametersDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 88, PHPParser::RuleParametersDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(512);
    match(PHPParser::OpenRoundBracket);
    setState(521);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 40) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 40)) & ((1ULL << (PHPParser::Ampersand - 40))
      | (1ULL << (PHPParser::Dollar - 40))
      | (1ULL << (PHPParser::PrimitiveType - 40)))) != 0)) {
      setState(513);
      paramDef();
      setState(518);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PHPParser::Comma) {
        setState(514);
        match(PHPParser::Comma);
        setState(515);
        paramDef();
        setState(520);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(523);
    match(PHPParser::CloseRoundBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionInvocationContext ------------------------------------------------------------------

PHPParser::FunctionInvocationContext::FunctionInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::FunctionNameContext* PHPParser::FunctionInvocationContext::functionName() {
  return getRuleContext<PHPParser::FunctionNameContext>(0);
}

PHPParser::FunctionInvocationParametersContext* PHPParser::FunctionInvocationContext::functionInvocationParameters() {
  return getRuleContext<PHPParser::FunctionInvocationParametersContext>(0);
}


size_t PHPParser::FunctionInvocationContext::getRuleIndex() const {
  return PHPParser::RuleFunctionInvocation;
}

void PHPParser::FunctionInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionInvocation(this);
}

void PHPParser::FunctionInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionInvocation(this);
}


antlrcpp::Any PHPParser::FunctionInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitFunctionInvocation(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::FunctionInvocationContext* PHPParser::functionInvocation() {
  FunctionInvocationContext *_localctx = _tracker.createInstance<FunctionInvocationContext>(_ctx, getState());
  enterRule(_localctx, 90, PHPParser::RuleFunctionInvocation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    functionName();
    setState(526);
    functionInvocationParameters();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionNameContext ------------------------------------------------------------------

PHPParser::FunctionNameContext::FunctionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::FunctionNameContext::Identifier() {
  return getToken(PHPParser::Identifier, 0);
}


size_t PHPParser::FunctionNameContext::getRuleIndex() const {
  return PHPParser::RuleFunctionName;
}

void PHPParser::FunctionNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionName(this);
}

void PHPParser::FunctionNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionName(this);
}


antlrcpp::Any PHPParser::FunctionNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitFunctionName(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::FunctionNameContext* PHPParser::functionName() {
  FunctionNameContext *_localctx = _tracker.createInstance<FunctionNameContext>(_ctx, getState());
  enterRule(_localctx, 92, PHPParser::RuleFunctionName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    match(PHPParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionInvocationParametersContext ------------------------------------------------------------------

PHPParser::FunctionInvocationParametersContext::FunctionInvocationParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::FunctionInvocationParametersContext::OpenRoundBracket() {
  return getToken(PHPParser::OpenRoundBracket, 0);
}

PHPParser::CommaListContext* PHPParser::FunctionInvocationParametersContext::commaList() {
  return getRuleContext<PHPParser::CommaListContext>(0);
}

tree::TerminalNode* PHPParser::FunctionInvocationParametersContext::CloseRoundBracket() {
  return getToken(PHPParser::CloseRoundBracket, 0);
}


size_t PHPParser::FunctionInvocationParametersContext::getRuleIndex() const {
  return PHPParser::RuleFunctionInvocationParameters;
}

void PHPParser::FunctionInvocationParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionInvocationParameters(this);
}

void PHPParser::FunctionInvocationParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionInvocationParameters(this);
}


antlrcpp::Any PHPParser::FunctionInvocationParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitFunctionInvocationParameters(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::FunctionInvocationParametersContext* PHPParser::functionInvocationParameters() {
  FunctionInvocationParametersContext *_localctx = _tracker.createInstance<FunctionInvocationParametersContext>(_ctx, getState());
  enterRule(_localctx, 94, PHPParser::RuleFunctionInvocationParameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(531);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(530);
      match(PHPParser::OpenRoundBracket);
      break;
    }

    }
    setState(534);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(533);
      commaList();
      break;
    }

    }
    setState(537);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(536);
      match(PHPParser::CloseRoundBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamDefContext ------------------------------------------------------------------

PHPParser::ParamDefContext::ParamDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::ParamNameContext* PHPParser::ParamDefContext::paramName() {
  return getRuleContext<PHPParser::ParamNameContext>(0);
}

tree::TerminalNode* PHPParser::ParamDefContext::PrimitiveType() {
  return getToken(PHPParser::PrimitiveType, 0);
}

tree::TerminalNode* PHPParser::ParamDefContext::Equals() {
  return getToken(PHPParser::Equals, 0);
}

PHPParser::AtomContext* PHPParser::ParamDefContext::atom() {
  return getRuleContext<PHPParser::AtomContext>(0);
}


size_t PHPParser::ParamDefContext::getRuleIndex() const {
  return PHPParser::RuleParamDef;
}

void PHPParser::ParamDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamDef(this);
}

void PHPParser::ParamDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamDef(this);
}


antlrcpp::Any PHPParser::ParamDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitParamDef(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ParamDefContext* PHPParser::paramDef() {
  ParamDefContext *_localctx = _tracker.createInstance<ParamDefContext>(_ctx, getState());
  enterRule(_localctx, 96, PHPParser::RuleParamDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(540);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::PrimitiveType) {
      setState(539);
      match(PHPParser::PrimitiveType);
    }
    setState(542);
    paramName();
    setState(545);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PHPParser::Equals) {
      setState(543);
      match(PHPParser::Equals);
      setState(544);
      atom();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamNameContext ------------------------------------------------------------------

PHPParser::ParamNameContext::ParamNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ParamNameContext::Dollar() {
  return getToken(PHPParser::Dollar, 0);
}

tree::TerminalNode* PHPParser::ParamNameContext::Identifier() {
  return getToken(PHPParser::Identifier, 0);
}

tree::TerminalNode* PHPParser::ParamNameContext::Ampersand() {
  return getToken(PHPParser::Ampersand, 0);
}


size_t PHPParser::ParamNameContext::getRuleIndex() const {
  return PHPParser::RuleParamName;
}

void PHPParser::ParamNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamName(this);
}

void PHPParser::ParamNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamName(this);
}


antlrcpp::Any PHPParser::ParamNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitParamName(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ParamNameContext* PHPParser::paramName() {
  ParamNameContext *_localctx = _tracker.createInstance<ParamNameContext>(_ctx, getState());
  enterRule(_localctx, 98, PHPParser::RuleParamName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(552);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PHPParser::Dollar: {
        enterOuterAlt(_localctx, 1);
        setState(547);
        match(PHPParser::Dollar);
        setState(548);
        match(PHPParser::Identifier);
        break;
      }

      case PHPParser::Ampersand: {
        enterOuterAlt(_localctx, 2);
        setState(549);
        match(PHPParser::Ampersand);
        setState(550);
        match(PHPParser::Dollar);
        setState(551);
        match(PHPParser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommaListContext ------------------------------------------------------------------

PHPParser::CommaListContext::CommaListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::ExpressionContext *> PHPParser::CommaListContext::expression() {
  return getRuleContexts<PHPParser::ExpressionContext>();
}

PHPParser::ExpressionContext* PHPParser::CommaListContext::expression(size_t i) {
  return getRuleContext<PHPParser::ExpressionContext>(i);
}


size_t PHPParser::CommaListContext::getRuleIndex() const {
  return PHPParser::RuleCommaList;
}

void PHPParser::CommaListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommaList(this);
}

void PHPParser::CommaListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommaList(this);
}


antlrcpp::Any PHPParser::CommaListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitCommaList(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::CommaListContext* PHPParser::commaList() {
  CommaListContext *_localctx = _tracker.createInstance<CommaListContext>(_ctx, getState());
  enterRule(_localctx, 100, PHPParser::RuleCommaList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(554);
    expression();
    setState(559);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(555);
        match(PHPParser::Comma);
        setState(556);
        expression(); 
      }
      setState(561);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

PHPParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::WeakLogicalOrContext* PHPParser::ExpressionContext::weakLogicalOr() {
  return getRuleContext<PHPParser::WeakLogicalOrContext>(0);
}


size_t PHPParser::ExpressionContext::getRuleIndex() const {
  return PHPParser::RuleExpression;
}

void PHPParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void PHPParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any PHPParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ExpressionContext* PHPParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 102, PHPParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(562);
    weakLogicalOr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WeakLogicalOrContext ------------------------------------------------------------------

PHPParser::WeakLogicalOrContext::WeakLogicalOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::WeakLogicalXorContext *> PHPParser::WeakLogicalOrContext::weakLogicalXor() {
  return getRuleContexts<PHPParser::WeakLogicalXorContext>();
}

PHPParser::WeakLogicalXorContext* PHPParser::WeakLogicalOrContext::weakLogicalXor(size_t i) {
  return getRuleContext<PHPParser::WeakLogicalXorContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::WeakLogicalOrContext::Or() {
  return getTokens(PHPParser::Or);
}

tree::TerminalNode* PHPParser::WeakLogicalOrContext::Or(size_t i) {
  return getToken(PHPParser::Or, i);
}


size_t PHPParser::WeakLogicalOrContext::getRuleIndex() const {
  return PHPParser::RuleWeakLogicalOr;
}

void PHPParser::WeakLogicalOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWeakLogicalOr(this);
}

void PHPParser::WeakLogicalOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWeakLogicalOr(this);
}


antlrcpp::Any PHPParser::WeakLogicalOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitWeakLogicalOr(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::WeakLogicalOrContext* PHPParser::weakLogicalOr() {
  WeakLogicalOrContext *_localctx = _tracker.createInstance<WeakLogicalOrContext>(_ctx, getState());
  enterRule(_localctx, 104, PHPParser::RuleWeakLogicalOr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(564);
    weakLogicalXor();
    setState(569);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(565);
        match(PHPParser::Or);
        setState(566);
        weakLogicalXor(); 
      }
      setState(571);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WeakLogicalXorContext ------------------------------------------------------------------

PHPParser::WeakLogicalXorContext::WeakLogicalXorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::WeakLogicalAndContext *> PHPParser::WeakLogicalXorContext::weakLogicalAnd() {
  return getRuleContexts<PHPParser::WeakLogicalAndContext>();
}

PHPParser::WeakLogicalAndContext* PHPParser::WeakLogicalXorContext::weakLogicalAnd(size_t i) {
  return getRuleContext<PHPParser::WeakLogicalAndContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::WeakLogicalXorContext::Xor() {
  return getTokens(PHPParser::Xor);
}

tree::TerminalNode* PHPParser::WeakLogicalXorContext::Xor(size_t i) {
  return getToken(PHPParser::Xor, i);
}


size_t PHPParser::WeakLogicalXorContext::getRuleIndex() const {
  return PHPParser::RuleWeakLogicalXor;
}

void PHPParser::WeakLogicalXorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWeakLogicalXor(this);
}

void PHPParser::WeakLogicalXorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWeakLogicalXor(this);
}


antlrcpp::Any PHPParser::WeakLogicalXorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitWeakLogicalXor(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::WeakLogicalXorContext* PHPParser::weakLogicalXor() {
  WeakLogicalXorContext *_localctx = _tracker.createInstance<WeakLogicalXorContext>(_ctx, getState());
  enterRule(_localctx, 106, PHPParser::RuleWeakLogicalXor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(572);
    weakLogicalAnd();
    setState(577);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(573);
        match(PHPParser::Xor);
        setState(574);
        weakLogicalAnd(); 
      }
      setState(579);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WeakLogicalAndContext ------------------------------------------------------------------

PHPParser::WeakLogicalAndContext::WeakLogicalAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::AssignmentContext *> PHPParser::WeakLogicalAndContext::assignment() {
  return getRuleContexts<PHPParser::AssignmentContext>();
}

PHPParser::AssignmentContext* PHPParser::WeakLogicalAndContext::assignment(size_t i) {
  return getRuleContext<PHPParser::AssignmentContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::WeakLogicalAndContext::And() {
  return getTokens(PHPParser::And);
}

tree::TerminalNode* PHPParser::WeakLogicalAndContext::And(size_t i) {
  return getToken(PHPParser::And, i);
}


size_t PHPParser::WeakLogicalAndContext::getRuleIndex() const {
  return PHPParser::RuleWeakLogicalAnd;
}

void PHPParser::WeakLogicalAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWeakLogicalAnd(this);
}

void PHPParser::WeakLogicalAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWeakLogicalAnd(this);
}


antlrcpp::Any PHPParser::WeakLogicalAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitWeakLogicalAnd(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::WeakLogicalAndContext* PHPParser::weakLogicalAnd() {
  WeakLogicalAndContext *_localctx = _tracker.createInstance<WeakLogicalAndContext>(_ctx, getState());
  enterRule(_localctx, 108, PHPParser::RuleWeakLogicalAnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(580);
    assignment();
    setState(585);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(581);
        match(PHPParser::And);
        setState(582);
        assignment(); 
      }
      setState(587);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

PHPParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::ListVariablesContext* PHPParser::AssignmentContext::listVariables() {
  return getRuleContext<PHPParser::ListVariablesContext>(0);
}

PHPParser::AssignmentContext* PHPParser::AssignmentContext::assignment() {
  return getRuleContext<PHPParser::AssignmentContext>(0);
}

tree::TerminalNode* PHPParser::AssignmentContext::Equals() {
  return getToken(PHPParser::Equals, 0);
}

tree::TerminalNode* PHPParser::AssignmentContext::AssignmentOperator() {
  return getToken(PHPParser::AssignmentOperator, 0);
}

PHPParser::TernaryContext* PHPParser::AssignmentContext::ternary() {
  return getRuleContext<PHPParser::TernaryContext>(0);
}


size_t PHPParser::AssignmentContext::getRuleIndex() const {
  return PHPParser::RuleAssignment;
}

void PHPParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void PHPParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


antlrcpp::Any PHPParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::AssignmentContext* PHPParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 110, PHPParser::RuleAssignment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(593);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(588);
      listVariables();

      setState(589);
      _la = _input->LA(1);
      if (!(_la == PHPParser::Equals

      || _la == PHPParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(590);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(592);
      ternary();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListVariablesContext ------------------------------------------------------------------

PHPParser::ListVariablesContext::ListVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ListVariablesContext::List() {
  return getToken(PHPParser::List, 0);
}

tree::TerminalNode* PHPParser::ListVariablesContext::OpenRoundBracket() {
  return getToken(PHPParser::OpenRoundBracket, 0);
}

std::vector<PHPParser::NameContext *> PHPParser::ListVariablesContext::name() {
  return getRuleContexts<PHPParser::NameContext>();
}

PHPParser::NameContext* PHPParser::ListVariablesContext::name(size_t i) {
  return getRuleContext<PHPParser::NameContext>(i);
}

tree::TerminalNode* PHPParser::ListVariablesContext::CloseRoundBracket() {
  return getToken(PHPParser::CloseRoundBracket, 0);
}


size_t PHPParser::ListVariablesContext::getRuleIndex() const {
  return PHPParser::RuleListVariables;
}

void PHPParser::ListVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListVariables(this);
}

void PHPParser::ListVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListVariables(this);
}


antlrcpp::Any PHPParser::ListVariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitListVariables(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ListVariablesContext* PHPParser::listVariables() {
  ListVariablesContext *_localctx = _tracker.createInstance<ListVariablesContext>(_ctx, getState());
  enterRule(_localctx, 112, PHPParser::RuleListVariables);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(608);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PHPParser::List: {
        enterOuterAlt(_localctx, 1);
        setState(595);
        match(PHPParser::List);
        setState(596);
        match(PHPParser::OpenRoundBracket);
        setState(597);
        name();
        setState(602);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PHPParser::Comma) {
          setState(598);
          match(PHPParser::Comma);
          setState(599);
          name();
          setState(604);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(605);
        match(PHPParser::CloseRoundBracket);
        break;
      }

      case PHPParser::Dollar:
      case PHPParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(607);
        name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TernaryContext ------------------------------------------------------------------

PHPParser::TernaryContext::TernaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::LogicalOrContext* PHPParser::TernaryContext::logicalOr() {
  return getRuleContext<PHPParser::LogicalOrContext>(0);
}

tree::TerminalNode* PHPParser::TernaryContext::QuestionMark() {
  return getToken(PHPParser::QuestionMark, 0);
}

std::vector<PHPParser::ExpressionContext *> PHPParser::TernaryContext::expression() {
  return getRuleContexts<PHPParser::ExpressionContext>();
}

PHPParser::ExpressionContext* PHPParser::TernaryContext::expression(size_t i) {
  return getRuleContext<PHPParser::ExpressionContext>(i);
}

tree::TerminalNode* PHPParser::TernaryContext::Colon() {
  return getToken(PHPParser::Colon, 0);
}


size_t PHPParser::TernaryContext::getRuleIndex() const {
  return PHPParser::RuleTernary;
}

void PHPParser::TernaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTernary(this);
}

void PHPParser::TernaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTernary(this);
}


antlrcpp::Any PHPParser::TernaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitTernary(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::TernaryContext* PHPParser::ternary() {
  TernaryContext *_localctx = _tracker.createInstance<TernaryContext>(_ctx, getState());
  enterRule(_localctx, 114, PHPParser::RuleTernary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(617);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(610);
      logicalOr();
      setState(611);
      match(PHPParser::QuestionMark);
      setState(612);
      expression();
      setState(613);
      match(PHPParser::Colon);
      setState(614);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(616);
      logicalOr();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrContext ------------------------------------------------------------------

PHPParser::LogicalOrContext::LogicalOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::LogicalAndContext *> PHPParser::LogicalOrContext::logicalAnd() {
  return getRuleContexts<PHPParser::LogicalAndContext>();
}

PHPParser::LogicalAndContext* PHPParser::LogicalOrContext::logicalAnd(size_t i) {
  return getRuleContext<PHPParser::LogicalAndContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::LogicalOrContext::LogicalOr() {
  return getTokens(PHPParser::LogicalOr);
}

tree::TerminalNode* PHPParser::LogicalOrContext::LogicalOr(size_t i) {
  return getToken(PHPParser::LogicalOr, i);
}


size_t PHPParser::LogicalOrContext::getRuleIndex() const {
  return PHPParser::RuleLogicalOr;
}

void PHPParser::LogicalOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOr(this);
}

void PHPParser::LogicalOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOr(this);
}


antlrcpp::Any PHPParser::LogicalOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitLogicalOr(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::LogicalOrContext* PHPParser::logicalOr() {
  LogicalOrContext *_localctx = _tracker.createInstance<LogicalOrContext>(_ctx, getState());
  enterRule(_localctx, 116, PHPParser::RuleLogicalOr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(619);
    logicalAnd();
    setState(624);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(620);
        match(PHPParser::LogicalOr);
        setState(621);
        logicalAnd(); 
      }
      setState(626);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndContext ------------------------------------------------------------------

PHPParser::LogicalAndContext::LogicalAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::BitwiseOrContext *> PHPParser::LogicalAndContext::bitwiseOr() {
  return getRuleContexts<PHPParser::BitwiseOrContext>();
}

PHPParser::BitwiseOrContext* PHPParser::LogicalAndContext::bitwiseOr(size_t i) {
  return getRuleContext<PHPParser::BitwiseOrContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::LogicalAndContext::LogicalAnd() {
  return getTokens(PHPParser::LogicalAnd);
}

tree::TerminalNode* PHPParser::LogicalAndContext::LogicalAnd(size_t i) {
  return getToken(PHPParser::LogicalAnd, i);
}


size_t PHPParser::LogicalAndContext::getRuleIndex() const {
  return PHPParser::RuleLogicalAnd;
}

void PHPParser::LogicalAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAnd(this);
}

void PHPParser::LogicalAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAnd(this);
}


antlrcpp::Any PHPParser::LogicalAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitLogicalAnd(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::LogicalAndContext* PHPParser::logicalAnd() {
  LogicalAndContext *_localctx = _tracker.createInstance<LogicalAndContext>(_ctx, getState());
  enterRule(_localctx, 118, PHPParser::RuleLogicalAnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(627);
    bitwiseOr();
    setState(632);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(628);
        match(PHPParser::LogicalAnd);
        setState(629);
        bitwiseOr(); 
      }
      setState(634);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitwiseOrContext ------------------------------------------------------------------

PHPParser::BitwiseOrContext::BitwiseOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::BitWiseAndContext *> PHPParser::BitwiseOrContext::bitWiseAnd() {
  return getRuleContexts<PHPParser::BitWiseAndContext>();
}

PHPParser::BitWiseAndContext* PHPParser::BitwiseOrContext::bitWiseAnd(size_t i) {
  return getRuleContext<PHPParser::BitWiseAndContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::BitwiseOrContext::Pipe() {
  return getTokens(PHPParser::Pipe);
}

tree::TerminalNode* PHPParser::BitwiseOrContext::Pipe(size_t i) {
  return getToken(PHPParser::Pipe, i);
}


size_t PHPParser::BitwiseOrContext::getRuleIndex() const {
  return PHPParser::RuleBitwiseOr;
}

void PHPParser::BitwiseOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitwiseOr(this);
}

void PHPParser::BitwiseOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitwiseOr(this);
}


antlrcpp::Any PHPParser::BitwiseOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitBitwiseOr(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::BitwiseOrContext* PHPParser::bitwiseOr() {
  BitwiseOrContext *_localctx = _tracker.createInstance<BitwiseOrContext>(_ctx, getState());
  enterRule(_localctx, 120, PHPParser::RuleBitwiseOr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(635);
    bitWiseAnd();
    setState(640);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(636);
        match(PHPParser::Pipe);
        setState(637);
        bitWiseAnd(); 
      }
      setState(642);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitWiseAndContext ------------------------------------------------------------------

PHPParser::BitWiseAndContext::BitWiseAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::EqualityCheckContext *> PHPParser::BitWiseAndContext::equalityCheck() {
  return getRuleContexts<PHPParser::EqualityCheckContext>();
}

PHPParser::EqualityCheckContext* PHPParser::BitWiseAndContext::equalityCheck(size_t i) {
  return getRuleContext<PHPParser::EqualityCheckContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::BitWiseAndContext::Ampersand() {
  return getTokens(PHPParser::Ampersand);
}

tree::TerminalNode* PHPParser::BitWiseAndContext::Ampersand(size_t i) {
  return getToken(PHPParser::Ampersand, i);
}


size_t PHPParser::BitWiseAndContext::getRuleIndex() const {
  return PHPParser::RuleBitWiseAnd;
}

void PHPParser::BitWiseAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitWiseAnd(this);
}

void PHPParser::BitWiseAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitWiseAnd(this);
}


antlrcpp::Any PHPParser::BitWiseAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitBitWiseAnd(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::BitWiseAndContext* PHPParser::bitWiseAnd() {
  BitWiseAndContext *_localctx = _tracker.createInstance<BitWiseAndContext>(_ctx, getState());
  enterRule(_localctx, 122, PHPParser::RuleBitWiseAnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(643);
    equalityCheck();
    setState(648);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(644);
        match(PHPParser::Ampersand);
        setState(645);
        equalityCheck(); 
      }
      setState(650);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityCheckContext ------------------------------------------------------------------

PHPParser::EqualityCheckContext::EqualityCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::ComparisionCheckContext *> PHPParser::EqualityCheckContext::comparisionCheck() {
  return getRuleContexts<PHPParser::ComparisionCheckContext>();
}

PHPParser::ComparisionCheckContext* PHPParser::EqualityCheckContext::comparisionCheck(size_t i) {
  return getRuleContext<PHPParser::ComparisionCheckContext>(i);
}

tree::TerminalNode* PHPParser::EqualityCheckContext::EqualityOperator() {
  return getToken(PHPParser::EqualityOperator, 0);
}


size_t PHPParser::EqualityCheckContext::getRuleIndex() const {
  return PHPParser::RuleEqualityCheck;
}

void PHPParser::EqualityCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityCheck(this);
}

void PHPParser::EqualityCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityCheck(this);
}


antlrcpp::Any PHPParser::EqualityCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitEqualityCheck(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::EqualityCheckContext* PHPParser::equalityCheck() {
  EqualityCheckContext *_localctx = _tracker.createInstance<EqualityCheckContext>(_ctx, getState());
  enterRule(_localctx, 124, PHPParser::RuleEqualityCheck);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(651);
    comparisionCheck();
    setState(654);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      setState(652);
      match(PHPParser::EqualityOperator);
      setState(653);
      comparisionCheck();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisionCheckContext ------------------------------------------------------------------

PHPParser::ComparisionCheckContext::ComparisionCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::BitWiseShiftContext *> PHPParser::ComparisionCheckContext::bitWiseShift() {
  return getRuleContexts<PHPParser::BitWiseShiftContext>();
}

PHPParser::BitWiseShiftContext* PHPParser::ComparisionCheckContext::bitWiseShift(size_t i) {
  return getRuleContext<PHPParser::BitWiseShiftContext>(i);
}

tree::TerminalNode* PHPParser::ComparisionCheckContext::ComparisionOperator() {
  return getToken(PHPParser::ComparisionOperator, 0);
}


size_t PHPParser::ComparisionCheckContext::getRuleIndex() const {
  return PHPParser::RuleComparisionCheck;
}

void PHPParser::ComparisionCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisionCheck(this);
}

void PHPParser::ComparisionCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisionCheck(this);
}


antlrcpp::Any PHPParser::ComparisionCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitComparisionCheck(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ComparisionCheckContext* PHPParser::comparisionCheck() {
  ComparisionCheckContext *_localctx = _tracker.createInstance<ComparisionCheckContext>(_ctx, getState());
  enterRule(_localctx, 126, PHPParser::RuleComparisionCheck);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(656);
    bitWiseShift();
    setState(659);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(657);
      match(PHPParser::ComparisionOperator);
      setState(658);
      bitWiseShift();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitWiseShiftContext ------------------------------------------------------------------

PHPParser::BitWiseShiftContext::BitWiseShiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::AdditionContext *> PHPParser::BitWiseShiftContext::addition() {
  return getRuleContexts<PHPParser::AdditionContext>();
}

PHPParser::AdditionContext* PHPParser::BitWiseShiftContext::addition(size_t i) {
  return getRuleContext<PHPParser::AdditionContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::BitWiseShiftContext::ShiftOperator() {
  return getTokens(PHPParser::ShiftOperator);
}

tree::TerminalNode* PHPParser::BitWiseShiftContext::ShiftOperator(size_t i) {
  return getToken(PHPParser::ShiftOperator, i);
}


size_t PHPParser::BitWiseShiftContext::getRuleIndex() const {
  return PHPParser::RuleBitWiseShift;
}

void PHPParser::BitWiseShiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitWiseShift(this);
}

void PHPParser::BitWiseShiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitWiseShift(this);
}


antlrcpp::Any PHPParser::BitWiseShiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitBitWiseShift(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::BitWiseShiftContext* PHPParser::bitWiseShift() {
  BitWiseShiftContext *_localctx = _tracker.createInstance<BitWiseShiftContext>(_ctx, getState());
  enterRule(_localctx, 128, PHPParser::RuleBitWiseShift);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(661);
    addition();
    setState(666);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(662);
        match(PHPParser::ShiftOperator);
        setState(663);
        addition(); 
      }
      setState(668);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditionContext ------------------------------------------------------------------

PHPParser::AdditionContext::AdditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::MultiplicationContext *> PHPParser::AdditionContext::multiplication() {
  return getRuleContexts<PHPParser::MultiplicationContext>();
}

PHPParser::MultiplicationContext* PHPParser::AdditionContext::multiplication(size_t i) {
  return getRuleContext<PHPParser::MultiplicationContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::AdditionContext::Plus() {
  return getTokens(PHPParser::Plus);
}

tree::TerminalNode* PHPParser::AdditionContext::Plus(size_t i) {
  return getToken(PHPParser::Plus, i);
}

std::vector<tree::TerminalNode *> PHPParser::AdditionContext::Minus() {
  return getTokens(PHPParser::Minus);
}

tree::TerminalNode* PHPParser::AdditionContext::Minus(size_t i) {
  return getToken(PHPParser::Minus, i);
}

std::vector<tree::TerminalNode *> PHPParser::AdditionContext::Dot() {
  return getTokens(PHPParser::Dot);
}

tree::TerminalNode* PHPParser::AdditionContext::Dot(size_t i) {
  return getToken(PHPParser::Dot, i);
}


size_t PHPParser::AdditionContext::getRuleIndex() const {
  return PHPParser::RuleAddition;
}

void PHPParser::AdditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddition(this);
}

void PHPParser::AdditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddition(this);
}


antlrcpp::Any PHPParser::AdditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitAddition(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::AdditionContext* PHPParser::addition() {
  AdditionContext *_localctx = _tracker.createInstance<AdditionContext>(_ctx, getState());
  enterRule(_localctx, 130, PHPParser::RuleAddition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(669);
    multiplication();
    setState(674);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(670);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << PHPParser::Plus)
          | (1ULL << PHPParser::Minus)
          | (1ULL << PHPParser::Dot))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(671);
        multiplication(); 
      }
      setState(676);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicationContext ------------------------------------------------------------------

PHPParser::MultiplicationContext::MultiplicationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::LogicalNotContext *> PHPParser::MultiplicationContext::logicalNot() {
  return getRuleContexts<PHPParser::LogicalNotContext>();
}

PHPParser::LogicalNotContext* PHPParser::MultiplicationContext::logicalNot(size_t i) {
  return getRuleContext<PHPParser::LogicalNotContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::MultiplicationContext::Asterisk() {
  return getTokens(PHPParser::Asterisk);
}

tree::TerminalNode* PHPParser::MultiplicationContext::Asterisk(size_t i) {
  return getToken(PHPParser::Asterisk, i);
}

std::vector<tree::TerminalNode *> PHPParser::MultiplicationContext::Forwardslash() {
  return getTokens(PHPParser::Forwardslash);
}

tree::TerminalNode* PHPParser::MultiplicationContext::Forwardslash(size_t i) {
  return getToken(PHPParser::Forwardslash, i);
}

std::vector<tree::TerminalNode *> PHPParser::MultiplicationContext::Percent() {
  return getTokens(PHPParser::Percent);
}

tree::TerminalNode* PHPParser::MultiplicationContext::Percent(size_t i) {
  return getToken(PHPParser::Percent, i);
}


size_t PHPParser::MultiplicationContext::getRuleIndex() const {
  return PHPParser::RuleMultiplication;
}

void PHPParser::MultiplicationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplication(this);
}

void PHPParser::MultiplicationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplication(this);
}


antlrcpp::Any PHPParser::MultiplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitMultiplication(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::MultiplicationContext* PHPParser::multiplication() {
  MultiplicationContext *_localctx = _tracker.createInstance<MultiplicationContext>(_ctx, getState());
  enterRule(_localctx, 132, PHPParser::RuleMultiplication);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(677);
    logicalNot();
    setState(682);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(678);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << PHPParser::Asterisk)
          | (1ULL << PHPParser::Percent)
          | (1ULL << PHPParser::Forwardslash))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(679);
        logicalNot(); 
      }
      setState(684);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalNotContext ------------------------------------------------------------------

PHPParser::LogicalNotContext::LogicalNotContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::LogicalNotContext::Bang() {
  return getToken(PHPParser::Bang, 0);
}

PHPParser::LogicalNotContext* PHPParser::LogicalNotContext::logicalNot() {
  return getRuleContext<PHPParser::LogicalNotContext>(0);
}

PHPParser::InstanceOfContext* PHPParser::LogicalNotContext::instanceOf() {
  return getRuleContext<PHPParser::InstanceOfContext>(0);
}


size_t PHPParser::LogicalNotContext::getRuleIndex() const {
  return PHPParser::RuleLogicalNot;
}

void PHPParser::LogicalNotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalNot(this);
}

void PHPParser::LogicalNotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalNot(this);
}


antlrcpp::Any PHPParser::LogicalNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitLogicalNot(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::LogicalNotContext* PHPParser::logicalNot() {
  LogicalNotContext *_localctx = _tracker.createInstance<LogicalNotContext>(_ctx, getState());
  enterRule(_localctx, 134, PHPParser::RuleLogicalNot);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(688);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PHPParser::Bang: {
        enterOuterAlt(_localctx, 1);
        setState(685);
        match(PHPParser::Bang);
        setState(686);
        logicalNot();
        break;
      }

      case PHPParser::New:
      case PHPParser::Clone:
      case PHPParser::Ampersand:
      case PHPParser::Minus:
      case PHPParser::Tilde:
      case PHPParser::SuppressWarnings:
      case PHPParser::Dollar:
      case PHPParser::OpenRoundBracket:
      case PHPParser::Array:
      case PHPParser::DecimalNumber:
      case PHPParser::HexNumber:
      case PHPParser::OctalNumber:
      case PHPParser::Float:
      case PHPParser::Boolean:
      case PHPParser::SingleQuotedString:
      case PHPParser::DoubleQuotedString:
      case PHPParser::Identifier:
      case PHPParser::IncrementOperator: {
        enterOuterAlt(_localctx, 2);
        setState(687);
        instanceOf();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstanceOfContext ------------------------------------------------------------------

PHPParser::InstanceOfContext::InstanceOfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::NegateOrCastContext *> PHPParser::InstanceOfContext::negateOrCast() {
  return getRuleContexts<PHPParser::NegateOrCastContext>();
}

PHPParser::NegateOrCastContext* PHPParser::InstanceOfContext::negateOrCast(size_t i) {
  return getRuleContext<PHPParser::NegateOrCastContext>(i);
}

tree::TerminalNode* PHPParser::InstanceOfContext::Instanceof() {
  return getToken(PHPParser::Instanceof, 0);
}


size_t PHPParser::InstanceOfContext::getRuleIndex() const {
  return PHPParser::RuleInstanceOf;
}

void PHPParser::InstanceOfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstanceOf(this);
}

void PHPParser::InstanceOfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstanceOf(this);
}


antlrcpp::Any PHPParser::InstanceOfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitInstanceOf(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::InstanceOfContext* PHPParser::instanceOf() {
  InstanceOfContext *_localctx = _tracker.createInstance<InstanceOfContext>(_ctx, getState());
  enterRule(_localctx, 136, PHPParser::RuleInstanceOf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(690);
    negateOrCast();
    setState(693);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      setState(691);
      match(PHPParser::Instanceof);
      setState(692);
      negateOrCast();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NegateOrCastContext ------------------------------------------------------------------

PHPParser::NegateOrCastContext::NegateOrCastContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::IncrementContext* PHPParser::NegateOrCastContext::increment() {
  return getRuleContext<PHPParser::IncrementContext>(0);
}

tree::TerminalNode* PHPParser::NegateOrCastContext::Tilde() {
  return getToken(PHPParser::Tilde, 0);
}

tree::TerminalNode* PHPParser::NegateOrCastContext::Minus() {
  return getToken(PHPParser::Minus, 0);
}

tree::TerminalNode* PHPParser::NegateOrCastContext::SuppressWarnings() {
  return getToken(PHPParser::SuppressWarnings, 0);
}

tree::TerminalNode* PHPParser::NegateOrCastContext::OpenRoundBracket() {
  return getToken(PHPParser::OpenRoundBracket, 0);
}

tree::TerminalNode* PHPParser::NegateOrCastContext::PrimitiveType() {
  return getToken(PHPParser::PrimitiveType, 0);
}

tree::TerminalNode* PHPParser::NegateOrCastContext::CloseRoundBracket() {
  return getToken(PHPParser::CloseRoundBracket, 0);
}

PHPParser::WeakLogicalAndContext* PHPParser::NegateOrCastContext::weakLogicalAnd() {
  return getRuleContext<PHPParser::WeakLogicalAndContext>(0);
}


size_t PHPParser::NegateOrCastContext::getRuleIndex() const {
  return PHPParser::RuleNegateOrCast;
}

void PHPParser::NegateOrCastContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegateOrCast(this);
}

void PHPParser::NegateOrCastContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegateOrCast(this);
}


antlrcpp::Any PHPParser::NegateOrCastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitNegateOrCast(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::NegateOrCastContext* PHPParser::negateOrCast() {
  NegateOrCastContext *_localctx = _tracker.createInstance<NegateOrCastContext>(_ctx, getState());
  enterRule(_localctx, 138, PHPParser::RuleNegateOrCast);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(706);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(695);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PHPParser::Minus)
        | (1ULL << PHPParser::Tilde)
        | (1ULL << PHPParser::SuppressWarnings))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(696);
      increment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(697);
      match(PHPParser::OpenRoundBracket);
      setState(698);
      match(PHPParser::PrimitiveType);
      setState(699);
      match(PHPParser::CloseRoundBracket);
      setState(700);
      increment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(701);
      match(PHPParser::OpenRoundBracket);
      setState(702);
      weakLogicalAnd();
      setState(703);
      match(PHPParser::CloseRoundBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(705);
      increment();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementContext ------------------------------------------------------------------

PHPParser::IncrementContext::IncrementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::IncrementContext::IncrementOperator() {
  return getToken(PHPParser::IncrementOperator, 0);
}

PHPParser::NameContext* PHPParser::IncrementContext::name() {
  return getRuleContext<PHPParser::NameContext>(0);
}

PHPParser::NewOrCloneContext* PHPParser::IncrementContext::newOrClone() {
  return getRuleContext<PHPParser::NewOrCloneContext>(0);
}


size_t PHPParser::IncrementContext::getRuleIndex() const {
  return PHPParser::RuleIncrement;
}

void PHPParser::IncrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrement(this);
}

void PHPParser::IncrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrement(this);
}


antlrcpp::Any PHPParser::IncrementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitIncrement(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::IncrementContext* PHPParser::increment() {
  IncrementContext *_localctx = _tracker.createInstance<IncrementContext>(_ctx, getState());
  enterRule(_localctx, 140, PHPParser::RuleIncrement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(714);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(708);
      match(PHPParser::IncrementOperator);
      setState(709);
      name();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(710);
      name();
      setState(711);
      match(PHPParser::IncrementOperator);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(713);
      newOrClone();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewOrCloneContext ------------------------------------------------------------------

PHPParser::NewOrCloneContext::NewOrCloneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::NewOrCloneContext::New() {
  return getToken(PHPParser::New, 0);
}

PHPParser::NameContext* PHPParser::NewOrCloneContext::name() {
  return getRuleContext<PHPParser::NameContext>(0);
}

tree::TerminalNode* PHPParser::NewOrCloneContext::Clone() {
  return getToken(PHPParser::Clone, 0);
}

PHPParser::AtomOrReferenceContext* PHPParser::NewOrCloneContext::atomOrReference() {
  return getRuleContext<PHPParser::AtomOrReferenceContext>(0);
}


size_t PHPParser::NewOrCloneContext::getRuleIndex() const {
  return PHPParser::RuleNewOrClone;
}

void PHPParser::NewOrCloneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewOrClone(this);
}

void PHPParser::NewOrCloneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewOrClone(this);
}


antlrcpp::Any PHPParser::NewOrCloneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitNewOrClone(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::NewOrCloneContext* PHPParser::newOrClone() {
  NewOrCloneContext *_localctx = _tracker.createInstance<NewOrCloneContext>(_ctx, getState());
  enterRule(_localctx, 142, PHPParser::RuleNewOrClone);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(721);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PHPParser::New: {
        enterOuterAlt(_localctx, 1);
        setState(716);
        match(PHPParser::New);
        setState(717);
        name();
        break;
      }

      case PHPParser::Clone: {
        enterOuterAlt(_localctx, 2);
        setState(718);
        match(PHPParser::Clone);
        setState(719);
        name();
        break;
      }

      case PHPParser::Ampersand:
      case PHPParser::Dollar:
      case PHPParser::Array:
      case PHPParser::DecimalNumber:
      case PHPParser::HexNumber:
      case PHPParser::OctalNumber:
      case PHPParser::Float:
      case PHPParser::Boolean:
      case PHPParser::SingleQuotedString:
      case PHPParser::DoubleQuotedString:
      case PHPParser::Identifier: {
        enterOuterAlt(_localctx, 3);
        setState(720);
        atomOrReference();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomOrReferenceContext ------------------------------------------------------------------

PHPParser::AtomOrReferenceContext::AtomOrReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::AtomContext* PHPParser::AtomOrReferenceContext::atom() {
  return getRuleContext<PHPParser::AtomContext>(0);
}

PHPParser::ReferenceContext* PHPParser::AtomOrReferenceContext::reference() {
  return getRuleContext<PHPParser::ReferenceContext>(0);
}


size_t PHPParser::AtomOrReferenceContext::getRuleIndex() const {
  return PHPParser::RuleAtomOrReference;
}

void PHPParser::AtomOrReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomOrReference(this);
}

void PHPParser::AtomOrReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomOrReference(this);
}


antlrcpp::Any PHPParser::AtomOrReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitAtomOrReference(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::AtomOrReferenceContext* PHPParser::atomOrReference() {
  AtomOrReferenceContext *_localctx = _tracker.createInstance<AtomOrReferenceContext>(_ctx, getState());
  enterRule(_localctx, 144, PHPParser::RuleAtomOrReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(725);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(723);
      atom();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(724);
      reference();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDeclarationContext ------------------------------------------------------------------

PHPParser::ArrayDeclarationContext::ArrayDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ArrayDeclarationContext::Array() {
  return getToken(PHPParser::Array, 0);
}

tree::TerminalNode* PHPParser::ArrayDeclarationContext::OpenRoundBracket() {
  return getToken(PHPParser::OpenRoundBracket, 0);
}

tree::TerminalNode* PHPParser::ArrayDeclarationContext::CloseRoundBracket() {
  return getToken(PHPParser::CloseRoundBracket, 0);
}

std::vector<PHPParser::ArrayEntryContext *> PHPParser::ArrayDeclarationContext::arrayEntry() {
  return getRuleContexts<PHPParser::ArrayEntryContext>();
}

PHPParser::ArrayEntryContext* PHPParser::ArrayDeclarationContext::arrayEntry(size_t i) {
  return getRuleContext<PHPParser::ArrayEntryContext>(i);
}

std::vector<tree::TerminalNode *> PHPParser::ArrayDeclarationContext::Comma() {
  return getTokens(PHPParser::Comma);
}

tree::TerminalNode* PHPParser::ArrayDeclarationContext::Comma(size_t i) {
  return getToken(PHPParser::Comma, i);
}


size_t PHPParser::ArrayDeclarationContext::getRuleIndex() const {
  return PHPParser::RuleArrayDeclaration;
}

void PHPParser::ArrayDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayDeclaration(this);
}

void PHPParser::ArrayDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayDeclaration(this);
}


antlrcpp::Any PHPParser::ArrayDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitArrayDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ArrayDeclarationContext* PHPParser::arrayDeclaration() {
  ArrayDeclarationContext *_localctx = _tracker.createInstance<ArrayDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 146, PHPParser::RuleArrayDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(727);
    match(PHPParser::Array);
    setState(728);
    match(PHPParser::OpenRoundBracket);
    setState(737);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PHPParser::List)
      | (1ULL << PHPParser::New)
      | (1ULL << PHPParser::Clone)
      | (1ULL << PHPParser::Ampersand)
      | (1ULL << PHPParser::Bang)
      | (1ULL << PHPParser::Minus)
      | (1ULL << PHPParser::Tilde)
      | (1ULL << PHPParser::SuppressWarnings)
      | (1ULL << PHPParser::Dollar)
      | (1ULL << PHPParser::OpenRoundBracket))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (PHPParser::Array - 69))
      | (1ULL << (PHPParser::DecimalNumber - 69))
      | (1ULL << (PHPParser::HexNumber - 69))
      | (1ULL << (PHPParser::OctalNumber - 69))
      | (1ULL << (PHPParser::Float - 69))
      | (1ULL << (PHPParser::Boolean - 69))
      | (1ULL << (PHPParser::SingleQuotedString - 69))
      | (1ULL << (PHPParser::DoubleQuotedString - 69))
      | (1ULL << (PHPParser::Identifier - 69))
      | (1ULL << (PHPParser::IncrementOperator - 69)))) != 0)) {
      setState(729);
      arrayEntry();
      setState(734);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PHPParser::Comma) {
        setState(730);
        match(PHPParser::Comma);
        setState(731);
        arrayEntry();
        setState(736);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(739);
    match(PHPParser::CloseRoundBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayEntryContext ------------------------------------------------------------------

PHPParser::ArrayEntryContext::ArrayEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::KeyValuePairContext* PHPParser::ArrayEntryContext::keyValuePair() {
  return getRuleContext<PHPParser::KeyValuePairContext>(0);
}

PHPParser::ExpressionContext* PHPParser::ArrayEntryContext::expression() {
  return getRuleContext<PHPParser::ExpressionContext>(0);
}


size_t PHPParser::ArrayEntryContext::getRuleIndex() const {
  return PHPParser::RuleArrayEntry;
}

void PHPParser::ArrayEntryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayEntry(this);
}

void PHPParser::ArrayEntryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayEntry(this);
}


antlrcpp::Any PHPParser::ArrayEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitArrayEntry(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ArrayEntryContext* PHPParser::arrayEntry() {
  ArrayEntryContext *_localctx = _tracker.createInstance<ArrayEntryContext>(_ctx, getState());
  enterRule(_localctx, 148, PHPParser::RuleArrayEntry);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(743);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      setState(741);
      keyValuePair();
      break;
    }

    case 2: {
      setState(742);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyValuePairContext ------------------------------------------------------------------

PHPParser::KeyValuePairContext::KeyValuePairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PHPParser::ExpressionContext *> PHPParser::KeyValuePairContext::expression() {
  return getRuleContexts<PHPParser::ExpressionContext>();
}

PHPParser::ExpressionContext* PHPParser::KeyValuePairContext::expression(size_t i) {
  return getRuleContext<PHPParser::ExpressionContext>(i);
}

tree::TerminalNode* PHPParser::KeyValuePairContext::ArrayAssign() {
  return getToken(PHPParser::ArrayAssign, 0);
}


size_t PHPParser::KeyValuePairContext::getRuleIndex() const {
  return PHPParser::RuleKeyValuePair;
}

void PHPParser::KeyValuePairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyValuePair(this);
}

void PHPParser::KeyValuePairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyValuePair(this);
}


antlrcpp::Any PHPParser::KeyValuePairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitKeyValuePair(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::KeyValuePairContext* PHPParser::keyValuePair() {
  KeyValuePairContext *_localctx = _tracker.createInstance<KeyValuePairContext>(_ctx, getState());
  enterRule(_localctx, 150, PHPParser::RuleKeyValuePair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(745);
    expression();
    setState(746);
    match(PHPParser::ArrayAssign);
    setState(747);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

PHPParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::NumberContext* PHPParser::AtomContext::number() {
  return getRuleContext<PHPParser::NumberContext>(0);
}

PHPParser::StringContext* PHPParser::AtomContext::string() {
  return getRuleContext<PHPParser::StringContext>(0);
}

tree::TerminalNode* PHPParser::AtomContext::Boolean() {
  return getToken(PHPParser::Boolean, 0);
}

PHPParser::ArrayDeclarationContext* PHPParser::AtomContext::arrayDeclaration() {
  return getRuleContext<PHPParser::ArrayDeclarationContext>(0);
}

PHPParser::FunctionInvocationContext* PHPParser::AtomContext::functionInvocation() {
  return getRuleContext<PHPParser::FunctionInvocationContext>(0);
}


size_t PHPParser::AtomContext::getRuleIndex() const {
  return PHPParser::RuleAtom;
}

void PHPParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void PHPParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


antlrcpp::Any PHPParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::AtomContext* PHPParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 152, PHPParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(754);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PHPParser::DecimalNumber:
      case PHPParser::HexNumber:
      case PHPParser::OctalNumber:
      case PHPParser::Float: {
        enterOuterAlt(_localctx, 1);
        setState(749);
        number();
        break;
      }

      case PHPParser::SingleQuotedString:
      case PHPParser::DoubleQuotedString: {
        enterOuterAlt(_localctx, 2);
        setState(750);
        string();
        break;
      }

      case PHPParser::Boolean: {
        enterOuterAlt(_localctx, 3);
        setState(751);
        match(PHPParser::Boolean);
        break;
      }

      case PHPParser::Array: {
        enterOuterAlt(_localctx, 4);
        setState(752);
        arrayDeclaration();
        break;
      }

      case PHPParser::Identifier: {
        enterOuterAlt(_localctx, 5);
        setState(753);
        functionInvocation();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferenceContext ------------------------------------------------------------------

PHPParser::ReferenceContext::ReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::ReferenceContext::Ampersand() {
  return getToken(PHPParser::Ampersand, 0);
}

PHPParser::NameContext* PHPParser::ReferenceContext::name() {
  return getRuleContext<PHPParser::NameContext>(0);
}


size_t PHPParser::ReferenceContext::getRuleIndex() const {
  return PHPParser::RuleReference;
}

void PHPParser::ReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReference(this);
}

void PHPParser::ReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReference(this);
}


antlrcpp::Any PHPParser::ReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitReference(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::ReferenceContext* PHPParser::reference() {
  ReferenceContext *_localctx = _tracker.createInstance<ReferenceContext>(_ctx, getState());
  enterRule(_localctx, 154, PHPParser::RuleReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(759);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PHPParser::Ampersand: {
        enterOuterAlt(_localctx, 1);
        setState(756);
        match(PHPParser::Ampersand);
        setState(757);
        name();
        break;
      }

      case PHPParser::Dollar:
      case PHPParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(758);
        name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

PHPParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PHPParser::IntegerContext* PHPParser::NumberContext::integer() {
  return getRuleContext<PHPParser::IntegerContext>(0);
}

PHPParser::RealContext* PHPParser::NumberContext::real() {
  return getRuleContext<PHPParser::RealContext>(0);
}


size_t PHPParser::NumberContext::getRuleIndex() const {
  return PHPParser::RuleNumber;
}

void PHPParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void PHPParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


antlrcpp::Any PHPParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::NumberContext* PHPParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 156, PHPParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(763);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PHPParser::DecimalNumber:
      case PHPParser::HexNumber:
      case PHPParser::OctalNumber: {
        enterOuterAlt(_localctx, 1);
        setState(761);
        integer();
        break;
      }

      case PHPParser::Float: {
        enterOuterAlt(_localctx, 2);
        setState(762);
        real();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerContext ------------------------------------------------------------------

PHPParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::IntegerContext::DecimalNumber() {
  return getToken(PHPParser::DecimalNumber, 0);
}

tree::TerminalNode* PHPParser::IntegerContext::HexNumber() {
  return getToken(PHPParser::HexNumber, 0);
}

tree::TerminalNode* PHPParser::IntegerContext::OctalNumber() {
  return getToken(PHPParser::OctalNumber, 0);
}


size_t PHPParser::IntegerContext::getRuleIndex() const {
  return PHPParser::RuleInteger;
}

void PHPParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}

void PHPParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}


antlrcpp::Any PHPParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::IntegerContext* PHPParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 158, PHPParser::RuleInteger);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(765);
    _la = _input->LA(1);
    if (!(((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & ((1ULL << (PHPParser::DecimalNumber - 73))
      | (1ULL << (PHPParser::HexNumber - 73))
      | (1ULL << (PHPParser::OctalNumber - 73)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealContext ------------------------------------------------------------------

PHPParser::RealContext::RealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PHPParser::RealContext::Float() {
  return getTokens(PHPParser::Float);
}

tree::TerminalNode* PHPParser::RealContext::Float(size_t i) {
  return getToken(PHPParser::Float, i);
}

std::vector<tree::TerminalNode *> PHPParser::RealContext::RealE() {
  return getTokens(PHPParser::RealE);
}

tree::TerminalNode* PHPParser::RealContext::RealE(size_t i) {
  return getToken(PHPParser::RealE, i);
}

std::vector<tree::TerminalNode *> PHPParser::RealContext::DecimalNumber() {
  return getTokens(PHPParser::DecimalNumber);
}

tree::TerminalNode* PHPParser::RealContext::DecimalNumber(size_t i) {
  return getToken(PHPParser::DecimalNumber, i);
}


size_t PHPParser::RealContext::getRuleIndex() const {
  return PHPParser::RuleReal;
}

void PHPParser::RealContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReal(this);
}

void PHPParser::RealContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReal(this);
}


antlrcpp::Any PHPParser::RealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitReal(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::RealContext* PHPParser::real() {
  RealContext *_localctx = _tracker.createInstance<RealContext>(_ctx, getState());
  enterRule(_localctx, 160, PHPParser::RuleReal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(767);
    match(PHPParser::Float);
    setState(772);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PHPParser::RealE) {
      setState(768);
      match(PHPParser::RealE);
      setState(769);
      _la = _input->LA(1);
      if (!(_la == PHPParser::DecimalNumber

      || _la == PHPParser::Float)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(774);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

PHPParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PHPParser::StringContext::SingleQuotedString() {
  return getToken(PHPParser::SingleQuotedString, 0);
}

tree::TerminalNode* PHPParser::StringContext::DoubleQuotedString() {
  return getToken(PHPParser::DoubleQuotedString, 0);
}


size_t PHPParser::StringContext::getRuleIndex() const {
  return PHPParser::RuleString;
}

void PHPParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void PHPParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PHPParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


antlrcpp::Any PHPParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PHPParserVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

PHPParser::StringContext* PHPParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 162, PHPParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(775);
    _la = _input->LA(1);
    if (!(_la == PHPParser::SingleQuotedString

    || _la == PHPParser::DoubleQuotedString)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> PHPParser::_decisionToDFA;
atn::PredictionContextCache PHPParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PHPParser::_atn;
std::vector<uint16_t> PHPParser::_serializedATN;

std::vector<std::string> PHPParser::_ruleNames = {
  "prog", "htmlblock", "html", "phpBlock", "prolog", "epilog", "statement", 
  "complexStatement", "forstatement", "ifstatement", "foreachstatement", 
  "whilestatement", "dostatement", "switchstatement", "simpleStatement", 
  "globalStatement", "staticVariableAssignmentStatement", "breakStatement", 
  "continueStatement", "returnStatement", "requireStatement", "cases", "casestatement", 
  "defaultcase", "variable", "variablename", "name", "staticMemberAccess", 
  "memberAccess", "bracketedBlock", "interfaceDefinition", "interfaceName", 
  "interfaceExtends", "interfaceMember", "className", "classDefinition", 
  "classImplements", "classMember", "classModifier", "constDefinition", 
  "fieldDefinition", "fieldModifier", "fieldName", "functionDefinition", 
  "parametersDefinition", "functionInvocation", "functionName", "functionInvocationParameters", 
  "paramDef", "paramName", "commaList", "expression", "weakLogicalOr", "weakLogicalXor", 
  "weakLogicalAnd", "assignment", "listVariables", "ternary", "logicalOr", 
  "logicalAnd", "bitwiseOr", "bitWiseAnd", "equalityCheck", "comparisionCheck", 
  "bitWiseShift", "addition", "multiplication", "logicalNot", "instanceOf", 
  "negateOrCast", "increment", "newOrClone", "atomOrReference", "arrayDeclaration", 
  "arrayEntry", "keyValuePair", "atom", "reference", "number", "integer", 
  "real", "string"
};

std::vector<std::string> PHPParser::_literalNames = {
  "", "", "'<'", "", "", "'?>'", "", "", "", "", "'as'", "';'", "'instanceof'", 
  "'and'", "'list'", "'const'", "'or'", "'xor'", "'global'", "'continue'", 
  "'return'", "'implements'", "'var'", "'class'", "'extends'", "'do'", "'switch'", 
  "'case'", "'default'", "'function'", "'break'", "'if'", "'else'", "'elseif'", 
  "'for'", "'foreach'", "'while'", "'='", "'new'", "'clone'", "'&'", "'|'", 
  "'!'", "'+'", "'-'", "'*'", "'%'", "'/'", "'~'", "'->'", "'@'", "'$'", 
  "'.'", "'=>'", "'||'", "'&&'", "'::'", "'?'", "'('", "')'", "'['", "']'", 
  "'{'", "'}'", "'Interface'", "','", "':'", "'abstract'", "'static'"
};

std::vector<std::string> PHPParser::_symbolicNames = {
  "", "PHPStart", "PHPO", "Html", "HtmlWS", "PHPEnd", "MultiLineComment", 
  "SinglelineComment", "UnixComment", "RealE", "As", "SemiColon", "Instanceof", 
  "And", "List", "Const", "Or", "Xor", "Global", "Continue", "Return", "Implements", 
  "Var", "Class", "Extends", "Do", "Switch", "Case", "Default", "Function", 
  "Break", "If", "Else", "ElseIf", "For", "Foreach", "While", "Equals", 
  "New", "Clone", "Ampersand", "Pipe", "Bang", "Plus", "Minus", "Asterisk", 
  "Percent", "Forwardslash", "Tilde", "InstanceMember", "SuppressWarnings", 
  "Dollar", "Dot", "ArrayAssign", "LogicalOr", "LogicalAnd", "ClassMember", 
  "QuestionMark", "OpenRoundBracket", "CloseRoundBracket", "OpenSquareBracket", 
  "CloseSquareBracket", "OpenCurlyBracket", "CloseCurlyBracket", "Interface", 
  "Comma", "Colon", "Abstract", "Static", "Array", "RequireOperator", "PrimitiveType", 
  "AccessModifier", "DecimalNumber", "HexNumber", "OctalNumber", "Float", 
  "Digits", "Boolean", "SingleQuotedString", "EscapeCharacter", "DoubleQuotedString", 
  "Identifier", "AssignmentOperator", "EqualityOperator", "ComparisionOperator", 
  "ShiftOperator", "IncrementOperator", "WS"
};

dfa::Vocabulary PHPParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PHPParser::_tokenNames;

PHPParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x5a, 0x30c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xa9, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0xac, 0xb, 0x2, 0x3, 0x3, 0x5, 0x3, 0xaf, 0xa, 0x3, 0x3, 
    0x3, 0x6, 0x3, 0xb2, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0xb3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xba, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0xbd, 0xb, 0x5, 0x3, 0x5, 0x5, 0x5, 0xc0, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xd1, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0xda, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xf1, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0xf4, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xf8, 0xa, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x105, 0xa, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x121, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x127, 
    0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x12a, 0xb, 0x11, 0x3, 0x12, 0x5, 0x12, 
    0x12d, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x135, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
    0x139, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x13d, 0xa, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x7, 0x17, 0x143, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x146, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x14e, 0xa, 0x18, 0xc, 0x18, 
    0xe, 0x18, 0x151, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 
    0x156, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x159, 0xb, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 
    0x1a, 0x162, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0x169, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 
    0x1e, 0x174, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x177, 0xb, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x17b, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
    0x17e, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x185, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x189, 
    0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x18c, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 
    0x22, 0x196, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x199, 0xb, 0x22, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x19f, 0xa, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x1a3, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 
    0x1a6, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x5, 0x23, 0x1ad, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x5, 0x25, 
    0x1b2, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 
    0x1b8, 0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x1bb, 0xa, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x7, 0x25, 0x1bf, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x1c2, 
    0xb, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x7, 0x26, 0x1ca, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x1cd, 0xb, 
    0x26, 0x3, 0x27, 0x7, 0x27, 0x1d0, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 
    0x1d3, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x5, 0x27, 0x1da, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x5, 0x27, 0x1e0, 0xa, 0x27, 0x3, 0x27, 0x7, 0x27, 0x1e3, 0xa, 0x27, 
    0xc, 0x27, 0xe, 0x27, 0x1e6, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x5, 0x27, 0x1eb, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 
    0x2a, 0x1f7, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x207, 0xa, 0x2e, 
    0xc, 0x2e, 0xe, 0x2e, 0x20a, 0xb, 0x2e, 0x5, 0x2e, 0x20c, 0xa, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 
    0x30, 0x3, 0x31, 0x5, 0x31, 0x216, 0xa, 0x31, 0x3, 0x31, 0x5, 0x31, 
    0x219, 0xa, 0x31, 0x3, 0x31, 0x5, 0x31, 0x21c, 0xa, 0x31, 0x3, 0x32, 
    0x5, 0x32, 0x21f, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 
    0x224, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x5, 0x33, 0x22b, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x7, 0x34, 
    0x230, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x233, 0xb, 0x34, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x23a, 0xa, 0x36, 
    0xc, 0x36, 0xe, 0x36, 0x23d, 0xb, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x7, 0x37, 0x242, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x245, 0xb, 0x37, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x24a, 0xa, 0x38, 0xc, 0x38, 
    0xe, 0x38, 0x24d, 0xb, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x5, 0x39, 0x254, 0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x25b, 0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 
    0x25e, 0xb, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x263, 
    0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x26c, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x7, 0x3c, 0x271, 0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 0x274, 
    0xb, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x279, 0xa, 0x3d, 
    0xc, 0x3d, 0xe, 0x3d, 0x27c, 0xb, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x7, 0x3e, 0x281, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 0x284, 0xb, 0x3e, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x289, 0xa, 0x3f, 0xc, 0x3f, 
    0xe, 0x3f, 0x28c, 0xb, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 
    0x291, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x296, 
    0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x7, 0x42, 0x29b, 0xa, 0x42, 
    0xc, 0x42, 0xe, 0x42, 0x29e, 0xb, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x7, 0x43, 0x2a3, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 0x2a6, 0xb, 0x43, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x7, 0x44, 0x2ab, 0xa, 0x44, 0xc, 0x44, 
    0xe, 0x44, 0x2ae, 0xb, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 
    0x2b3, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x2b8, 
    0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 
    0x2c5, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x5, 0x48, 0x2cd, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x2d4, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 
    0x5, 0x4a, 0x2d8, 0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x7, 0x4b, 0x2df, 0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x2e2, 
    0xb, 0x4b, 0x5, 0x4b, 0x2e4, 0xa, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 
    0x3, 0x4c, 0x5, 0x4c, 0x2ea, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 
    0x4e, 0x2f5, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 
    0x2fa, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x2fe, 0xa, 0x50, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x7, 0x52, 0x305, 
    0xa, 0x52, 0xc, 0x52, 0xe, 0x52, 0x308, 0xb, 0x52, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x2, 0x2, 0x54, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 
    0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 
    0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 
    0xa2, 0xa4, 0x2, 0xa, 0x4, 0x2, 0x45, 0x46, 0x4a, 0x4a, 0x4, 0x2, 0x27, 
    0x27, 0x55, 0x55, 0x4, 0x2, 0x2d, 0x2e, 0x36, 0x36, 0x3, 0x2, 0x2f, 
    0x31, 0x5, 0x2, 0x2e, 0x2e, 0x32, 0x32, 0x34, 0x34, 0x3, 0x2, 0x4b, 
    0x4d, 0x4, 0x2, 0x4b, 0x4b, 0x4e, 0x4e, 0x4, 0x2, 0x51, 0x51, 0x53, 
    0x53, 0x2, 0x31f, 0x2, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x4, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xe, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x12, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x16, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x101, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x109, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x111, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x120, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x122, 0x3, 0x2, 0x2, 0x2, 0x22, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x132, 0x3, 0x2, 0x2, 0x2, 0x26, 0x136, 0x3, 0x2, 0x2, 0x2, 0x28, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x144, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x149, 0x3, 0x2, 0x2, 0x2, 0x30, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x161, 0x3, 0x2, 0x2, 0x2, 0x34, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x168, 0x3, 0x2, 0x2, 0x2, 0x38, 0x16a, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x178, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x181, 0x3, 0x2, 0x2, 0x2, 0x40, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x191, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1ae, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1c5, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1ec, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1f3, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x1fd, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x202, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x20f, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x212, 0x3, 0x2, 0x2, 0x2, 0x60, 0x215, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x64, 0x22a, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x68, 0x234, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x236, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x23e, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x246, 0x3, 0x2, 0x2, 0x2, 0x70, 0x253, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x262, 0x3, 0x2, 0x2, 0x2, 0x74, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x76, 0x26d, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x275, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x27d, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x285, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x28d, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x292, 0x3, 0x2, 0x2, 0x2, 0x82, 0x297, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x86, 0x2a7, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x2c4, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x90, 0x2d3, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x94, 0x2d9, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x98, 0x2eb, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x2f9, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x2ff, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x301, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x309, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xa9, 0x5, 0x8, 0x5, 0x2, 0xa7, 0xa9, 0x5, 0x4, 0x3, 0x2, 0xa8, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0x3, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xad, 0xaf, 0x7, 0x4, 0x2, 0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0xb2, 0x5, 0x6, 0x4, 0x2, 0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0x5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x5, 
    0x2, 0x2, 0xb6, 0x7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xbb, 0x5, 0xa, 0x6, 
    0x2, 0xb8, 0xba, 0x5, 0xe, 0x8, 0x2, 0xb9, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0xc0, 0x5, 0xc, 0x7, 0x2, 0xbf, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0xc2, 0x7, 0x3, 0x2, 0x2, 0xc2, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0xc3, 0xc4, 0x7, 0x7, 0x2, 0x2, 0xc4, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0xc5, 0xc6, 0x7, 0x40, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0xe, 0x8, 0x2, 0xc7, 
    0xc8, 0x7, 0x41, 0x2, 0x2, 0xc8, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xd1, 
    0x5, 0x3c, 0x1f, 0x2, 0xca, 0xd1, 0x5, 0x48, 0x25, 0x2, 0xcb, 0xd1, 
    0x5, 0x3e, 0x20, 0x2, 0xcc, 0xd1, 0x5, 0x10, 0x9, 0x2, 0xcd, 0xce, 0x5, 
    0x1e, 0x10, 0x2, 0xce, 0xcf, 0x7, 0xd, 0x2, 0x2, 0xcf, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0xd0, 0xca, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xda, 0x5, 0x14, 0xb, 0x2, 0xd3, 0xda, 
    0x5, 0x12, 0xa, 0x2, 0xd4, 0xda, 0x5, 0x16, 0xc, 0x2, 0xd5, 0xda, 0x5, 
    0x18, 0xd, 0x2, 0xd6, 0xda, 0x5, 0x1a, 0xe, 0x2, 0xd7, 0xda, 0x5, 0x1c, 
    0xf, 0x2, 0xd8, 0xda, 0x5, 0x58, 0x2d, 0x2, 0xd9, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd9, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd9, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 
    0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x24, 0x2, 0x2, 0xdc, 0xdd, 0x7, 
    0x3c, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x68, 0x35, 0x2, 0xde, 0xdf, 0x7, 0xd, 
    0x2, 0x2, 0xdf, 0xe0, 0x5, 0x68, 0x35, 0x2, 0xe0, 0xe1, 0x7, 0xd, 0x2, 
    0x2, 0xe1, 0xe2, 0x5, 0x68, 0x35, 0x2, 0xe2, 0xe3, 0x7, 0x3d, 0x2, 0x2, 
    0xe3, 0xe4, 0x5, 0xe, 0x8, 0x2, 0xe4, 0x13, 0x3, 0x2, 0x2, 0x2, 0xe5, 
    0xe6, 0x7, 0x21, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x3c, 0x2, 0x2, 0xe7, 0xe8, 
    0x5, 0x68, 0x35, 0x2, 0xe8, 0xe9, 0x7, 0x3d, 0x2, 0x2, 0xe9, 0xf2, 0x5, 
    0xe, 0x8, 0x2, 0xea, 0xeb, 0x7, 0x23, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x3c, 
    0x2, 0x2, 0xec, 0xed, 0x5, 0x68, 0x35, 0x2, 0xed, 0xee, 0x7, 0x3d, 0x2, 
    0x2, 0xee, 0xef, 0x5, 0xe, 0x8, 0x2, 0xef, 0xf1, 0x3, 0x2, 0x2, 0x2, 
    0xf0, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf2, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 
    0x22, 0x2, 0x2, 0xf6, 0xf8, 0x5, 0xe, 0x8, 0x2, 0xf7, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xfa, 0x7, 0x25, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x3c, 0x2, 0x2, 
    0xfb, 0xfc, 0x5, 0x32, 0x1a, 0x2, 0xfc, 0xfd, 0x7, 0xc, 0x2, 0x2, 0xfd, 
    0xfe, 0x5, 0x96, 0x4c, 0x2, 0xfe, 0xff, 0x7, 0x3d, 0x2, 0x2, 0xff, 0x100, 
    0x5, 0xe, 0x8, 0x2, 0x100, 0x17, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x7, 
    0x26, 0x2, 0x2, 0x102, 0x104, 0x7, 0x3c, 0x2, 0x2, 0x103, 0x105, 0x5, 
    0x68, 0x35, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 
    0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x7, 
    0x3d, 0x2, 0x2, 0x107, 0x108, 0x5, 0xe, 0x8, 0x2, 0x108, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x1b, 0x2, 0x2, 0x10a, 0x10b, 0x5, 
    0xe, 0x8, 0x2, 0x10b, 0x10c, 0x7, 0x26, 0x2, 0x2, 0x10c, 0x10d, 0x7, 
    0x3c, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x68, 0x35, 0x2, 0x10e, 0x10f, 0x7, 
    0x3d, 0x2, 0x2, 0x10f, 0x110, 0x7, 0xd, 0x2, 0x2, 0x110, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x1c, 0x2, 0x2, 0x112, 0x113, 0x7, 
    0x3c, 0x2, 0x2, 0x113, 0x114, 0x5, 0x68, 0x35, 0x2, 0x114, 0x115, 0x7, 
    0x3d, 0x2, 0x2, 0x115, 0x116, 0x7, 0x40, 0x2, 0x2, 0x116, 0x117, 0x5, 
    0x2c, 0x17, 0x2, 0x117, 0x118, 0x7, 0x41, 0x2, 0x2, 0x118, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x121, 0x5, 0x20, 0x11, 0x2, 0x11a, 0x121, 0x5, 
    0x22, 0x12, 0x2, 0x11b, 0x121, 0x5, 0x24, 0x13, 0x2, 0x11c, 0x121, 0x5, 
    0x26, 0x14, 0x2, 0x11d, 0x121, 0x5, 0x28, 0x15, 0x2, 0x11e, 0x121, 0x5, 
    0x2a, 0x16, 0x2, 0x11f, 0x121, 0x5, 0x68, 0x35, 0x2, 0x120, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11f, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x7, 0x14, 
    0x2, 0x2, 0x123, 0x128, 0x5, 0x36, 0x1c, 0x2, 0x124, 0x125, 0x7, 0x43, 
    0x2, 0x2, 0x125, 0x127, 0x5, 0x36, 0x1c, 0x2, 0x126, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12d, 0x7, 0x46, 0x2, 
    0x2, 0x12c, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x5, 0x32, 0x1a, 
    0x2, 0x12f, 0x130, 0x7, 0x27, 0x2, 0x2, 0x130, 0x131, 0x5, 0x68, 0x35, 
    0x2, 0x131, 0x23, 0x3, 0x2, 0x2, 0x2, 0x132, 0x134, 0x7, 0x20, 0x2, 
    0x2, 0x133, 0x135, 0x7, 0x4b, 0x2, 0x2, 0x134, 0x133, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x135, 0x3, 0x2, 0x2, 0x2, 0x135, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x136, 0x138, 0x7, 0x15, 0x2, 0x2, 0x137, 0x139, 0x7, 0x4b, 0x2, 0x2, 
    0x138, 0x137, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 
    0x139, 0x27, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13c, 0x7, 0x16, 0x2, 0x2, 
    0x13b, 0x13d, 0x5, 0x68, 0x35, 0x2, 0x13c, 0x13b, 0x3, 0x2, 0x2, 0x2, 
    0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x29, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x13f, 0x7, 0x48, 0x2, 0x2, 0x13f, 0x140, 0x5, 0x68, 0x35, 0x2, 0x140, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x141, 0x143, 0x5, 0x2e, 0x18, 0x2, 0x142, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 0x146, 0x3, 0x2, 0x2, 0x2, 0x144, 
    0x142, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 0x2, 0x145, 
    0x147, 0x3, 0x2, 0x2, 0x2, 0x146, 0x144, 0x3, 0x2, 0x2, 0x2, 0x147, 
    0x148, 0x5, 0x30, 0x19, 0x2, 0x148, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x149, 
    0x14a, 0x7, 0x1d, 0x2, 0x2, 0x14a, 0x14b, 0x5, 0x68, 0x35, 0x2, 0x14b, 
    0x14f, 0x7, 0x44, 0x2, 0x2, 0x14c, 0x14e, 0x5, 0xe, 0x8, 0x2, 0x14d, 
    0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x151, 0x3, 0x2, 0x2, 0x2, 0x14f, 
    0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 
    0x7, 0x1e, 0x2, 0x2, 0x153, 0x157, 0x7, 0x44, 0x2, 0x2, 0x154, 0x156, 
    0x5, 0xe, 0x8, 0x2, 0x155, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x159, 
    0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 
    0x3, 0x2, 0x2, 0x2, 0x158, 0x31, 0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x15a, 0x15b, 0x7, 0x35, 0x2, 0x2, 0x15b, 0x162, 0x5, 
    0x34, 0x1b, 0x2, 0x15c, 0x15d, 0x7, 0x35, 0x2, 0x2, 0x15d, 0x15e, 0x5, 
    0x34, 0x1b, 0x2, 0x15e, 0x15f, 0x7, 0x33, 0x2, 0x2, 0x15f, 0x160, 0x5, 
    0x34, 0x1b, 0x2, 0x160, 0x162, 0x3, 0x2, 0x2, 0x2, 0x161, 0x15a, 0x3, 
    0x2, 0x2, 0x2, 0x161, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x162, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x164, 0x7, 0x54, 0x2, 0x2, 0x164, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x165, 0x169, 0x5, 0x38, 0x1d, 0x2, 0x166, 0x169, 0x5, 0x3a, 
    0x1e, 0x2, 0x167, 0x169, 0x5, 0x32, 0x1a, 0x2, 0x168, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x37, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0x54, 
    0x2, 0x2, 0x16b, 0x16c, 0x7, 0x3a, 0x2, 0x2, 0x16c, 0x16d, 0x5, 0x32, 
    0x1a, 0x2, 0x16d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x175, 0x5, 0x32, 
    0x1a, 0x2, 0x16f, 0x170, 0x7, 0x3e, 0x2, 0x2, 0x170, 0x171, 0x5, 0x68, 
    0x35, 0x2, 0x171, 0x172, 0x7, 0x3f, 0x2, 0x2, 0x172, 0x174, 0x3, 0x2, 
    0x2, 0x2, 0x173, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x174, 0x177, 0x3, 0x2, 
    0x2, 0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x17c, 0x7, 0x40, 0x2, 0x2, 0x179, 0x17b, 0x5, 0xe, 0x8, 
    0x2, 0x17a, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17e, 0x3, 0x2, 0x2, 
    0x2, 0x17c, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 
    0x2, 0x17d, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17c, 0x3, 0x2, 0x2, 
    0x2, 0x17f, 0x180, 0x7, 0x41, 0x2, 0x2, 0x180, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x181, 0x182, 0x7, 0x42, 0x2, 0x2, 0x182, 0x184, 0x5, 0x40, 0x21, 
    0x2, 0x183, 0x185, 0x5, 0x42, 0x22, 0x2, 0x184, 0x183, 0x3, 0x2, 0x2, 
    0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 
    0x2, 0x186, 0x18a, 0x7, 0x40, 0x2, 0x2, 0x187, 0x189, 0x5, 0x44, 0x23, 
    0x2, 0x188, 0x187, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18c, 0x3, 0x2, 0x2, 
    0x2, 0x18a, 0x188, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 
    0x2, 0x18d, 0x18e, 0x7, 0x41, 0x2, 0x2, 0x18e, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x190, 0x7, 0x54, 0x2, 0x2, 0x190, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x191, 0x192, 0x7, 0x1a, 0x2, 0x2, 0x192, 0x197, 0x5, 0x40, 0x21, 
    0x2, 0x193, 0x194, 0x7, 0x43, 0x2, 0x2, 0x194, 0x196, 0x5, 0x40, 0x21, 
    0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 0x196, 0x199, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0x3, 0x2, 0x2, 
    0x2, 0x198, 0x43, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 
    0x19a, 0x19b, 0x7, 0x11, 0x2, 0x2, 0x19b, 0x19e, 0x7, 0x54, 0x2, 0x2, 
    0x19c, 0x19d, 0x7, 0x27, 0x2, 0x2, 0x19d, 0x19f, 0x5, 0x9a, 0x4e, 0x2, 
    0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 
    0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1ad, 0x7, 0xd, 0x2, 0x2, 
    0x1a1, 0x1a3, 0x5, 0x54, 0x2b, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 
    0x1a3, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x1a4, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a7, 0x3, 0x2, 0x2, 0x2, 
    0x1a6, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x7, 0x1f, 0x2, 0x2, 
    0x1a8, 0x1a9, 0x5, 0x5e, 0x30, 0x2, 0x1a9, 0x1aa, 0x5, 0x5a, 0x2e, 0x2, 
    0x1aa, 0x1ab, 0x7, 0xd, 0x2, 0x2, 0x1ab, 0x1ad, 0x3, 0x2, 0x2, 0x2, 
    0x1ac, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1a4, 0x3, 0x2, 0x2, 0x2, 
    0x1ad, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x7, 0x54, 0x2, 0x2, 
    0x1af, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b2, 0x5, 0x4e, 0x28, 0x2, 
    0x1b1, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x19, 0x2, 0x2, 
    0x1b4, 0x1b7, 0x5, 0x46, 0x24, 0x2, 0x1b5, 0x1b6, 0x7, 0x1a, 0x2, 0x2, 
    0x1b6, 0x1b8, 0x5, 0x46, 0x24, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 0x2, 
    0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x1b9, 0x1bb, 0x5, 0x4a, 0x26, 0x2, 0x1ba, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
    0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 
    0x1bc, 0x1c0, 0x7, 0x40, 0x2, 0x2, 0x1bd, 0x1bf, 0x5, 0x4c, 0x27, 0x2, 
    0x1be, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c2, 0x3, 0x2, 0x2, 0x2, 
    0x1c0, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 
    0x1c1, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c0, 0x3, 0x2, 0x2, 0x2, 
    0x1c3, 0x1c4, 0x7, 0x41, 0x2, 0x2, 0x1c4, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x1c5, 0x1c6, 0x7, 0x17, 0x2, 0x2, 0x1c6, 0x1cb, 0x5, 0x40, 0x21, 0x2, 
    0x1c7, 0x1c8, 0x7, 0x43, 0x2, 0x2, 0x1c8, 0x1ca, 0x5, 0x40, 0x21, 0x2, 
    0x1c9, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cd, 0x3, 0x2, 0x2, 0x2, 
    0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 0x2, 
    0x1cc, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1ce, 
    0x1d0, 0x5, 0x54, 0x2b, 0x2, 0x1cf, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d0, 
    0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 
    0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d3, 
    0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x7, 0x1f, 0x2, 0x2, 0x1d5, 
    0x1d6, 0x5, 0x5e, 0x30, 0x2, 0x1d6, 0x1d9, 0x5, 0x5a, 0x2e, 0x2, 0x1d7, 
    0x1da, 0x5, 0x3c, 0x1f, 0x2, 0x1d8, 0x1da, 0x7, 0xd, 0x2, 0x2, 0x1d9, 
    0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 
    0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x5, 0x50, 0x29, 0x2, 0x1dc, 
    0x1dd, 0x7, 0xd, 0x2, 0x2, 0x1dd, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1de, 
    0x1e0, 0x7, 0x18, 0x2, 0x2, 0x1df, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1df, 
    0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e1, 
    0x1e3, 0x5, 0x54, 0x2b, 0x2, 0x1e2, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 
    0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x5, 0x52, 0x2a, 0x2, 0x1e8, 
    0x1e9, 0x7, 0xd, 0x2, 0x2, 0x1e9, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
    0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
    0x1df, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 
    0x7, 0x45, 0x2, 0x2, 0x1ed, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 
    0x7, 0x11, 0x2, 0x2, 0x1ef, 0x1f0, 0x5, 0x34, 0x1b, 0x2, 0x1f0, 0x1f1, 
    0x7, 0x27, 0x2, 0x2, 0x1f1, 0x1f2, 0x5, 0x9a, 0x4e, 0x2, 0x1f2, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f6, 0x5, 0x56, 0x2c, 0x2, 0x1f4, 0x1f5, 
    0x7, 0x27, 0x2, 0x2, 0x1f5, 0x1f7, 0x5, 0x9a, 0x4e, 0x2, 0x1f6, 0x1f4, 
    0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x9, 0x2, 0x2, 0x2, 0x1f9, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x1fa, 0x1fb, 0x7, 0x35, 0x2, 0x2, 0x1fb, 0x1fc, 0x5, 0x34, 
    0x1b, 0x2, 0x1fc, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x1f, 
    0x2, 0x2, 0x1fe, 0x1ff, 0x5, 0x5e, 0x30, 0x2, 0x1ff, 0x200, 0x5, 0x5a, 
    0x2e, 0x2, 0x200, 0x201, 0x5, 0x3c, 0x1f, 0x2, 0x201, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x202, 0x20b, 0x7, 0x3c, 0x2, 0x2, 0x203, 0x208, 0x5, 0x62, 
    0x32, 0x2, 0x204, 0x205, 0x7, 0x43, 0x2, 0x2, 0x205, 0x207, 0x5, 0x62, 
    0x32, 0x2, 0x206, 0x204, 0x3, 0x2, 0x2, 0x2, 0x207, 0x20a, 0x3, 0x2, 
    0x2, 0x2, 0x208, 0x206, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 
    0x2, 0x2, 0x209, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x208, 0x3, 0x2, 
    0x2, 0x2, 0x20b, 0x203, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 0x2, 
    0x2, 0x2, 0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x7, 0x3d, 
    0x2, 0x2, 0x20e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x5, 0x5e, 
    0x30, 0x2, 0x210, 0x211, 0x5, 0x60, 0x31, 0x2, 0x211, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x212, 0x213, 0x7, 0x54, 0x2, 0x2, 0x213, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x214, 0x216, 0x7, 0x3c, 0x2, 0x2, 0x215, 0x214, 0x3, 0x2, 
    0x2, 0x2, 0x215, 0x216, 0x3, 0x2, 0x2, 0x2, 0x216, 0x218, 0x3, 0x2, 
    0x2, 0x2, 0x217, 0x219, 0x5, 0x66, 0x34, 0x2, 0x218, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x218, 0x219, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21b, 0x3, 0x2, 
    0x2, 0x2, 0x21a, 0x21c, 0x7, 0x3d, 0x2, 0x2, 0x21b, 0x21a, 0x3, 0x2, 
    0x2, 0x2, 0x21b, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x21d, 0x21f, 0x7, 0x49, 0x2, 0x2, 0x21e, 0x21d, 0x3, 0x2, 0x2, 
    0x2, 0x21e, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 0x2, 
    0x2, 0x220, 0x223, 0x5, 0x64, 0x33, 0x2, 0x221, 0x222, 0x7, 0x27, 0x2, 
    0x2, 0x222, 0x224, 0x5, 0x9a, 0x4e, 0x2, 0x223, 0x221, 0x3, 0x2, 0x2, 
    0x2, 0x223, 0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x225, 0x226, 0x7, 0x35, 0x2, 0x2, 0x226, 0x22b, 0x7, 0x54, 0x2, 0x2, 
    0x227, 0x228, 0x7, 0x2a, 0x2, 0x2, 0x228, 0x229, 0x7, 0x35, 0x2, 0x2, 
    0x229, 0x22b, 0x7, 0x54, 0x2, 0x2, 0x22a, 0x225, 0x3, 0x2, 0x2, 0x2, 
    0x22a, 0x227, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x65, 0x3, 0x2, 0x2, 0x2, 0x22c, 
    0x231, 0x5, 0x68, 0x35, 0x2, 0x22d, 0x22e, 0x7, 0x43, 0x2, 0x2, 0x22e, 
    0x230, 0x5, 0x68, 0x35, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x230, 
    0x233, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x231, 
    0x232, 0x3, 0x2, 0x2, 0x2, 0x232, 0x67, 0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 
    0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x5, 0x6a, 0x36, 0x2, 0x235, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x236, 0x23b, 0x5, 0x6c, 0x37, 0x2, 0x237, 0x238, 
    0x7, 0x12, 0x2, 0x2, 0x238, 0x23a, 0x5, 0x6c, 0x37, 0x2, 0x239, 0x237, 
    0x3, 0x2, 0x2, 0x2, 0x23a, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x239, 
    0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x23d, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x243, 0x5, 
    0x6e, 0x38, 0x2, 0x23f, 0x240, 0x7, 0x13, 0x2, 0x2, 0x240, 0x242, 0x5, 
    0x6e, 0x38, 0x2, 0x241, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x242, 0x245, 0x3, 
    0x2, 0x2, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x3, 
    0x2, 0x2, 0x2, 0x244, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x245, 0x243, 0x3, 0x2, 
    0x2, 0x2, 0x246, 0x24b, 0x5, 0x70, 0x39, 0x2, 0x247, 0x248, 0x7, 0xf, 
    0x2, 0x2, 0x248, 0x24a, 0x5, 0x70, 0x39, 0x2, 0x249, 0x247, 0x3, 0x2, 
    0x2, 0x2, 0x24a, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x249, 0x3, 0x2, 
    0x2, 0x2, 0x24b, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x5, 0x72, 0x3a, 
    0x2, 0x24f, 0x250, 0x9, 0x3, 0x2, 0x2, 0x250, 0x251, 0x5, 0x70, 0x39, 
    0x2, 0x251, 0x254, 0x3, 0x2, 0x2, 0x2, 0x252, 0x254, 0x5, 0x74, 0x3b, 
    0x2, 0x253, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x253, 0x252, 0x3, 0x2, 0x2, 
    0x2, 0x254, 0x71, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x7, 0x10, 0x2, 
    0x2, 0x256, 0x257, 0x7, 0x3c, 0x2, 0x2, 0x257, 0x25c, 0x5, 0x36, 0x1c, 
    0x2, 0x258, 0x259, 0x7, 0x43, 0x2, 0x2, 0x259, 0x25b, 0x5, 0x36, 0x1c, 
    0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25e, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 0x2, 
    0x2, 0x25d, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25c, 0x3, 0x2, 0x2, 
    0x2, 0x25f, 0x260, 0x7, 0x3d, 0x2, 0x2, 0x260, 0x263, 0x3, 0x2, 0x2, 
    0x2, 0x261, 0x263, 0x5, 0x36, 0x1c, 0x2, 0x262, 0x255, 0x3, 0x2, 0x2, 
    0x2, 0x262, 0x261, 0x3, 0x2, 0x2, 0x2, 0x263, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x264, 0x265, 0x5, 0x76, 0x3c, 0x2, 0x265, 0x266, 0x7, 0x3b, 0x2, 0x2, 
    0x266, 0x267, 0x5, 0x68, 0x35, 0x2, 0x267, 0x268, 0x7, 0x44, 0x2, 0x2, 
    0x268, 0x269, 0x5, 0x68, 0x35, 0x2, 0x269, 0x26c, 0x3, 0x2, 0x2, 0x2, 
    0x26a, 0x26c, 0x5, 0x76, 0x3c, 0x2, 0x26b, 0x264, 0x3, 0x2, 0x2, 0x2, 
    0x26b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x75, 0x3, 0x2, 0x2, 0x2, 0x26d, 
    0x272, 0x5, 0x78, 0x3d, 0x2, 0x26e, 0x26f, 0x7, 0x38, 0x2, 0x2, 0x26f, 
    0x271, 0x5, 0x78, 0x3d, 0x2, 0x270, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x271, 
    0x274, 0x3, 0x2, 0x2, 0x2, 0x272, 0x270, 0x3, 0x2, 0x2, 0x2, 0x272, 
    0x273, 0x3, 0x2, 0x2, 0x2, 0x273, 0x77, 0x3, 0x2, 0x2, 0x2, 0x274, 0x272, 
    0x3, 0x2, 0x2, 0x2, 0x275, 0x27a, 0x5, 0x7a, 0x3e, 0x2, 0x276, 0x277, 
    0x7, 0x39, 0x2, 0x2, 0x277, 0x279, 0x5, 0x7a, 0x3e, 0x2, 0x278, 0x276, 
    0x3, 0x2, 0x2, 0x2, 0x279, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x278, 
    0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x27c, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x282, 0x5, 
    0x7c, 0x3f, 0x2, 0x27e, 0x27f, 0x7, 0x2b, 0x2, 0x2, 0x27f, 0x281, 0x5, 
    0x7c, 0x3f, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x281, 0x284, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 
    0x2, 0x2, 0x2, 0x283, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x284, 0x282, 0x3, 0x2, 
    0x2, 0x2, 0x285, 0x28a, 0x5, 0x7e, 0x40, 0x2, 0x286, 0x287, 0x7, 0x2a, 
    0x2, 0x2, 0x287, 0x289, 0x5, 0x7e, 0x40, 0x2, 0x288, 0x286, 0x3, 0x2, 
    0x2, 0x2, 0x289, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x288, 0x3, 0x2, 
    0x2, 0x2, 0x28a, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x290, 0x5, 0x80, 0x41, 
    0x2, 0x28e, 0x28f, 0x7, 0x56, 0x2, 0x2, 0x28f, 0x291, 0x5, 0x80, 0x41, 
    0x2, 0x290, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x3, 0x2, 0x2, 
    0x2, 0x291, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x292, 0x295, 0x5, 0x82, 0x42, 
    0x2, 0x293, 0x294, 0x7, 0x57, 0x2, 0x2, 0x294, 0x296, 0x5, 0x82, 0x42, 
    0x2, 0x295, 0x293, 0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 0x3, 0x2, 0x2, 
    0x2, 0x296, 0x81, 0x3, 0x2, 0x2, 0x2, 0x297, 0x29c, 0x5, 0x84, 0x43, 
    0x2, 0x298, 0x299, 0x7, 0x58, 0x2, 0x2, 0x299, 0x29b, 0x5, 0x84, 0x43, 
    0x2, 0x29a, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29e, 0x3, 0x2, 0x2, 
    0x2, 0x29c, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x3, 0x2, 0x2, 
    0x2, 0x29d, 0x83, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29c, 0x3, 0x2, 0x2, 0x2, 
    0x29f, 0x2a4, 0x5, 0x86, 0x44, 0x2, 0x2a0, 0x2a1, 0x9, 0x4, 0x2, 0x2, 
    0x2a1, 0x2a3, 0x5, 0x86, 0x44, 0x2, 0x2a2, 0x2a0, 0x3, 0x2, 0x2, 0x2, 
    0x2a3, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a2, 0x3, 0x2, 0x2, 0x2, 
    0x2a4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x85, 0x3, 0x2, 0x2, 0x2, 0x2a6, 
    0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2ac, 0x5, 0x88, 0x45, 0x2, 0x2a8, 
    0x2a9, 0x9, 0x5, 0x2, 0x2, 0x2a9, 0x2ab, 0x5, 0x88, 0x45, 0x2, 0x2aa, 
    0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2ac, 
    0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2ad, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 
    0x7, 0x2c, 0x2, 0x2, 0x2b0, 0x2b3, 0x5, 0x88, 0x45, 0x2, 0x2b1, 0x2b3, 
    0x5, 0x8a, 0x46, 0x2, 0x2b2, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b1, 
    0x3, 0x2, 0x2, 0x2, 0x2b3, 0x89, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b7, 0x5, 
    0x8c, 0x47, 0x2, 0x2b5, 0x2b6, 0x7, 0xe, 0x2, 0x2, 0x2b6, 0x2b8, 0x5, 
    0x8c, 0x47, 0x2, 0x2b7, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x3, 
    0x2, 0x2, 0x2, 0x2b8, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x9, 0x6, 
    0x2, 0x2, 0x2ba, 0x2c5, 0x5, 0x8e, 0x48, 0x2, 0x2bb, 0x2bc, 0x7, 0x3c, 
    0x2, 0x2, 0x2bc, 0x2bd, 0x7, 0x49, 0x2, 0x2, 0x2bd, 0x2be, 0x7, 0x3d, 
    0x2, 0x2, 0x2be, 0x2c5, 0x5, 0x8e, 0x48, 0x2, 0x2bf, 0x2c0, 0x7, 0x3c, 
    0x2, 0x2, 0x2c0, 0x2c1, 0x5, 0x6e, 0x38, 0x2, 0x2c1, 0x2c2, 0x7, 0x3d, 
    0x2, 0x2, 0x2c2, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c5, 0x5, 0x8e, 
    0x48, 0x2, 0x2c4, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2bb, 0x3, 0x2, 
    0x2, 0x2, 0x2c4, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c3, 0x3, 0x2, 
    0x2, 0x2, 0x2c5, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x7, 0x59, 
    0x2, 0x2, 0x2c7, 0x2cd, 0x5, 0x36, 0x1c, 0x2, 0x2c8, 0x2c9, 0x5, 0x36, 
    0x1c, 0x2, 0x2c9, 0x2ca, 0x7, 0x59, 0x2, 0x2, 0x2ca, 0x2cd, 0x3, 0x2, 
    0x2, 0x2, 0x2cb, 0x2cd, 0x5, 0x90, 0x49, 0x2, 0x2cc, 0x2c6, 0x3, 0x2, 
    0x2, 0x2, 0x2cc, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cb, 0x3, 0x2, 
    0x2, 0x2, 0x2cd, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 0x7, 0x28, 
    0x2, 0x2, 0x2cf, 0x2d4, 0x5, 0x36, 0x1c, 0x2, 0x2d0, 0x2d1, 0x7, 0x29, 
    0x2, 0x2, 0x2d1, 0x2d4, 0x5, 0x36, 0x1c, 0x2, 0x2d2, 0x2d4, 0x5, 0x92, 
    0x4a, 0x2, 0x2d3, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d0, 0x3, 0x2, 
    0x2, 0x2, 0x2d3, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x2d5, 0x2d8, 0x5, 0x9a, 0x4e, 0x2, 0x2d6, 0x2d8, 0x5, 0x9c, 0x4f, 
    0x2, 0x2d7, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d6, 0x3, 0x2, 0x2, 
    0x2, 0x2d8, 0x93, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2da, 0x7, 0x47, 0x2, 
    0x2, 0x2da, 0x2e3, 0x7, 0x3c, 0x2, 0x2, 0x2db, 0x2e0, 0x5, 0x96, 0x4c, 
    0x2, 0x2dc, 0x2dd, 0x7, 0x43, 0x2, 0x2, 0x2dd, 0x2df, 0x5, 0x96, 0x4c, 
    0x2, 0x2de, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e2, 0x3, 0x2, 0x2, 
    0x2, 0x2e0, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e0, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x2e4, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 0x7, 0x3d, 0x2, 
    0x2, 0x2e6, 0x95, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2ea, 0x5, 0x98, 0x4d, 
    0x2, 0x2e8, 0x2ea, 0x5, 0x68, 0x35, 0x2, 0x2e9, 0x2e7, 0x3, 0x2, 0x2, 
    0x2, 0x2e9, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x2eb, 0x2ec, 0x5, 0x68, 0x35, 0x2, 0x2ec, 0x2ed, 0x7, 0x37, 0x2, 0x2, 
    0x2ed, 0x2ee, 0x5, 0x68, 0x35, 0x2, 0x2ee, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x2ef, 0x2f5, 0x5, 0x9e, 0x50, 0x2, 0x2f0, 0x2f5, 0x5, 0xa4, 0x53, 0x2, 
    0x2f1, 0x2f5, 0x7, 0x50, 0x2, 0x2, 0x2f2, 0x2f5, 0x5, 0x94, 0x4b, 0x2, 
    0x2f3, 0x2f5, 0x5, 0x5c, 0x2f, 0x2, 0x2f4, 0x2ef, 0x3, 0x2, 0x2, 0x2, 
    0x2f4, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f1, 0x3, 0x2, 0x2, 0x2, 
    0x2f4, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f3, 0x3, 0x2, 0x2, 0x2, 
    0x2f5, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x7, 0x2a, 0x2, 0x2, 
    0x2f7, 0x2fa, 0x5, 0x36, 0x1c, 0x2, 0x2f8, 0x2fa, 0x5, 0x36, 0x1c, 0x2, 
    0x2f9, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2f8, 0x3, 0x2, 0x2, 0x2, 
    0x2fa, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fe, 0x5, 0xa0, 0x51, 0x2, 
    0x2fc, 0x2fe, 0x5, 0xa2, 0x52, 0x2, 0x2fd, 0x2fb, 0x3, 0x2, 0x2, 0x2, 
    0x2fd, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x2ff, 
    0x300, 0x9, 0x7, 0x2, 0x2, 0x300, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x301, 0x306, 
    0x7, 0x4e, 0x2, 0x2, 0x302, 0x303, 0x7, 0xb, 0x2, 0x2, 0x303, 0x305, 
    0x9, 0x8, 0x2, 0x2, 0x304, 0x302, 0x3, 0x2, 0x2, 0x2, 0x305, 0x308, 
    0x3, 0x2, 0x2, 0x2, 0x306, 0x304, 0x3, 0x2, 0x2, 0x2, 0x306, 0x307, 
    0x3, 0x2, 0x2, 0x2, 0x307, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x308, 0x306, 0x3, 
    0x2, 0x2, 0x2, 0x309, 0x30a, 0x9, 0x9, 0x2, 0x2, 0x30a, 0xa5, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0xa8, 0xaa, 0xae, 0xb3, 0xbb, 0xbf, 0xd0, 0xd9, 0xf2, 
    0xf7, 0x104, 0x120, 0x128, 0x12c, 0x134, 0x138, 0x13c, 0x144, 0x14f, 
    0x157, 0x161, 0x168, 0x175, 0x17c, 0x184, 0x18a, 0x197, 0x19e, 0x1a4, 
    0x1ac, 0x1b1, 0x1b7, 0x1ba, 0x1c0, 0x1cb, 0x1d1, 0x1d9, 0x1df, 0x1e4, 
    0x1ea, 0x1f6, 0x208, 0x20b, 0x215, 0x218, 0x21b, 0x21e, 0x223, 0x22a, 
    0x231, 0x23b, 0x243, 0x24b, 0x253, 0x25c, 0x262, 0x26b, 0x272, 0x27a, 
    0x282, 0x28a, 0x290, 0x295, 0x29c, 0x2a4, 0x2ac, 0x2b2, 0x2b7, 0x2c4, 
    0x2cc, 0x2d3, 0x2d7, 0x2e0, 0x2e3, 0x2e9, 0x2f4, 0x2f9, 0x2fd, 0x306, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PHPParser::Initializer PHPParser::_init;
