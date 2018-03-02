
// Generated from Calc.g4 by ANTLR 4.7.1


#include "CalcVisitor.h"

#include "CalcParser.h"


using namespace antlrcpp;
using namespace antlr4;

CalcParser::CalcParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CalcParser::~CalcParser() {
  delete _interpreter;
}

std::string CalcParser::getGrammarFileName() const {
  return "Calc.g4";
}

const std::vector<std::string>& CalcParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CalcParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

CalcParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalcParser::StatContext *> CalcParser::ProgContext::stat() {
  return getRuleContexts<CalcParser::StatContext>();
}

CalcParser::StatContext* CalcParser::ProgContext::stat(size_t i) {
  return getRuleContext<CalcParser::StatContext>(i);
}


size_t CalcParser::ProgContext::getRuleIndex() const {
  return CalcParser::RuleProg;
}

antlrcpp::Any CalcParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ProgContext* CalcParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, CalcParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(9); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(8);
      stat();
      setState(11); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CalcParser::ABS)
      | (1ULL << CalcParser::MAX)
      | (1ULL << CalcParser::SUM)
      | (1ULL << CalcParser::SUB)
      | (1ULL << CalcParser::ADD)
      | (1ULL << CalcParser::ID)
      | (1ULL << CalcParser::INT)
      | (1ULL << CalcParser::NEWLINE))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

CalcParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::StatContext::getRuleIndex() const {
  return CalcParser::RuleStat;
}

void CalcParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::BlankContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::BlankContext::BlankContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::PrintExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::PrintExprContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::PrintExprContext::PrintExprContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::AssignContext::ID() {
  return getToken(CalcParser::ID, 0);
}

