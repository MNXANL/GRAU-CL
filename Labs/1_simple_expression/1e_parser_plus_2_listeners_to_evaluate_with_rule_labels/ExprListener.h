
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

  virtual void enterDiv(ExprParser::DivContext *ctx) = 0;
  virtual void exitDiv(ExprParser::DivContext *ctx) = 0;

  virtual void enterNeg(ExprParser::NegContext *ctx) = 0;
  virtual void exitNeg(ExprParser::NegContext *ctx) = 0;

  virtual void enterMinus(ExprParser::MinusContext *ctx) = 0;
  virtual void exitMinus(ExprParser::MinusContext *ctx) = 0;

  virtual void enterProd(ExprParser::ProdContext *ctx) = 0;
  virtual void exitProd(ExprParser::ProdContext *ctx) = 0;

  virtual void enterParenthesis(ExprParser::ParenthesisContext *ctx) = 0;
  virtual void exitParenthesis(ExprParser::ParenthesisContext *ctx) = 0;

  virtual void enterValue(ExprParser::ValueContext *ctx) = 0;
  virtual void exitValue(ExprParser::ValueContext *ctx) = 0;

  virtual void enterPlus(ExprParser::PlusContext *ctx) = 0;
  virtual void exitPlus(ExprParser::PlusContext *ctx) = 0;


};

