
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprListener.h"


/**
 * This class provides an empty implementation of ExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprBaseListener : public ExprListener {
public:

  virtual void enterS(ExprParser::SContext * /*ctx*/) override { }
  virtual void exitS(ExprParser::SContext * /*ctx*/) override { }

  virtual void enterMaxmin(ExprParser::MaxminContext * /*ctx*/) override { }
  virtual void exitMaxmin(ExprParser::MaxminContext * /*ctx*/) override { }

  virtual void enterNeg(ExprParser::NegContext * /*ctx*/) override { }
  virtual void exitNeg(ExprParser::NegContext * /*ctx*/) override { }

  virtual void enterPlusminus(ExprParser::PlusminusContext * /*ctx*/) override { }
  virtual void exitPlusminus(ExprParser::PlusminusContext * /*ctx*/) override { }

  virtual void enterPars(ExprParser::ParsContext * /*ctx*/) override { }
  virtual void exitPars(ExprParser::ParsContext * /*ctx*/) override { }

  virtual void enterProddiv(ExprParser::ProddivContext * /*ctx*/) override { }
  virtual void exitProddiv(ExprParser::ProddivContext * /*ctx*/) override { }

  virtual void enterValue(ExprParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(ExprParser::ValueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

