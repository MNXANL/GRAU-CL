
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterS(ExprParser::SContext *ctx) = 0;
  virtual void exitS(ExprParser::SContext *ctx) = 0;

  virtual void enterMaxmin(ExprParser::MaxminContext *ctx) = 0;
  virtual void exitMaxmin(ExprParser::MaxminContext *ctx) = 0;

  virtual void enterNeg(ExprParser::NegContext *ctx) = 0;
  virtual void exitNeg(ExprParser::NegContext *ctx) = 0;

  virtual void enterPlusminus(ExprParser::PlusminusContext *ctx) = 0;
  virtual void exitPlusminus(ExprParser::PlusminusContext *ctx) = 0;

  virtual void enterPars(ExprParser::ParsContext *ctx) = 0;
  virtual void exitPars(ExprParser::ParsContext *ctx) = 0;

  virtual void enterProddiv(ExprParser::ProddivContext *ctx) = 0;
  virtual void exitProddiv(ExprParser::ProddivContext *ctx) = 0;

  virtual void enterValue(ExprParser::ValueContext *ctx) = 0;
  virtual void exitValue(ExprParser::ValueContext *ctx) = 0;


};

