
// Generated from Calc.g4 by ANTLR 4.7.1



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
      | (1ULL << CalcParser::MIN)
      | (1ULL << CalcParser::SUM)
      | (1ULL << CalcParser::PROD)
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

//----------------- NewlineContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::NewlineContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::NewlineContext::NewlineContext(StatContext *ctx) { copyFrom(ctx); }


//----------------- ExpContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::ExpContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::ExpContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::ExpContext::ExpContext(StatContext *ctx) { copyFrom(ctx); }


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
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::ExpContext>(_localctx));
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
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::NewlineContext>(_localctx));
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

//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IdentifierContext::ID() {
  return getToken(CalcParser::ID, 0);
}

CalcParser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- AbsContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::AbsContext::ABS() {
  return getToken(CalcParser::ABS, 0);
}

CalcParser::ExprContext* CalcParser::AbsContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::AbsContext::AbsContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- FactContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::FactContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::FactContext::FACT() {
  return getToken(CalcParser::FACT, 0);
}

CalcParser::FactContext::FactContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- SignContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::SignContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::SignContext::ADD() {
  return getToken(CalcParser::ADD, 0);
}

tree::TerminalNode* CalcParser::SignContext::SUB() {
  return getToken(CalcParser::SUB, 0);
}

CalcParser::SignContext::SignContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- MinmaxContext ------------------------------------------------------------------

CalcParser::Expr_listContext* CalcParser::MinmaxContext::expr_list() {
  return getRuleContext<CalcParser::Expr_listContext>(0);
}

tree::TerminalNode* CalcParser::MinmaxContext::MAX() {
  return getToken(CalcParser::MAX, 0);
}

tree::TerminalNode* CalcParser::MinmaxContext::MIN() {
  return getToken(CalcParser::MIN, 0);
}

CalcParser::MinmaxContext::MinmaxContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- SumContext ------------------------------------------------------------------

CalcParser::Expr_listContext* CalcParser::SumContext::expr_list() {
  return getRuleContext<CalcParser::Expr_listContext>(0);
}

tree::TerminalNode* CalcParser::SumContext::SUM() {
  return getToken(CalcParser::SUM, 0);
}

tree::TerminalNode* CalcParser::SumContext::PROD() {
  return getToken(CalcParser::PROD, 0);
}

CalcParser::SumContext::SumContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- IntegerContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IntegerContext::INT() {
  return getToken(CalcParser::INT, 0);
}

CalcParser::IntegerContext::IntegerContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- MuldivContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::MuldivContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::MuldivContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::MuldivContext::DIV() {
  return getToken(CalcParser::DIV, 0);
}

tree::TerminalNode* CalcParser::MuldivContext::MUL() {
  return getToken(CalcParser::MUL, 0);
}

tree::TerminalNode* CalcParser::MuldivContext::ADD() {
  return getToken(CalcParser::ADD, 0);
}

tree::TerminalNode* CalcParser::MuldivContext::SUB() {
  return getToken(CalcParser::SUB, 0);
}

