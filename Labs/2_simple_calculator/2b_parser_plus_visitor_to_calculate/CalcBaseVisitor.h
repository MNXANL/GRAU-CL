
// Generated from Calc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcVisitor.h"


/**
 * This class provides an empty implementation of CalcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CalcBaseVisitor : public CalcVisitor {
public:

  virtual antlrcpp::Any visitProg(CalcParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintExpr(CalcParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(CalcParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlank(CalcParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbs(CalcParser::AbsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProd(CalcParser::ProdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFact(CalcParser::FactContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMax(CalcParser::MaxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSum(CalcParser::SumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(CalcParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigne(CalcParser::SigneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt(CalcParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus(CalcParser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list(CalcParser::Expr_listContext *ctx) override {
    return visitChildren(ctx);
  }


};