CalcParser::ExprContext* CalcParser::AssignContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::AssignContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::AssignContext::AssignContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::StatContext* CalcParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, CalcParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(22);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::PrintExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(13);
      expr(0);
      setState(14);
      match(CalcParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::AssignContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(16);
      match(CalcParser::ID);
      setState(17);
      match(CalcParser::T__0);
      setState(18);
      expr(0);
      setState(19);
      match(CalcParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::BlankContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(21);
      match(CalcParser::NEWLINE);
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

//----------------- ExprContext ------------------------------------------------------------------

CalcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ExprContext::getRuleIndex() const {
  return CalcParser::RuleExpr;
}

void CalcParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AbsContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::AbsContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::AbsContext::ABS() {
  return getToken(CalcParser::ABS, 0);
}

CalcParser::AbsContext::AbsContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::AbsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAbs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ProdContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::ProdContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::ProdContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::ProdContext::DIV() {
  return getToken(CalcParser::DIV, 0);
}

tree::TerminalNode* CalcParser::ProdContext::MUL() {
  return getToken(CalcParser::MUL, 0);
}

CalcParser::ProdContext::ProdContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::ProdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitProd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::FactContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::FactContext::FACT() {
  return getToken(CalcParser::FACT, 0);
}

CalcParser::FactContext::FactContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::FactContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitFact(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MaxContext ------------------------------------------------------------------

CalcParser::Expr_listContext* CalcParser::MaxContext::expr_list() {
  return getRuleContext<CalcParser::Expr_listContext>(0);
}

tree::TerminalNode* CalcParser::MaxContext::MAX() {
  return getToken(CalcParser::MAX, 0);
}

CalcParser::MaxContext::MaxContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::MaxContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitMax(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SumContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::SumContext::SUM() {
  return getToken(CalcParser::SUM, 0);
}

CalcParser::Expr_listContext* CalcParser::SumContext::expr_list() {
  return getRuleContext<CalcParser::Expr_listContext>(0);
}

CalcParser::SumContext::SumContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::SumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitSum(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IdContext::ID() {
  return getToken(CalcParser::ID, 0);
}

CalcParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SigneContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::SigneContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::SigneContext::ADD() {
  return getToken(CalcParser::ADD, 0);
}

tree::TerminalNode* CalcParser::SigneContext::SUB() {
  return getToken(CalcParser::SUB, 0);
}

CalcParser::SigneContext::SigneContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::SigneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitSigne(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IntContext::INT() {
  return getToken(CalcParser::INT, 0);
}

CalcParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::PlusContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::PlusContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::PlusContext::ADD() {
  return getToken(CalcParser::ADD, 0);
}

tree::TerminalNode* CalcParser::PlusContext::SUB() {
  return getToken(CalcParser::SUB, 0);
}

CalcParser::PlusContext::PlusContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ExprContext* CalcParser::expr() {
   return expr(0);
}

CalcParser::ExprContext* CalcParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CalcParser::ExprContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CalcParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(48);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::SUB:
      case CalcParser::ADD: {
        _localctx = _tracker.createInstance<SigneContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(27);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case CalcParser::ADD: {
            setState(25);
            dynamic_cast<SigneContext *>(_localctx)->op = match(CalcParser::ADD);
            break;
          }

          case CalcParser::SUB: {
            setState(26);
            dynamic_cast<SigneContext *>(_localctx)->op = match(CalcParser::SUB);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(29);
        expr(8);
        break;
      }

      case CalcParser::ABS: {
        _localctx = _tracker.createInstance<AbsContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(30);
        dynamic_cast<AbsContext *>(_localctx)->op = match(CalcParser::ABS);
        setState(31);
        match(CalcParser::T__1);
        setState(32);
        expr(0);
        setState(33);
        match(CalcParser::T__2);
        break;
      }

      case CalcParser::MAX: {
        _localctx = _tracker.createInstance<MaxContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(35);
        dynamic_cast<MaxContext *>(_localctx)->op = match(CalcParser::MAX);
        setState(36);
        match(CalcParser::T__1);
        setState(37);
        expr_list();
        setState(38);
        match(CalcParser::T__2);
        break;
      }

      case CalcParser::SUM: {
        _localctx = _tracker.createInstance<SumContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(40);
        dynamic_cast<SumContext *>(_localctx)->op = match(CalcParser::SUM);
        setState(41);
        match(CalcParser::T__1);
        setState(43);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CalcParser::ABS)
          | (1ULL << CalcParser::MAX)
          | (1ULL << CalcParser::SUM)
          | (1ULL << CalcParser::SUB)
          | (1ULL << CalcParser::ADD)
          | (1ULL << CalcParser::ID)
          | (1ULL << CalcParser::INT))) != 0)) {
          setState(42);
          expr_list();
        }
        setState(45);
        match(CalcParser::T__2);
        break;
      }

      case CalcParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(46);
        match(CalcParser::INT);
        break;
      }

      case CalcParser::ID: {
        _localctx = _tracker.createInstance<IdContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(47);
        match(CalcParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(66);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(64);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ProdContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(50);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(53);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case CalcParser::DIV: {
              setState(51);
              dynamic_cast<ProdContext *>(_localctx)->OP = match(CalcParser::DIV);
              break;
            }

            case CalcParser::MUL: {
              setState(52);
              dynamic_cast<ProdContext *>(_localctx)->op = match(CalcParser::MUL);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(55);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(56);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(59);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case CalcParser::ADD: {
              setState(57);
              dynamic_cast<PlusContext *>(_localctx)->op = match(CalcParser::ADD);
              break;
            }

            case CalcParser::SUB: {
              setState(58);
              dynamic_cast<PlusContext *>(_localctx)->op = match(CalcParser::SUB);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(61);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<FactContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(62);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(63);
          dynamic_cast<FactContext *>(_localctx)->op = match(CalcParser::FACT);
          break;
        }

        } 
      }
      setState(68);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Expr_listContext ------------------------------------------------------------------

CalcParser::Expr_listContext::Expr_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Expr_listContext::getRuleIndex() const {
  return CalcParser::RuleExpr_list;
}

void CalcParser::Expr_listContext::copyFrom(Expr_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprlistContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::ExprlistContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::ExprlistContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> CalcParser::ExprlistContext::COMMA() {
  return getTokens(CalcParser::COMMA);
}

tree::TerminalNode* CalcParser::ExprlistContext::COMMA(size_t i) {
  return getToken(CalcParser::COMMA, i);
}

CalcParser::ExprlistContext::ExprlistContext(Expr_listContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::ExprlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitExprlist(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Expr_listContext* CalcParser::expr_list() {
  Expr_listContext *_localctx = _tracker.createInstance<Expr_listContext>(_ctx, getState());
  enterRule(_localctx, 6, CalcParser::RuleExpr_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Expr_listContext *>(_tracker.createInstance<CalcParser::ExprlistContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(69);
    expr(0);
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcParser::COMMA) {
      setState(70);
      match(CalcParser::COMMA);
      setState(71);
      expr(0);
      setState(76);
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

bool CalcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalcParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CalcParser::_decisionToDFA;
atn::PredictionContextCache CalcParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CalcParser::_atn;
std::vector<uint16_t> CalcParser::_serializedATN;

std::vector<std::string> CalcParser::_ruleNames = {
  "prog", "stat", "expr", "expr_list"
};

std::vector<std::string> CalcParser::_literalNames = {
  "", "'='", "'('", "')'", "','", "'abs'", "'max'", "'min'", "'sum'", "'prod'", 
  "'!'", "'/'", "'*'", "'-'", "'+'"
};

std::vector<std::string> CalcParser::_symbolicNames = {
  "", "", "", "", "COMMA", "ABS", "MAX", "MIN", "SUM", "PROD", "FACT", "DIV", 
  "MUL", "SUB", "ADD", "ID", "INT", "NEWLINE", "WS"
};

dfa::Vocabulary CalcParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CalcParser::_tokenNames;

CalcParser::Initializer::Initializer() {
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
    0x3, 0x14, 0x50, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x6, 0x2, 0xc, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0xd, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x19, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x1e, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2e, 0xa, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x33, 0xa, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x38, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x3e, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x43, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x46, 0xb, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x7, 0x5, 0x4b, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x4e, 0xb, 
    0x5, 0x3, 0x5, 0x2, 0x3, 0x6, 0x6, 0x2, 0x4, 0x6, 0x8, 0x2, 0x2, 0x2, 
    0x5b, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4, 0x18, 0x3, 0x2, 0x2, 0x2, 0x6, 
    0x32, 0x3, 0x2, 0x2, 0x2, 0x8, 0x47, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 
    0x4, 0x3, 0x2, 0xb, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x5, 0x6, 0x4, 0x2, 0x10, 0x11, 
    0x7, 0x13, 0x2, 0x2, 0x11, 0x19, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x7, 
    0x11, 0x2, 0x2, 0x13, 0x14, 0x7, 0x3, 0x2, 0x2, 0x14, 0x15, 0x5, 0x6, 
    0x4, 0x2, 0x15, 0x16, 0x7, 0x13, 0x2, 0x2, 0x16, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x17, 0x19, 0x7, 0x13, 0x2, 0x2, 0x18, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x12, 0x3, 0x2, 0x2, 0x2, 0x18, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1d, 0x8, 0x4, 0x1, 0x2, 0x1b, 0x1e, 
    0x7, 0x10, 0x2, 0x2, 0x1c, 0x1e, 0x7, 0xf, 0x2, 0x2, 0x1d, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x33, 0x5, 0x6, 0x4, 0xa, 0x20, 0x21, 0x7, 0x7, 0x2, 
    0x2, 0x21, 0x22, 0x7, 0x4, 0x2, 0x2, 0x22, 0x23, 0x5, 0x6, 0x4, 0x2, 
    0x23, 0x24, 0x7, 0x5, 0x2, 0x2, 0x24, 0x33, 0x3, 0x2, 0x2, 0x2, 0x25, 
    0x26, 0x7, 0x8, 0x2, 0x2, 0x26, 0x27, 0x7, 0x4, 0x2, 0x2, 0x27, 0x28, 
    0x5, 0x8, 0x5, 0x2, 0x28, 0x29, 0x7, 0x5, 0x2, 0x2, 0x29, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0xa, 0x2, 0x2, 0x2b, 0x2d, 0x7, 0x4, 
    0x2, 0x2, 0x2c, 0x2e, 0x5, 0x8, 0x5, 0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x2f, 0x33, 0x7, 0x5, 0x2, 0x2, 0x30, 0x33, 0x7, 0x12, 0x2, 0x2, 0x31, 
    0x33, 0x7, 0x11, 0x2, 0x2, 0x32, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x32, 0x20, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x25, 0x3, 0x2, 0x2, 0x2, 0x32, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x44, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0xc, 0x9, 0x2, 
    0x2, 0x35, 0x38, 0x7, 0xd, 0x2, 0x2, 0x36, 0x38, 0x7, 0xe, 0x2, 0x2, 
    0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0x43, 0x5, 0x6, 0x4, 0xa, 0x3a, 0x3d, 
    0xc, 0x8, 0x2, 0x2, 0x3b, 0x3e, 0x7, 0x10, 0x2, 0x2, 0x3c, 0x3e, 0x7, 
    0xf, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x43, 0x5, 0x6, 0x4, 
    0x9, 0x40, 0x41, 0xc, 0xb, 0x2, 0x2, 0x41, 0x43, 0x7, 0xc, 0x2, 0x2, 
    0x42, 0x34, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4c, 0x5, 0x6, 
    0x4, 0x2, 0x48, 0x49, 0x7, 0x6, 0x2, 0x2, 0x49, 0x4b, 0x5, 0x6, 0x4, 
    0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x18, 
    0x1d, 0x2d, 0x32, 0x37, 0x3d, 0x42, 0x44, 0x4c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CalcParser::Initializer CalcParser::_init;