CalcParser::MuldivContext::MuldivContext(ExprContext *ctx) { copyFrom(ctx); }



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
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::SUB:
      case CalcParser::ADD: {
        _localctx = _tracker.createInstance<SignContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(25);
        _la = _input->LA(1);
        if (!(_la == CalcParser::SUB

        || _la == CalcParser::ADD)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(26);
        expr(8);
        break;
      }

      case CalcParser::ABS: {
        _localctx = _tracker.createInstance<AbsContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(27);
        match(CalcParser::ABS);
        setState(28);
        match(CalcParser::T__1);
        setState(29);
        expr(0);
        setState(30);
        match(CalcParser::T__2);
        break;
      }

      case CalcParser::MAX:
      case CalcParser::MIN: {
        _localctx = _tracker.createInstance<MinmaxContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(32);
        _la = _input->LA(1);
        if (!(_la == CalcParser::MAX

        || _la == CalcParser::MIN)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(33);
        match(CalcParser::T__1);
        setState(34);
        expr_list();
        setState(35);
        match(CalcParser::T__2);
        break;
      }

      case CalcParser::SUM:
      case CalcParser::PROD: {
        _localctx = _tracker.createInstance<SumContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(37);
        _la = _input->LA(1);
        if (!(_la == CalcParser::SUM

        || _la == CalcParser::PROD)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(38);
        match(CalcParser::T__1);
        setState(39);
        expr_list();
        setState(40);
        match(CalcParser::T__2);
        break;
      }

      case CalcParser::INT: {
        _localctx = _tracker.createInstance<IntegerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(42);
        match(CalcParser::INT);
        break;
      }

      case CalcParser::ID: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(43);
        match(CalcParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(56);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(54);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MuldivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(46);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(47);
          _la = _input->LA(1);
          if (!(_la == CalcParser::DIV

          || _la == CalcParser::MUL)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(48);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MuldivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(49);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(50);
          _la = _input->LA(1);
          if (!(_la == CalcParser::SUB

          || _la == CalcParser::ADD)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(51);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<FactContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(52);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(53);
          match(CalcParser::FACT);
          break;
        }

        } 
      }
      setState(58);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
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
    setState(59);
    expr(0);
    setState(64);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcParser::COMMA) {
      setState(60);
      match(CalcParser::COMMA);
      setState(61);
      expr(0);
      setState(66);
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
    0x3, 0x14, 0x46, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x6, 0x2, 0xc, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0xd, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x19, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2f, 0xa, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x39, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x3c, 0xb, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x41, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0x44, 0xb, 0x5, 0x3, 0x5, 0x2, 0x3, 0x6, 0x6, 0x2, 0x4, 0x6, 
    0x8, 0x2, 0x6, 0x3, 0x2, 0xf, 0x10, 0x3, 0x2, 0x8, 0x9, 0x3, 0x2, 0xa, 
    0xb, 0x3, 0x2, 0xd, 0xe, 0x2, 0x4d, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x18, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 0x4, 0x3, 0x2, 0xb, 0xa, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0xe, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 
    0x5, 0x6, 0x4, 0x2, 0x10, 0x11, 0x7, 0x13, 0x2, 0x2, 0x11, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x13, 0x7, 0x11, 0x2, 0x2, 0x13, 0x14, 0x7, 0x3, 
    0x2, 0x2, 0x14, 0x15, 0x5, 0x6, 0x4, 0x2, 0x15, 0x16, 0x7, 0x13, 0x2, 
    0x2, 0x16, 0x19, 0x3, 0x2, 0x2, 0x2, 0x17, 0x19, 0x7, 0x13, 0x2, 0x2, 
    0x18, 0xf, 0x3, 0x2, 0x2, 0x2, 0x18, 0x12, 0x3, 0x2, 0x2, 0x2, 0x18, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 
    0x8, 0x4, 0x1, 0x2, 0x1b, 0x1c, 0x9, 0x2, 0x2, 0x2, 0x1c, 0x2f, 0x5, 
    0x6, 0x4, 0xa, 0x1d, 0x1e, 0x7, 0x7, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x4, 
    0x2, 0x2, 0x1f, 0x20, 0x5, 0x6, 0x4, 0x2, 0x20, 0x21, 0x7, 0x5, 0x2, 
    0x2, 0x21, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x9, 0x3, 0x2, 0x2, 
    0x23, 0x24, 0x7, 0x4, 0x2, 0x2, 0x24, 0x25, 0x5, 0x8, 0x5, 0x2, 0x25, 
    0x26, 0x7, 0x5, 0x2, 0x2, 0x26, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 
    0x9, 0x4, 0x2, 0x2, 0x28, 0x29, 0x7, 0x4, 0x2, 0x2, 0x29, 0x2a, 0x5, 
    0x8, 0x5, 0x2, 0x2a, 0x2b, 0x7, 0x5, 0x2, 0x2, 0x2b, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x2f, 0x7, 0x12, 0x2, 0x2, 0x2d, 0x2f, 0x7, 0x11, 0x2, 
    0x2, 0x2e, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0xc, 0x9, 0x2, 0x2, 0x31, 0x32, 0x9, 
    0x5, 0x2, 0x2, 0x32, 0x39, 0x5, 0x6, 0x4, 0xa, 0x33, 0x34, 0xc, 0x8, 
    0x2, 0x2, 0x34, 0x35, 0x9, 0x2, 0x2, 0x2, 0x35, 0x39, 0x5, 0x6, 0x4, 
    0x9, 0x36, 0x37, 0xc, 0xb, 0x2, 0x2, 0x37, 0x39, 0x7, 0xc, 0x2, 0x2, 
    0x38, 0x30, 0x3, 0x2, 0x2, 0x2, 0x38, 0x33, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x36, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x42, 0x5, 0x6, 
    0x4, 0x2, 0x3e, 0x3f, 0x7, 0x6, 0x2, 0x2, 0x3f, 0x41, 0x5, 0x6, 0x4, 
    0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x41, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x8, 0xd, 0x18, 
    0x2e, 0x38, 0x3a, 0x42, 
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
