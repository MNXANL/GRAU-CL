
// Generated from Expr.g4 by ANTLR 4.7.1


#include "ExprListener.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SContext ------------------------------------------------------------------

ExprParser::SContext::SContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::EContext* ExprParser::SContext::e() {
  return getRuleContext<ExprParser::EContext>(0);
}


size_t ExprParser::SContext::getRuleIndex() const {
  return ExprParser::RuleS;
}

void ExprParser::SContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS(this);
}

void ExprParser::SContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS(this);
}

ExprParser::SContext* ExprParser::s() {
  SContext *_localctx = _tracker.createInstance<SContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    e(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EContext ------------------------------------------------------------------

ExprParser::EContext::EContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::EContext::getRuleIndex() const {
  return ExprParser::RuleE;
}

void ExprParser::EContext::copyFrom(EContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MaxminContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::MaxminContext::L_PAR() {
  return getToken(ExprParser::L_PAR, 0);
}

std::vector<ExprParser::EContext *> ExprParser::MaxminContext::e() {
  return getRuleContexts<ExprParser::EContext>();
}

ExprParser::EContext* ExprParser::MaxminContext::e(size_t i) {
  return getRuleContext<ExprParser::EContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::MaxminContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::MaxminContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}

tree::TerminalNode* ExprParser::MaxminContext::R_PAR() {
  return getToken(ExprParser::R_PAR, 0);
}

tree::TerminalNode* ExprParser::MaxminContext::MAX() {
  return getToken(ExprParser::MAX, 0);
}

tree::TerminalNode* ExprParser::MaxminContext::MIN() {
  return getToken(ExprParser::MIN, 0);
}

ExprParser::MaxminContext::MaxminContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::MaxminContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaxmin(this);
}
void ExprParser::MaxminContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaxmin(this);
}
//----------------- NegContext ------------------------------------------------------------------

ExprParser::EContext* ExprParser::NegContext::e() {
  return getRuleContext<ExprParser::EContext>(0);
}

tree::TerminalNode* ExprParser::NegContext::SUB() {
  return getToken(ExprParser::SUB, 0);
}

ExprParser::NegContext::NegContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::NegContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNeg(this);
}
void ExprParser::NegContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNeg(this);
}
//----------------- PlusminusContext ------------------------------------------------------------------

std::vector<ExprParser::EContext *> ExprParser::PlusminusContext::e() {
  return getRuleContexts<ExprParser::EContext>();
}

ExprParser::EContext* ExprParser::PlusminusContext::e(size_t i) {
  return getRuleContext<ExprParser::EContext>(i);
}

tree::TerminalNode* ExprParser::PlusminusContext::ADD() {
  return getToken(ExprParser::ADD, 0);
}

tree::TerminalNode* ExprParser::PlusminusContext::SUB() {
  return getToken(ExprParser::SUB, 0);
}

ExprParser::PlusminusContext::PlusminusContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::PlusminusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusminus(this);
}
void ExprParser::PlusminusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusminus(this);
}
//----------------- ParsContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::ParsContext::L_PAR() {
  return getToken(ExprParser::L_PAR, 0);
}

ExprParser::EContext* ExprParser::ParsContext::e() {
  return getRuleContext<ExprParser::EContext>(0);
}

tree::TerminalNode* ExprParser::ParsContext::R_PAR() {
  return getToken(ExprParser::R_PAR, 0);
}

ExprParser::ParsContext::ParsContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::ParsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPars(this);
}
void ExprParser::ParsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPars(this);
}
//----------------- ProddivContext ------------------------------------------------------------------

std::vector<ExprParser::EContext *> ExprParser::ProddivContext::e() {
  return getRuleContexts<ExprParser::EContext>();
}

ExprParser::EContext* ExprParser::ProddivContext::e(size_t i) {
  return getRuleContext<ExprParser::EContext>(i);
}

tree::TerminalNode* ExprParser::ProddivContext::MULT() {
  return getToken(ExprParser::MULT, 0);
}

tree::TerminalNode* ExprParser::ProddivContext::DIV() {
  return getToken(ExprParser::DIV, 0);
}

ExprParser::ProddivContext::ProddivContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::ProddivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProddiv(this);
}
void ExprParser::ProddivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProddiv(this);
}
//----------------- ValueContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::ValueContext::INT() {
  return getToken(ExprParser::INT, 0);
}

ExprParser::ValueContext::ValueContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}
void ExprParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

ExprParser::EContext* ExprParser::e() {
   return e(0);
}

