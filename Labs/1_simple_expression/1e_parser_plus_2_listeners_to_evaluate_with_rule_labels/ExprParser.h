
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
public:
  enum {
    L_PAR = 1, R_PAR = 2, MULT = 3, DIV = 4, SUB = 5, ADD = 6, INT = 7, 
    WS = 8
  };

  enum {
    RuleS = 0, RuleE = 1
  };

  ExprParser(antlr4::TokenStream *input);
  ~ExprParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class SContext;
  class EContext; 

  class  SContext : public antlr4::ParserRuleContext {
  public:
    SContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EContext *e();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SContext* s();

  class  EContext : public antlr4::ParserRuleContext {
  public:
    EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    EContext() : antlr4::ParserRuleContext() { }
    void copyFrom(EContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DivContext : public EContext {
  public:
    DivContext(EContext *ctx);

    std::vector<EContext *> e();
    EContext* e(size_t i);
    antlr4::tree::TerminalNode *DIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NegContext : public EContext {
  public:
    NegContext(EContext *ctx);

    antlr4::tree::TerminalNode *SUB();
    EContext *e();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MinusContext : public EContext {
  public:
    MinusContext(EContext *ctx);

    std::vector<EContext *> e();
    EContext* e(size_t i);
    antlr4::tree::TerminalNode *SUB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ProdContext : public EContext {
  public:
    ProdContext(EContext *ctx);

    std::vector<EContext *> e();
    EContext* e(size_t i);
    antlr4::tree::TerminalNode *MULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParenthesisContext : public EContext {
  public:
    ParenthesisContext(EContext *ctx);

    antlr4::tree::TerminalNode *L_PAR();
    EContext *e();
    antlr4::tree::TerminalNode *R_PAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ValueContext : public EContext {
  public:
    ValueContext(EContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PlusContext : public EContext {
  public:
    PlusContext(EContext *ctx);

    std::vector<EContext *> e();
    EContext* e(size_t i);
    antlr4::tree::TerminalNode *ADD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  EContext* e();
  EContext* e(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool eSempred(EContext *_localctx, size_t predicateIndex);

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

