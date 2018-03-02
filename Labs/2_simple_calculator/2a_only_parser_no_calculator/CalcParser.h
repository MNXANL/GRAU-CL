
// Generated from Calc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CalcParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, COMMA = 4, ABS = 5, MAX = 6, MIN = 7, 
    SUM = 8, PROD = 9, FACT = 10, DIV = 11, MUL = 12, SUB = 13, ADD = 14, 
    ID = 15, INT = 16, NEWLINE = 17, WS = 18
  };

  enum {
    RuleProg = 0, RuleStat = 1, RuleExpr = 2, RuleExpr_list = 3
  };

  CalcParser(antlr4::TokenStream *input);
  ~CalcParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class StatContext;
  class ExprContext;
  class Expr_listContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

   
  };

  ProgContext* prog();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatContext() : antlr4::ParserRuleContext() { }
    void copyFrom(StatContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NewlineContext : public StatContext {
  public:
    NewlineContext(StatContext *ctx);

    antlr4::tree::TerminalNode *NEWLINE();
  };

  class  ExpContext : public StatContext {
  public:
    ExpContext(StatContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();
  };

  class  AssignContext : public StatContext {
  public:
    AssignContext(StatContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();
  };

  StatContext* stat();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdentifierContext : public ExprContext {
  public:
    IdentifierContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();
  };

  class  AbsContext : public ExprContext {
  public:
    AbsContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ABS();
    ExprContext *expr();
  };

  class  FactContext : public ExprContext {
  public:
    FactContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *FACT();
  };

  class  SignContext : public ExprContext {
  public:
    SignContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
  };

  class  MinmaxContext : public ExprContext {
  public:
    MinmaxContext(ExprContext *ctx);

    Expr_listContext *expr_list();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
  };

  class  SumContext : public ExprContext {
  public:
    SumContext(ExprContext *ctx);

    Expr_listContext *expr_list();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *PROD();
  };

  class  IntegerContext : public ExprContext {
  public:
    IntegerContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();
  };

  class  MuldivContext : public ExprContext {
  public:
    MuldivContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Expr_listContext : public antlr4::ParserRuleContext {
  public:
    Expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Expr_listContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Expr_listContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprlistContext : public Expr_listContext {
  public:
    ExprlistContext(Expr_listContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  Expr_listContext* expr_list();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