ExprParser::EContext* ExprParser::e(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::EContext *_localctx = _tracker.createInstance<EContext>(_ctx, parentState);
  ExprParser::EContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, ExprParser::RuleE, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::MIN:
      case ExprParser::MAX: {
        _localctx = _tracker.createInstance<MaxminContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(9);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case ExprParser::MAX: {
            setState(7);
            dynamic_cast<MaxminContext *>(_localctx)->op = match(ExprParser::MAX);
            break;
          }

          case ExprParser::MIN: {
            setState(8);
            dynamic_cast<MaxminContext *>(_localctx)->o = match(ExprParser::MIN);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(11);
        match(ExprParser::L_PAR);
        setState(12);
        e(0);
        setState(13);
        match(ExprParser::COMMA);
        setState(14);
        e(0);
        setState(19);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ExprParser::COMMA) {
          setState(15);
          match(ExprParser::COMMA);
          setState(16);
          e(0);
          setState(21);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(22);
        match(ExprParser::R_PAR);
        break;
      }

      case ExprParser::L_PAR: {
        _localctx = _tracker.createInstance<ParsContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(24);
        match(ExprParser::L_PAR);
        setState(25);
        e(0);
        setState(26);
        match(ExprParser::R_PAR);
        break;
      }

      case ExprParser::SUB: {
        _localctx = _tracker.createInstance<NegContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(28);
        dynamic_cast<NegContext *>(_localctx)->op = match(ExprParser::SUB);
        setState(29);
        e(4);
        break;
      }

      case ExprParser::INT: {
        _localctx = _tracker.createInstance<ValueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(30);
        match(ExprParser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(47);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(45);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ProddivContext>(_tracker.createInstance<EContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleE);
          setState(33);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(36);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case ExprParser::MULT: {
              setState(34);
              dynamic_cast<ProddivContext *>(_localctx)->op = match(ExprParser::MULT);
              break;
            }

            case ExprParser::DIV: {
              setState(35);
              dynamic_cast<ProddivContext *>(_localctx)->op = match(ExprParser::DIV);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(38);
          e(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlusminusContext>(_tracker.createInstance<EContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleE);
          setState(39);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(42);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case ExprParser::ADD: {
              setState(40);
              dynamic_cast<PlusminusContext *>(_localctx)->op = match(ExprParser::ADD);
              break;
            }

            case ExprParser::SUB: {
              setState(41);
              dynamic_cast<PlusminusContext *>(_localctx)->op = match(ExprParser::SUB);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(44);
          e(3);
          break;
        }

        } 
      }
      setState(49);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return eSempred(dynamic_cast<EContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::eSempred(EContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "s", "e"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'min'", "'max'", "'('", "')'", "'&'", "'v'", "'!'", "'*'", "'/'", 
  "'-'", "'+'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "MIN", "MAX", "L_PAR", "R_PAR", "AND", "OR", "NOT", "MULT", "DIV", 
  "SUB", "ADD", "INT", "WS", "COMMA"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
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
    0x3, 0x10, 0x35, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0xc, 0xa, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x14, 0xa, 
    0x3, 0xc, 0x3, 0xe, 0x3, 0x17, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x22, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x27, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2d, 0xa, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x30, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x33, 0xb, 0x3, 0x3, 
    0x3, 0x2, 0x3, 0x4, 0x4, 0x2, 0x4, 0x2, 0x2, 0x2, 0x3b, 0x2, 0x6, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x21, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 0x5, 0x4, 0x3, 
    0x2, 0x7, 0x3, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb, 0x8, 0x3, 0x1, 0x2, 0x9, 
    0xc, 0x7, 0x4, 0x2, 0x2, 0xa, 0xc, 0x7, 0x3, 0x2, 0x2, 0xb, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0xb, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0xd, 0xe, 0x7, 0x5, 0x2, 0x2, 0xe, 0xf, 0x5, 0x4, 0x3, 0x2, 0xf, 
    0x10, 0x7, 0x10, 0x2, 0x2, 0x10, 0x15, 0x5, 0x4, 0x3, 0x2, 0x11, 0x12, 
    0x7, 0x10, 0x2, 0x2, 0x12, 0x14, 0x5, 0x4, 0x3, 0x2, 0x13, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x17, 0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 0x2, 0x16, 0x18, 0x3, 0x2, 0x2, 
    0x2, 0x17, 0x15, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x7, 0x6, 0x2, 0x2, 
    0x19, 0x22, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x7, 0x5, 0x2, 0x2, 0x1b, 
    0x1c, 0x5, 0x4, 0x3, 0x2, 0x1c, 0x1d, 0x7, 0x6, 0x2, 0x2, 0x1d, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0xc, 0x2, 0x2, 0x1f, 0x22, 0x5, 
    0x4, 0x3, 0x6, 0x20, 0x22, 0x7, 0xe, 0x2, 0x2, 0x21, 0x8, 0x3, 0x2, 
    0x2, 0x2, 0x21, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1e, 0x3, 0x2, 0x2, 
    0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x23, 0x26, 0xc, 0x5, 0x2, 0x2, 0x24, 0x27, 0x7, 0xa, 0x2, 0x2, 0x25, 
    0x27, 0x7, 0xb, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x30, 0x5, 
    0x4, 0x3, 0x6, 0x29, 0x2c, 0xc, 0x4, 0x2, 0x2, 0x2a, 0x2d, 0x7, 0xd, 
    0x2, 0x2, 0x2b, 0x2d, 0x7, 0xc, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x30, 0x5, 0x4, 0x3, 0x5, 0x2f, 0x23, 0x3, 0x2, 0x2, 0x2, 0x2f, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x30, 0x33, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x9, 0xb, 0x15, 0x21, 
    0x26, 0x2c, 0x2f, 0x31, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
