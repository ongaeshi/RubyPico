/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     keyword_class = 258,
     keyword_module = 259,
     keyword_def = 260,
     keyword_begin = 261,
     keyword_if = 262,
     keyword_unless = 263,
     keyword_while = 264,
     keyword_until = 265,
     keyword_for = 266,
     keyword_undef = 267,
     keyword_rescue = 268,
     keyword_ensure = 269,
     keyword_end = 270,
     keyword_then = 271,
     keyword_elsif = 272,
     keyword_else = 273,
     keyword_case = 274,
     keyword_when = 275,
     keyword_break = 276,
     keyword_next = 277,
     keyword_redo = 278,
     keyword_retry = 279,
     keyword_in = 280,
     keyword_do = 281,
     keyword_do_cond = 282,
     keyword_do_block = 283,
     keyword_do_LAMBDA = 284,
     keyword_return = 285,
     keyword_yield = 286,
     keyword_super = 287,
     keyword_self = 288,
     keyword_nil = 289,
     keyword_true = 290,
     keyword_false = 291,
     keyword_and = 292,
     keyword_or = 293,
     keyword_not = 294,
     modifier_if = 295,
     modifier_unless = 296,
     modifier_while = 297,
     modifier_until = 298,
     modifier_rescue = 299,
     keyword_alias = 300,
     keyword_BEGIN = 301,
     keyword_END = 302,
     keyword__LINE__ = 303,
     keyword__FILE__ = 304,
     keyword__ENCODING__ = 305,
     tIDENTIFIER = 306,
     tFID = 307,
     tGVAR = 308,
     tIVAR = 309,
     tCONSTANT = 310,
     tCVAR = 311,
     tLABEL = 312,
     tINTEGER = 313,
     tFLOAT = 314,
     tCHAR = 315,
     tXSTRING = 316,
     tREGEXP = 317,
     tSTRING = 318,
     tSTRING_PART = 319,
     tSTRING_MID = 320,
     tNTH_REF = 321,
     tBACK_REF = 322,
     tREGEXP_END = 323,
     tUPLUS = 324,
     tUMINUS = 325,
     tPOW = 326,
     tCMP = 327,
     tEQ = 328,
     tEQQ = 329,
     tNEQ = 330,
     tGEQ = 331,
     tLEQ = 332,
     tANDOP = 333,
     tOROP = 334,
     tMATCH = 335,
     tNMATCH = 336,
     tDOT2 = 337,
     tDOT3 = 338,
     tAREF = 339,
     tASET = 340,
     tLSHFT = 341,
     tRSHFT = 342,
     tCOLON2 = 343,
     tCOLON3 = 344,
     tOP_ASGN = 345,
     tASSOC = 346,
     tLPAREN = 347,
     tLPAREN_ARG = 348,
     tRPAREN = 349,
     tLBRACK = 350,
     tLBRACE = 351,
     tLBRACE_ARG = 352,
     tSTAR = 353,
     tAMPER = 354,
     tLAMBDA = 355,
     tSYMBEG = 356,
     tREGEXP_BEG = 357,
     tWORDS_BEG = 358,
     tSYMBOLS_BEG = 359,
     tSTRING_BEG = 360,
     tXSTRING_BEG = 361,
     tSTRING_DVAR = 362,
     tLAMBEG = 363,
     tHEREDOC_BEG = 364,
     tHEREDOC_END = 365,
     tLITERAL_DELIM = 366,
     tHD_LITERAL_DELIM = 367,
     tHD_STRING_PART = 368,
     tHD_STRING_MID = 369,
     tLOWEST = 370,
     tUMINUS_NUM = 371,
     idNULL = 372,
     idRespond_to = 373,
     idIFUNC = 374,
     idCFUNC = 375,
     id_core_set_method_alias = 376,
     id_core_set_variable_alias = 377,
     id_core_undef_method = 378,
     id_core_define_method = 379,
     id_core_define_singleton_method = 380,
     id_core_set_postexe = 381,
     tLAST_TOKEN = 382
   };
#endif
/* Tokens.  */
#define keyword_class 258
#define keyword_module 259
#define keyword_def 260
#define keyword_begin 261
#define keyword_if 262
#define keyword_unless 263
#define keyword_while 264
#define keyword_until 265
#define keyword_for 266
#define keyword_undef 267
#define keyword_rescue 268
#define keyword_ensure 269
#define keyword_end 270
#define keyword_then 271
#define keyword_elsif 272
#define keyword_else 273
#define keyword_case 274
#define keyword_when 275
#define keyword_break 276
#define keyword_next 277
#define keyword_redo 278
#define keyword_retry 279
#define keyword_in 280
#define keyword_do 281
#define keyword_do_cond 282
#define keyword_do_block 283
#define keyword_do_LAMBDA 284
#define keyword_return 285
#define keyword_yield 286
#define keyword_super 287
#define keyword_self 288
#define keyword_nil 289
#define keyword_true 290
#define keyword_false 291
#define keyword_and 292
#define keyword_or 293
#define keyword_not 294
#define modifier_if 295
#define modifier_unless 296
#define modifier_while 297
#define modifier_until 298
#define modifier_rescue 299
#define keyword_alias 300
#define keyword_BEGIN 301
#define keyword_END 302
#define keyword__LINE__ 303
#define keyword__FILE__ 304
#define keyword__ENCODING__ 305
#define tIDENTIFIER 306
#define tFID 307
#define tGVAR 308
#define tIVAR 309
#define tCONSTANT 310
#define tCVAR 311
#define tLABEL 312
#define tINTEGER 313
#define tFLOAT 314
#define tCHAR 315
#define tXSTRING 316
#define tREGEXP 317
#define tSTRING 318
#define tSTRING_PART 319
#define tSTRING_MID 320
#define tNTH_REF 321
#define tBACK_REF 322
#define tREGEXP_END 323
#define tUPLUS 324
#define tUMINUS 325
#define tPOW 326
#define tCMP 327
#define tEQ 328
#define tEQQ 329
#define tNEQ 330
#define tGEQ 331
#define tLEQ 332
#define tANDOP 333
#define tOROP 334
#define tMATCH 335
#define tNMATCH 336
#define tDOT2 337
#define tDOT3 338
#define tAREF 339
#define tASET 340
#define tLSHFT 341
#define tRSHFT 342
#define tCOLON2 343
#define tCOLON3 344
#define tOP_ASGN 345
#define tASSOC 346
#define tLPAREN 347
#define tLPAREN_ARG 348
#define tRPAREN 349
#define tLBRACK 350
#define tLBRACE 351
#define tLBRACE_ARG 352
#define tSTAR 353
#define tAMPER 354
#define tLAMBDA 355
#define tSYMBEG 356
#define tREGEXP_BEG 357
#define tWORDS_BEG 358
#define tSYMBOLS_BEG 359
#define tSTRING_BEG 360
#define tXSTRING_BEG 361
#define tSTRING_DVAR 362
#define tLAMBEG 363
#define tHEREDOC_BEG 364
#define tHEREDOC_END 365
#define tLITERAL_DELIM 366
#define tHD_LITERAL_DELIM 367
#define tHD_STRING_PART 368
#define tHD_STRING_MID 369
#define tLOWEST 370
#define tUMINUS_NUM 371
#define idNULL 372
#define idRespond_to 373
#define idIFUNC 374
#define idCFUNC 375
#define id_core_set_method_alias 376
#define id_core_set_variable_alias 377
#define id_core_undef_method 378
#define id_core_define_method 379
#define id_core_define_singleton_method 380
#define id_core_set_postexe 381
#define tLAST_TOKEN 382




/* Copy the first part of user declarations.  */
#line 7 "src/parse.y"

#undef PARSER_DEBUG

#define YYDEBUG 1
#define YYERROR_VERBOSE 1
/*
 * Force yacc to use our memory management.  This is a little evil because
 * the macros assume that "parser_state *p" is in scope
 */
#define YYMALLOC(n)    mrb_malloc(p->mrb, (n))
#define YYFREE(o)      mrb_free(p->mrb, (o))
#define YYSTACK_USE_ALLOCA 0

#include <ctype.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include "mruby.h"
#include "mruby/compile.h"
#include "mruby/proc.h"
#include "mruby/error.h"
#include "node.h"
#include "mrb_throw.h"

#define YYLEX_PARAM p

typedef mrb_ast_node node;
typedef struct mrb_parser_state parser_state;
typedef struct mrb_parser_heredoc_info parser_heredoc_info;

static int yyparse(parser_state *p);
static int yylex(void *lval, parser_state *p);
static void yyerror(parser_state *p, const char *s);
static void yywarn(parser_state *p, const char *s);
static void yywarning(parser_state *p, const char *s);
static void backref_error(parser_state *p, node *n);
static void tokadd(parser_state *p, int32_t c);

#define identchar(c) (ISALNUM(c) || (c) == '_' || !ISASCII(c))

typedef unsigned int stack_type;

#define BITSTACK_PUSH(stack, n) ((stack) = ((stack)<<1)|((n)&1))
#define BITSTACK_POP(stack)     ((stack) = (stack) >> 1)
#define BITSTACK_LEXPOP(stack)  ((stack) = ((stack) >> 1) | ((stack) & 1))
#define BITSTACK_SET_P(stack)   ((stack)&1)

#define COND_PUSH(n)    BITSTACK_PUSH(p->cond_stack, (n))
#define COND_POP()      BITSTACK_POP(p->cond_stack)
#define COND_LEXPOP()   BITSTACK_LEXPOP(p->cond_stack)
#define COND_P()        BITSTACK_SET_P(p->cond_stack)

#define CMDARG_PUSH(n)  BITSTACK_PUSH(p->cmdarg_stack, (n))
#define CMDARG_POP()    BITSTACK_POP(p->cmdarg_stack)
#define CMDARG_LEXPOP() BITSTACK_LEXPOP(p->cmdarg_stack)
#define CMDARG_P()      BITSTACK_SET_P(p->cmdarg_stack)

#define SET_LINENO(c,n) ((c)->lineno = (n))
#define NODE_LINENO(c,n) do {\
  if (n) {\
     (c)->filename_index = (n)->filename_index;\
     (c)->lineno = (n)->lineno;\
  }\
} while (0)

#define sym(x) ((mrb_sym)(intptr_t)(x))
#define nsym(x) ((node*)(intptr_t)(x))

static inline mrb_sym
intern_cstr_gen(parser_state *p, const char *s)
{
  return mrb_intern_cstr(p->mrb, s);
}
#define intern_cstr(s) intern_cstr_gen(p,(s))

static inline mrb_sym
intern_gen(parser_state *p, const char *s, size_t len)
{
  return mrb_intern(p->mrb, s, len);
}
#define intern(s,len) intern_gen(p,(s),(len))

static inline mrb_sym
intern_gen_c(parser_state *p, const char c)
{
  return mrb_intern(p->mrb, &c, 1);
}
#define intern_c(c) intern_gen_c(p,(c))

static void
cons_free_gen(parser_state *p, node *cons)
{
  cons->cdr = p->cells;
  p->cells = cons;
}
#define cons_free(c) cons_free_gen(p, (c))

static void*
parser_palloc(parser_state *p, size_t size)
{
  void *m = mrb_pool_alloc(p->pool, size);

  if (!m) {
    MRB_THROW(p->jmp);
  }
  return m;
}

static node*
cons_gen(parser_state *p, node *car, node *cdr)
{
  node *c;

  if (p->cells) {
    c = p->cells;
    p->cells = p->cells->cdr;
  }
  else {
    c = (node *)parser_palloc(p, sizeof(mrb_ast_node));
  }

  c->car = car;
  c->cdr = cdr;
  c->lineno = p->lineno;
  c->filename_index = p->current_filename_index;
  return c;
}
#define cons(a,b) cons_gen(p,(a),(b))

static node*
list1_gen(parser_state *p, node *a)
{
  return cons(a, 0);
}
#define list1(a) list1_gen(p, (a))

static node*
list2_gen(parser_state *p, node *a, node *b)
{
  return cons(a, cons(b,0));
}
#define list2(a,b) list2_gen(p, (a),(b))

static node*
list3_gen(parser_state *p, node *a, node *b, node *c)
{
  return cons(a, cons(b, cons(c,0)));
}
#define list3(a,b,c) list3_gen(p, (a),(b),(c))

static node*
list4_gen(parser_state *p, node *a, node *b, node *c, node *d)
{
  return cons(a, cons(b, cons(c, cons(d, 0))));
}
#define list4(a,b,c,d) list4_gen(p, (a),(b),(c),(d))

static node*
list5_gen(parser_state *p, node *a, node *b, node *c, node *d, node *e)
{
  return cons(a, cons(b, cons(c, cons(d, cons(e, 0)))));
}
#define list5(a,b,c,d,e) list5_gen(p, (a),(b),(c),(d),(e))

static node*
list6_gen(parser_state *p, node *a, node *b, node *c, node *d, node *e, node *f)
{
  return cons(a, cons(b, cons(c, cons(d, cons(e, cons(f, 0))))));
}
#define list6(a,b,c,d,e,f) list6_gen(p, (a),(b),(c),(d),(e),(f))

static node*
append_gen(parser_state *p, node *a, node *b)
{
  node *c = a;

  if (!a) return b;
  while (c->cdr) {
    c = c->cdr;
  }
  if (b) {
    c->cdr = b;
  }
  return a;
}
#define append(a,b) append_gen(p,(a),(b))
#define push(a,b) append_gen(p,(a),list1(b))

static char*
parser_strndup(parser_state *p, const char *s, size_t len)
{
  char *b = (char *)parser_palloc(p, len+1);

  memcpy(b, s, len);
  b[len] = '\0';
  return b;
}
#define strndup(s,len) parser_strndup(p, s, len)

static char*
parser_strdup(parser_state *p, const char *s)
{
  return parser_strndup(p, s, strlen(s));
}
#undef strdup
#define strdup(s) parser_strdup(p, s)

/* xxx ----------------------------- */

static node*
local_switch(parser_state *p)
{
  node *prev = p->locals;

  p->locals = cons(0, 0);
  return prev;
}

static void
local_resume(parser_state *p, node *prev)
{
  p->locals = prev;
}

static void
local_nest(parser_state *p)
{
  p->locals = cons(0, p->locals);
}

static void
local_unnest(parser_state *p)
{
  p->locals = p->locals->cdr;
}

static mrb_bool
local_var_p(parser_state *p, mrb_sym sym)
{
  node *l = p->locals;

  while (l) {
    node *n = l->car;
    while (n) {
      if (sym(n->car) == sym) return TRUE;
      n = n->cdr;
    }
    l = l->cdr;
  }
  return FALSE;
}

static void
local_add_f(parser_state *p, mrb_sym sym)
{
  p->locals->car = push(p->locals->car, nsym(sym));
}

static void
local_add(parser_state *p, mrb_sym sym)
{
  if (!local_var_p(p, sym)) {
    local_add_f(p, sym);
  }
}

/* (:scope (vars..) (prog...)) */
static node*
new_scope(parser_state *p, node *body)
{
  return cons((node*)NODE_SCOPE, cons(p->locals->car, body));
}

/* (:begin prog...) */
static node*
new_begin(parser_state *p, node *body)
{
  if (body) {
    return list2((node*)NODE_BEGIN, body);
  }
  return cons((node*)NODE_BEGIN, 0);
}

#define newline_node(n) (n)

/* (:rescue body rescue else) */
static node*
new_rescue(parser_state *p, node *body, node *resq, node *els)
{
  return list4((node*)NODE_RESCUE, body, resq, els);
}

/* (:ensure body ensure) */
static node*
new_ensure(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_ENSURE, cons(a, cons(0, b)));
}

/* (:nil) */
static node*
new_nil(parser_state *p)
{
  return list1((node*)NODE_NIL);
}

/* (:true) */
static node*
new_true(parser_state *p)
{
  return list1((node*)NODE_TRUE);
}

/* (:false) */
static node*
new_false(parser_state *p)
{
  return list1((node*)NODE_FALSE);
}

/* (:alias new old) */
static node*
new_alias(parser_state *p, mrb_sym a, mrb_sym b)
{
  return cons((node*)NODE_ALIAS, cons(nsym(a), nsym(b)));
}

/* (:if cond then else) */
static node*
new_if(parser_state *p, node *a, node *b, node *c)
{
  return list4((node*)NODE_IF, a, b, c);
}

/* (:unless cond then else) */
static node*
new_unless(parser_state *p, node *a, node *b, node *c)
{
  return list4((node*)NODE_IF, a, c, b);
}

/* (:while cond body) */
static node*
new_while(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_WHILE, cons(a, b));
}

/* (:until cond body) */
static node*
new_until(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_UNTIL, cons(a, b));
}

/* (:for var obj body) */
static node*
new_for(parser_state *p, node *v, node *o, node *b)
{
  return list4((node*)NODE_FOR, v, o, b);
}

/* (:case a ((when ...) body) ((when...) body)) */
static node*
new_case(parser_state *p, node *a, node *b)
{
  node *n = list2((node*)NODE_CASE, a);
  node *n2 = n;

  while (n2->cdr) {
    n2 = n2->cdr;
  }
  n2->cdr = b;
  return n;
}

/* (:postexe a) */
static node*
new_postexe(parser_state *p, node *a)
{
  return cons((node*)NODE_POSTEXE, a);
}

/* (:self) */
static node*
new_self(parser_state *p)
{
  return list1((node*)NODE_SELF);
}

/* (:call a b c) */
static node*
new_call(parser_state *p, node *a, mrb_sym b, node *c)
{
  node *n = list4((node*)NODE_CALL, a, nsym(b), c);
  NODE_LINENO(n, a);
  return n;
}

/* (:fcall self mid args) */
static node*
new_fcall(parser_state *p, mrb_sym b, node *c)
{
  node *n = new_self(p);
  NODE_LINENO(n, c);
  n = list4((node*)NODE_FCALL, n, nsym(b), c);
  NODE_LINENO(n, c);
  return n;
}

/* (:super . c) */
static node*
new_super(parser_state *p, node *c)
{
  return cons((node*)NODE_SUPER, c);
}

/* (:zsuper) */
static node*
new_zsuper(parser_state *p)
{
  return list1((node*)NODE_ZSUPER);
}

/* (:yield . c) */
static node*
new_yield(parser_state *p, node *c)
{
  if (c) {
    if (c->cdr) {
      yyerror(p, "both block arg and actual block given");
    }
    return cons((node*)NODE_YIELD, c->car);
  }
  return cons((node*)NODE_YIELD, 0);
}

/* (:return . c) */
static node*
new_return(parser_state *p, node *c)
{
  return cons((node*)NODE_RETURN, c);
}

/* (:break . c) */
static node*
new_break(parser_state *p, node *c)
{
  return cons((node*)NODE_BREAK, c);
}

/* (:next . c) */
static node*
new_next(parser_state *p, node *c)
{
  return cons((node*)NODE_NEXT, c);
}

/* (:redo) */
static node*
new_redo(parser_state *p)
{
  return list1((node*)NODE_REDO);
}

/* (:retry) */
static node*
new_retry(parser_state *p)
{
  return list1((node*)NODE_RETRY);
}

/* (:dot2 a b) */
static node*
new_dot2(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_DOT2, cons(a, b));
}

/* (:dot3 a b) */
static node*
new_dot3(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_DOT3, cons(a, b));
}

/* (:colon2 b c) */
static node*
new_colon2(parser_state *p, node *b, mrb_sym c)
{
  return cons((node*)NODE_COLON2, cons(b, nsym(c)));
}

/* (:colon3 . c) */
static node*
new_colon3(parser_state *p, mrb_sym c)
{
  return cons((node*)NODE_COLON3, nsym(c));
}

/* (:and a b) */
static node*
new_and(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_AND, cons(a, b));
}

/* (:or a b) */
static node*
new_or(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_OR, cons(a, b));
}

/* (:array a...) */
static node*
new_array(parser_state *p, node *a)
{
  return cons((node*)NODE_ARRAY, a);
}

/* (:splat . a) */
static node*
new_splat(parser_state *p, node *a)
{
  return cons((node*)NODE_SPLAT, a);
}

/* (:hash (k . v) (k . v)...) */
static node*
new_hash(parser_state *p, node *a)
{
  return cons((node*)NODE_HASH, a);
}

/* (:sym . a) */
static node*
new_sym(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_SYM, nsym(sym));
}

static mrb_sym
new_strsym(parser_state *p, node* str)
{
  const char *s = (const char*)str->cdr->car;
  size_t len = (size_t)str->cdr->cdr;

  return mrb_intern(p->mrb, s, len);
}

/* (:lvar . a) */
static node*
new_lvar(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_LVAR, nsym(sym));
}

/* (:gvar . a) */
static node*
new_gvar(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_GVAR, nsym(sym));
}

/* (:ivar . a) */
static node*
new_ivar(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_IVAR, nsym(sym));
}

/* (:cvar . a) */
static node*
new_cvar(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_CVAR, nsym(sym));
}

/* (:const . a) */
static node*
new_const(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_CONST, nsym(sym));
}

/* (:undef a...) */
static node*
new_undef(parser_state *p, mrb_sym sym)
{
  return list2((node*)NODE_UNDEF, nsym(sym));
}

/* (:class class super body) */
static node*
new_class(parser_state *p, node *c, node *s, node *b)
{
  return list4((node*)NODE_CLASS, c, s, cons(p->locals->car, b));
}

/* (:sclass obj body) */
static node*
new_sclass(parser_state *p, node *o, node *b)
{
  return list3((node*)NODE_SCLASS, o, cons(p->locals->car, b));
}

/* (:module module body) */
static node*
new_module(parser_state *p, node *m, node *b)
{
  return list3((node*)NODE_MODULE, m, cons(p->locals->car, b));
}

/* (:def m lv (arg . body)) */
static node*
new_def(parser_state *p, mrb_sym m, node *a, node *b)
{
  return list5((node*)NODE_DEF, nsym(m), p->locals->car, a, b);
}

/* (:sdef obj m lv (arg . body)) */
static node*
new_sdef(parser_state *p, node *o, mrb_sym m, node *a, node *b)
{
  return list6((node*)NODE_SDEF, o, nsym(m), p->locals->car, a, b);
}

/* (:arg . sym) */
static node*
new_arg(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_ARG, nsym(sym));
}

/* (m o r m2 b) */
/* m: (a b c) */
/* o: ((a . e1) (b . e2)) */
/* r: a */
/* m2: (a b c) */
/* b: a */
static node*
new_args(parser_state *p, node *m, node *opt, mrb_sym rest, node *m2, mrb_sym blk)
{
  node *n;

  n = cons(m2, nsym(blk));
  n = cons(nsym(rest), n);
  n = cons(opt, n);
  return cons(m, n);
}

/* (:block_arg . a) */
static node*
new_block_arg(parser_state *p, node *a)
{
  return cons((node*)NODE_BLOCK_ARG, a);
}

/* (:block arg body) */
static node*
new_block(parser_state *p, node *a, node *b)
{
  return list4((node*)NODE_BLOCK, p->locals->car, a, b);
}

/* (:lambda arg body) */
static node*
new_lambda(parser_state *p, node *a, node *b)
{
  return list4((node*)NODE_LAMBDA, p->locals->car, a, b);
}

/* (:asgn lhs rhs) */
static node*
new_asgn(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_ASGN, cons(a, b));
}

/* (:masgn mlhs=(pre rest post)  mrhs) */
static node*
new_masgn(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_MASGN, cons(a, b));
}

/* (:asgn lhs rhs) */
static node*
new_op_asgn(parser_state *p, node *a, mrb_sym op, node *b)
{
  return list4((node*)NODE_OP_ASGN, a, nsym(op), b);
}

/* (:int . i) */
static node*
new_int(parser_state *p, const char *s, int base)
{
  return list3((node*)NODE_INT, (node*)strdup(s), (node*)(intptr_t)base);
}

/* (:float . i) */
static node*
new_float(parser_state *p, const char *s)
{
  return cons((node*)NODE_FLOAT, (node*)strdup(s));
}

/* (:str . (s . len)) */
static node*
new_str(parser_state *p, const char *s, int len)
{
  return cons((node*)NODE_STR, cons((node*)strndup(s, len), (node*)(intptr_t)len));
}

/* (:dstr . a) */
static node*
new_dstr(parser_state *p, node *a)
{
  return cons((node*)NODE_DSTR, a);
}

/* (:str . (s . len)) */
static node*
new_xstr(parser_state *p, const char *s, int len)
{
  return cons((node*)NODE_XSTR, cons((node*)strndup(s, len), (node*)(intptr_t)len));
}

/* (:xstr . a) */
static node*
new_dxstr(parser_state *p, node *a)
{
  return cons((node*)NODE_DXSTR, a);
}

/* (:dsym . a) */
static node*
new_dsym(parser_state *p, node *a)
{
  return cons((node*)NODE_DSYM, new_dstr(p, a));
}

/* (:str . (a . a)) */
static node*
new_regx(parser_state *p, const char *p1, const char* p2)
{
  return cons((node*)NODE_REGX, cons((node*)p1, (node*)p2));
}

/* (:dregx . a) */
static node*
new_dregx(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_DREGX, cons(a, b));
}

/* (:backref . n) */
static node*
new_back_ref(parser_state *p, int n)
{
  return cons((node*)NODE_BACK_REF, (node*)(intptr_t)n);
}

/* (:nthref . n) */
static node*
new_nth_ref(parser_state *p, int n)
{
  return cons((node*)NODE_NTH_REF, (node*)(intptr_t)n);
}

/* (:heredoc . a) */
static node*
new_heredoc(parser_state *p)
{
  parser_heredoc_info *inf = (parser_heredoc_info *)parser_palloc(p, sizeof(parser_heredoc_info));
  return cons((node*)NODE_HEREDOC, (node*)inf);
}

static void
new_bv(parser_state *p, mrb_sym id)
{
}

static node*
new_literal_delim(parser_state *p)
{
  return cons((node*)NODE_LITERAL_DELIM, 0);
}

/* (:words . a) */
static node*
new_words(parser_state *p, node *a)
{
  return cons((node*)NODE_WORDS, a);
}

/* (:symbols . a) */
static node*
new_symbols(parser_state *p, node *a)
{
  return cons((node*)NODE_SYMBOLS, a);
}

/* xxx ----------------------------- */

/* (:call a op) */
static node*
call_uni_op(parser_state *p, node *recv, const char *m)
{
  return new_call(p, recv, intern_cstr(m), 0);
}

/* (:call a op b) */
static node*
call_bin_op(parser_state *p, node *recv, const char *m, node *arg1)
{
  return new_call(p, recv, intern_cstr(m), list1(list1(arg1)));
}

static void
args_with_block(parser_state *p, node *a, node *b)
{
  if (b) {
    if (a->cdr) {
      yyerror(p, "both block arg and actual block given");
    }
    a->cdr = b;
  }
}

static void
call_with_block(parser_state *p, node *a, node *b)
{
  node *n;

  if (a->car == (node*)NODE_SUPER ||
      a->car == (node*)NODE_ZSUPER) {
    if (!a->cdr) a->cdr = cons(0, b);
    else {
      args_with_block(p, a->cdr, b);
    }
  }
  else {
    n = a->cdr->cdr->cdr;
    if (!n->car) n->car = cons(0, b);
    else {
      args_with_block(p, n->car, b);
    }
  }
}

static node*
negate_lit(parser_state *p, node *n)
{
  return cons((node*)NODE_NEGATE, n);
}

static node*
cond(node *n)
{
  return n;
}

static node*
ret_args(parser_state *p, node *n)
{
  if (n->cdr) {
    yyerror(p, "block argument should not be given");
    return NULL;
  }
  if (!n->car->cdr) return n->car->car;
  return new_array(p, n->car);
}

static void
assignable(parser_state *p, node *lhs)
{
  if ((int)(intptr_t)lhs->car == NODE_LVAR) {
    local_add(p, sym(lhs->cdr));
  }
}

static node*
var_reference(parser_state *p, node *lhs)
{
  node *n;

  if ((int)(intptr_t)lhs->car == NODE_LVAR) {
    if (!local_var_p(p, sym(lhs->cdr))) {
      n = new_fcall(p, sym(lhs->cdr), 0);
      cons_free(lhs);
      return n;
    }
  }

  return lhs;
}

typedef enum mrb_string_type  string_type;

static node*
new_strterm(parser_state *p, string_type type, int term, int paren)
{
  return cons((node*)(intptr_t)type, cons((node*)0, cons((node*)(intptr_t)paren, (node*)(intptr_t)term)));
}

static void
end_strterm(parser_state *p)
{
  cons_free(p->lex_strterm->cdr->cdr);
  cons_free(p->lex_strterm->cdr);
  cons_free(p->lex_strterm);
  p->lex_strterm = NULL;
}

static parser_heredoc_info *
parsing_heredoc_inf(parser_state *p)
{
  node *nd = p->parsing_heredoc;
  if (nd == NULL)
    return NULL;
  /* mrb_assert(nd->car->car == NODE_HEREDOC); */
  return (parser_heredoc_info*)nd->car->cdr;
}

static void
heredoc_treat_nextline(parser_state *p)
{
  if (p->heredocs_from_nextline == NULL)
    return;
  if (p->parsing_heredoc == NULL) {
    node *n;
    p->parsing_heredoc = p->heredocs_from_nextline;
    p->lex_strterm_before_heredoc = p->lex_strterm;
    p->lex_strterm = new_strterm(p, parsing_heredoc_inf(p)->type, 0, 0);
    n = p->all_heredocs;
    if (n) {
      while (n->cdr)
        n = n->cdr;
      n->cdr = p->parsing_heredoc;
    }
    else {
      p->all_heredocs = p->parsing_heredoc;
    }
  }
  else {
    node *n, *m;
    m = p->heredocs_from_nextline;
    while (m->cdr)
      m = m->cdr;
    n = p->all_heredocs;
    mrb_assert(n != NULL);
    if (n == p->parsing_heredoc) {
      m->cdr = n;
      p->all_heredocs = p->heredocs_from_nextline;
      p->parsing_heredoc = p->heredocs_from_nextline;
    }
    else {
      while (n->cdr != p->parsing_heredoc) {
        n = n->cdr;
        mrb_assert(n != NULL);
      }
      m->cdr = n->cdr;
      n->cdr = p->heredocs_from_nextline;
      p->parsing_heredoc = p->heredocs_from_nextline;
    }
  }
  p->heredocs_from_nextline = NULL;
}

static void
heredoc_end(parser_state *p)
{
  p->parsing_heredoc = p->parsing_heredoc->cdr;
  if (p->parsing_heredoc == NULL) {
    p->lstate = EXPR_BEG;
    p->cmd_start = TRUE;
    end_strterm(p);
    p->lex_strterm = p->lex_strterm_before_heredoc;
    p->lex_strterm_before_heredoc = NULL;
    p->heredoc_end_now = TRUE;
  }
  else {
    /* next heredoc */
    p->lex_strterm->car = (node*)(intptr_t)parsing_heredoc_inf(p)->type;
  }
}
#define is_strterm_type(p,str_func) ((int)(intptr_t)((p)->lex_strterm->car) & (str_func))

/* xxx ----------------------------- */



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 1005 "src/parse.y"
{
    node *nd;
    mrb_sym id;
    int num;
    stack_type stack;
    const struct vtable *vars;
}
/* Line 193 of yacc.c.  */
#line 1352 "/Users/ongaeshi/Documents/mruby-1.1.0/build/host/src/y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1365 "/Users/ongaeshi/Documents/mruby-1.1.0/build/host/src/y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10941

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  154
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  160
/* YYNRULES -- Number of rules.  */
#define YYNRULES  555
/* YYNRULES -- Number of states.  */
#define YYNSTATES  970

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   382

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     153,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   130,     2,     2,     2,   128,   123,     2,
     149,   150,   126,   124,   147,   125,   146,   127,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   118,   152,
     120,   116,   119,   117,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   145,     2,   151,   122,     2,   148,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   143,   121,   144,   131,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   129,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    12,    14,    18,    21,
      23,    24,    30,    35,    38,    40,    42,    46,    49,    50,
      55,    58,    62,    66,    70,    74,    78,    83,    85,    89,
      93,   100,   106,   112,   118,   124,   128,   132,   136,   140,
     142,   146,   150,   152,   156,   160,   164,   167,   169,   171,
     173,   175,   177,   182,   183,   189,   192,   196,   201,   207,
     212,   218,   221,   224,   227,   230,   233,   235,   239,   241,
     245,   247,   250,   254,   260,   263,   268,   271,   276,   278,
     282,   284,   288,   291,   295,   297,   300,   302,   307,   311,
     315,   319,   323,   326,   328,   330,   335,   339,   343,   347,
     351,   354,   356,   358,   360,   363,   365,   369,   371,   373,
     375,   377,   379,   381,   383,   385,   386,   391,   393,   395,
     397,   399,   401,   403,   405,   407,   409,   411,   413,   415,
     417,   419,   421,   423,   425,   427,   429,   431,   433,   435,
     437,   439,   441,   443,   445,   447,   449,   451,   453,   455,
     457,   459,   461,   463,   465,   467,   469,   471,   473,   475,
     477,   479,   481,   483,   485,   487,   489,   491,   493,   495,
     497,   499,   501,   503,   505,   507,   509,   511,   513,   515,
     517,   519,   521,   523,   525,   527,   529,   533,   539,   543,
     549,   556,   562,   568,   574,   580,   585,   589,   593,   597,
     601,   605,   609,   613,   617,   621,   626,   631,   634,   637,
     641,   645,   649,   653,   657,   661,   665,   669,   673,   677,
     681,   685,   689,   692,   695,   699,   703,   707,   711,   718,
     720,   722,   724,   727,   732,   735,   739,   741,   743,   745,
     747,   750,   755,   758,   760,   763,   766,   771,   773,   774,
     777,   780,   783,   785,   787,   790,   794,   799,   804,   810,
     814,   819,   822,   824,   826,   828,   830,   832,   834,   836,
     838,   839,   844,   845,   846,   852,   853,   857,   861,   865,
     868,   872,   876,   878,   883,   887,   889,   894,   898,   901,
     903,   906,   907,   912,   919,   926,   927,   928,   936,   937,
     938,   946,   952,   957,   958,   959,   969,   970,   977,   978,
     979,   988,   989,   995,   996,   997,  1005,  1006,  1007,  1017,
    1019,  1021,  1023,  1025,  1027,  1029,  1031,  1034,  1036,  1038,
    1040,  1046,  1048,  1051,  1053,  1055,  1057,  1061,  1063,  1067,
    1069,  1074,  1081,  1085,  1091,  1094,  1099,  1101,  1105,  1112,
    1121,  1126,  1133,  1138,  1141,  1148,  1151,  1156,  1163,  1166,
    1171,  1174,  1179,  1181,  1183,  1185,  1189,  1191,  1196,  1198,
    1203,  1205,  1209,  1211,  1213,  1218,  1220,  1224,  1228,  1229,
    1235,  1238,  1243,  1249,  1255,  1258,  1263,  1268,  1272,  1276,
    1280,  1283,  1285,  1290,  1291,  1297,  1298,  1304,  1310,  1312,
    1314,  1321,  1323,  1325,  1327,  1329,  1332,  1334,  1337,  1339,
    1341,  1343,  1345,  1347,  1349,  1351,  1354,  1358,  1360,  1363,
    1365,  1366,  1371,  1373,  1376,  1379,  1383,  1386,  1390,  1392,
    1393,  1395,  1397,  1400,  1402,  1405,  1407,  1410,  1412,  1413,
    1418,  1421,  1425,  1427,  1432,  1435,  1437,  1439,  1441,  1443,
    1445,  1448,  1451,  1455,  1457,  1459,  1462,  1465,  1467,  1469,
    1471,  1473,  1475,  1477,  1479,  1481,  1483,  1485,  1487,  1489,
    1491,  1493,  1495,  1497,  1498,  1503,  1506,  1510,  1513,  1520,
    1529,  1534,  1541,  1546,  1553,  1556,  1561,  1568,  1571,  1576,
    1579,  1584,  1586,  1587,  1589,  1591,  1593,  1595,  1597,  1599,
    1601,  1605,  1607,  1611,  1614,  1617,  1620,  1622,  1626,  1628,
    1632,  1634,  1636,  1639,  1641,  1643,  1645,  1648,  1651,  1653,
    1655,  1656,  1661,  1663,  1666,  1668,  1672,  1676,  1679,  1681,
    1683,  1685,  1687,  1689,  1691,  1693,  1695,  1697,  1699,  1701,
    1703,  1704,  1706,  1707,  1709,  1712,  1715,  1716,  1718,  1720,
    1722,  1724,  1725,  1729,  1731,  1734
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,    -1,   156,   157,    -1,   158,   304,    -1,
     313,    -1,   159,    -1,   158,   312,   159,    -1,     1,   159,
      -1,   164,    -1,    -1,    46,   160,   143,   157,   144,    -1,
     162,   249,   227,   252,    -1,   163,   304,    -1,   313,    -1,
     164,    -1,   163,   312,   164,    -1,     1,   164,    -1,    -1,
      45,   185,   165,   185,    -1,    12,   186,    -1,   164,    40,
     168,    -1,   164,    41,   168,    -1,   164,    42,   168,    -1,
     164,    43,   168,    -1,   164,    44,   164,    -1,    47,   143,
     162,   144,    -1,   166,    -1,   174,   116,   169,    -1,   274,
      90,   169,    -1,   223,   145,   195,   307,    90,   169,    -1,
     223,   146,    51,    90,   169,    -1,   223,   146,    55,    90,
     169,    -1,   223,    88,    55,    90,   169,    -1,   223,    88,
      51,    90,   169,    -1,   276,    90,   169,    -1,   181,   116,
     202,    -1,   174,   116,   191,    -1,   174,   116,   202,    -1,
     167,    -1,   181,   116,   169,    -1,   181,   116,   166,    -1,
     169,    -1,   167,    37,   167,    -1,   167,    38,   167,    -1,
      39,   305,   167,    -1,   130,   169,    -1,   190,    -1,   167,
      -1,   173,    -1,   170,    -1,   242,    -1,   242,   303,   301,
     197,    -1,    -1,    97,   172,   233,   162,   144,    -1,   300,
     197,    -1,   300,   197,   171,    -1,   223,   146,   301,   197,
      -1,   223,   146,   301,   197,   171,    -1,   223,    88,   301,
     197,    -1,   223,    88,   301,   197,   171,    -1,    32,   197,
      -1,    31,   197,    -1,    30,   196,    -1,    21,   196,    -1,
      22,   196,    -1,   176,    -1,    92,   175,   306,    -1,   176,
      -1,    92,   175,   306,    -1,   178,    -1,   178,   177,    -1,
     178,    98,   180,    -1,   178,    98,   180,   147,   179,    -1,
     178,    98,    -1,   178,    98,   147,   179,    -1,    98,   180,
      -1,    98,   180,   147,   179,    -1,    98,    -1,    98,   147,
     179,    -1,   180,    -1,    92,   175,   306,    -1,   177,   147,
      -1,   178,   177,   147,    -1,   177,    -1,   178,   177,    -1,
     273,    -1,   223,   145,   195,   307,    -1,   223,   146,    51,
      -1,   223,    88,    51,    -1,   223,   146,    55,    -1,   223,
      88,    55,    -1,    89,    55,    -1,   276,    -1,   273,    -1,
     223,   145,   195,   307,    -1,   223,   146,    51,    -1,   223,
      88,    51,    -1,   223,   146,    55,    -1,   223,    88,    55,
      -1,    89,    55,    -1,   276,    -1,    51,    -1,    55,    -1,
      89,   182,    -1,   182,    -1,   223,    88,   182,    -1,    51,
      -1,    55,    -1,    52,    -1,   188,    -1,   189,    -1,   184,
      -1,   269,    -1,   185,    -1,    -1,   186,   147,   187,   185,
      -1,   121,    -1,   122,    -1,   123,    -1,    72,    -1,    73,
      -1,    74,    -1,    80,    -1,    81,    -1,   119,    -1,    76,
      -1,   120,    -1,    77,    -1,    75,    -1,    86,    -1,    87,
      -1,   124,    -1,   125,    -1,   126,    -1,    98,    -1,   127,
      -1,   128,    -1,    71,    -1,   130,    -1,   131,    -1,    69,
      -1,    70,    -1,    84,    -1,    85,    -1,   148,    -1,    48,
      -1,    49,    -1,    50,    -1,    46,    -1,    47,    -1,    45,
      -1,    37,    -1,     6,    -1,    21,    -1,    19,    -1,     3,
      -1,     5,    -1,    26,    -1,    18,    -1,    17,    -1,    15,
      -1,    14,    -1,    36,    -1,    11,    -1,    25,    -1,     4,
      -1,    22,    -1,    34,    -1,    39,    -1,    38,    -1,    23,
      -1,    13,    -1,    24,    -1,    30,    -1,    33,    -1,    32,
      -1,    16,    -1,    35,    -1,    12,    -1,    20,    -1,    31,
      -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,   181,
     116,   190,    -1,   181,   116,   190,    44,   190,    -1,   274,
      90,   190,    -1,   274,    90,   190,    44,   190,    -1,   223,
     145,   195,   307,    90,   190,    -1,   223,   146,    51,    90,
     190,    -1,   223,   146,    55,    90,   190,    -1,   223,    88,
      51,    90,   190,    -1,   223,    88,    55,    90,   190,    -1,
      89,    55,    90,   190,    -1,   276,    90,   190,    -1,   190,
      82,   190,    -1,   190,    83,   190,    -1,   190,   124,   190,
      -1,   190,   125,   190,    -1,   190,   126,   190,    -1,   190,
     127,   190,    -1,   190,   128,   190,    -1,   190,    71,   190,
      -1,   129,    58,    71,   190,    -1,   129,    59,    71,   190,
      -1,    69,   190,    -1,    70,   190,    -1,   190,   121,   190,
      -1,   190,   122,   190,    -1,   190,   123,   190,    -1,   190,
      72,   190,    -1,   190,   119,   190,    -1,   190,    76,   190,
      -1,   190,   120,   190,    -1,   190,    77,   190,    -1,   190,
      73,   190,    -1,   190,    74,   190,    -1,   190,    75,   190,
      -1,   190,    80,   190,    -1,   190,    81,   190,    -1,   130,
     190,    -1,   131,   190,    -1,   190,    86,   190,    -1,   190,
      87,   190,    -1,   190,    78,   190,    -1,   190,    79,   190,
      -1,   190,   117,   190,   305,   118,   190,    -1,   203,    -1,
     190,    -1,   313,    -1,   201,   308,    -1,   201,   147,   298,
     308,    -1,   298,   308,    -1,   149,   195,   306,    -1,   313,
      -1,   193,    -1,   313,    -1,   196,    -1,   201,   147,    -1,
     201,   147,   298,   147,    -1,   298,   147,    -1,   173,    -1,
     201,   200,    -1,   298,   200,    -1,   201,   147,   298,   200,
      -1,   199,    -1,    -1,   198,   196,    -1,    99,   191,    -1,
     147,   199,    -1,   313,    -1,   191,    -1,    98,   191,    -1,
     201,   147,   191,    -1,   201,   147,    98,   191,    -1,   201,
     147,   262,   191,    -1,   201,   147,   262,    98,   191,    -1,
     201,   147,   191,    -1,   201,   147,    98,   191,    -1,    98,
     191,    -1,   253,    -1,   254,    -1,   258,    -1,   259,    -1,
     260,    -1,   275,    -1,   276,    -1,    52,    -1,    -1,     6,
     204,   161,    15,    -1,    -1,    -1,    93,   205,   167,   206,
     306,    -1,    -1,    93,   207,   306,    -1,    92,   162,   150,
      -1,   223,    88,    55,    -1,    89,    55,    -1,    95,   192,
     151,    -1,    96,   297,   144,    -1,    30,    -1,    31,   149,
     196,   306,    -1,    31,   149,   306,    -1,    31,    -1,    39,
     149,   167,   306,    -1,    39,   149,   306,    -1,   300,   244,
      -1,   243,    -1,   243,   244,    -1,    -1,   100,   208,   238,
     239,    -1,     7,   168,   224,   162,   226,    15,    -1,     8,
     168,   224,   162,   227,    15,    -1,    -1,    -1,     9,   209,
     168,   225,   210,   162,    15,    -1,    -1,    -1,    10,   211,
     168,   225,   212,   162,    15,    -1,    19,   168,   304,   247,
      15,    -1,    19,   304,   247,    15,    -1,    -1,    -1,    11,
     228,    25,   213,   168,   225,   214,   162,    15,    -1,    -1,
       3,   183,   277,   215,   161,    15,    -1,    -1,    -1,     3,
      86,   167,   216,   309,   217,   161,    15,    -1,    -1,     4,
     183,   218,   161,    15,    -1,    -1,    -1,     5,   184,   219,
     220,   279,   161,    15,    -1,    -1,    -1,     5,   295,   303,
     221,   184,   222,   279,   161,    15,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,   203,    -1,   309,    -1,    16,
      -1,   309,    16,    -1,   309,    -1,    27,    -1,   227,    -1,
      17,   168,   224,   162,   226,    -1,   313,    -1,    18,   162,
      -1,   181,    -1,   174,    -1,   282,    -1,    92,   231,   306,
      -1,   229,    -1,   230,   147,   229,    -1,   230,    -1,   230,
     147,    98,   282,    -1,   230,   147,    98,   282,   147,   230,
      -1,   230,   147,    98,    -1,   230,   147,    98,   147,   230,
      -1,    98,   282,    -1,    98,   282,   147,   230,    -1,    98,
      -1,    98,   147,   230,    -1,   284,   147,   288,   147,   291,
     294,    -1,   284,   147,   288,   147,   291,   147,   284,   294,
      -1,   284,   147,   288,   294,    -1,   284,   147,   288,   147,
     284,   294,    -1,   284,   147,   291,   294,    -1,   284,   147,
      -1,   284,   147,   291,   147,   284,   294,    -1,   284,   294,
      -1,   288,   147,   291,   294,    -1,   288,   147,   291,   147,
     284,   294,    -1,   288,   294,    -1,   288,   147,   284,   294,
      -1,   291,   294,    -1,   291,   147,   284,   294,    -1,   293,
      -1,   313,    -1,   234,    -1,   121,   235,   121,    -1,    79,
      -1,   121,   232,   235,   121,    -1,   305,    -1,   305,   152,
     236,   305,    -1,   237,    -1,   236,   147,   237,    -1,    51,
      -1,   281,    -1,   149,   280,   235,   150,    -1,   280,    -1,
     108,   162,   144,    -1,    29,   162,    15,    -1,    -1,    28,
     241,   233,   162,    15,    -1,   173,   240,    -1,   242,   303,
     301,   194,    -1,   242,   303,   301,   194,   244,    -1,   242,
     303,   301,   197,   240,    -1,   300,   193,    -1,   223,   146,
     301,   194,    -1,   223,    88,   301,   193,    -1,   223,    88,
     302,    -1,   223,   146,   193,    -1,   223,    88,   193,    -1,
      32,   193,    -1,    32,    -1,   223,   145,   195,   307,    -1,
      -1,   143,   245,   233,   162,   144,    -1,    -1,    26,   246,
     233,   162,    15,    -1,    20,   201,   224,   162,   248,    -1,
     227,    -1,   247,    -1,    13,   250,   251,   224,   162,   249,
      -1,   313,    -1,   191,    -1,   202,    -1,   313,    -1,    91,
     181,    -1,   313,    -1,    14,   162,    -1,   313,    -1,   272,
      -1,   268,    -1,   267,    -1,   271,    -1,    60,    -1,    63,
      -1,   105,    63,    -1,   105,   255,    63,    -1,   256,    -1,
     255,   256,    -1,    65,    -1,    -1,    64,   257,   162,   144,
      -1,   111,    -1,   112,   262,    -1,   106,    61,    -1,   106,
     255,    61,    -1,   102,    62,    -1,   102,   255,    62,    -1,
     109,    -1,    -1,   262,    -1,   263,    -1,   262,   263,    -1,
     110,    -1,   264,   110,    -1,   265,    -1,   264,   265,    -1,
     114,    -1,    -1,   113,   266,   162,   144,    -1,   103,    63,
      -1,   103,   255,    63,    -1,   269,    -1,   101,   105,   256,
      63,    -1,   101,   270,    -1,   184,    -1,    54,    -1,    53,
      -1,    56,    -1,    63,    -1,   105,    63,    -1,   104,    63,
      -1,   104,   255,    63,    -1,    58,    -1,    59,    -1,   129,
      58,    -1,   129,    59,    -1,    51,    -1,    54,    -1,    53,
      -1,    56,    -1,    55,    -1,   273,    -1,   273,    -1,    34,
      -1,    33,    -1,    35,    -1,    36,    -1,    49,    -1,    48,
      -1,    66,    -1,    67,    -1,   309,    -1,    -1,   120,   278,
     168,   309,    -1,     1,   309,    -1,   149,   280,   306,    -1,
     280,   309,    -1,   284,   147,   289,   147,   291,   294,    -1,
     284,   147,   289,   147,   291,   147,   284,   294,    -1,   284,
     147,   289,   294,    -1,   284,   147,   289,   147,   284,   294,
      -1,   284,   147,   291,   294,    -1,   284,   147,   291,   147,
     284,   294,    -1,   284,   294,    -1,   289,   147,   291,   294,
      -1,   289,   147,   291,   147,   284,   294,    -1,   289,   294,
      -1,   289,   147,   284,   294,    -1,   291,   294,    -1,   291,
     147,   284,   294,    -1,   293,    -1,    -1,    55,    -1,    54,
      -1,    53,    -1,    56,    -1,   281,    -1,    51,    -1,   282,
      -1,    92,   231,   306,    -1,   283,    -1,   284,   147,   283,
      -1,    51,   116,    -1,   285,   191,    -1,   285,   223,    -1,
     287,    -1,   288,   147,   287,    -1,   286,    -1,   289,   147,
     286,    -1,   126,    -1,    98,    -1,   290,    51,    -1,   290,
      -1,   123,    -1,    99,    -1,   292,    51,    -1,   147,   293,
      -1,   313,    -1,   275,    -1,    -1,   149,   296,   167,   306,
      -1,   313,    -1,   298,   308,    -1,   299,    -1,   298,   147,
     299,    -1,   191,    91,   191,    -1,    57,   191,    -1,    51,
      -1,    55,    -1,    52,    -1,    51,    -1,    55,    -1,    52,
      -1,   188,    -1,    51,    -1,    52,    -1,   188,    -1,   146,
      -1,    88,    -1,    -1,   312,    -1,    -1,   310,    -1,   305,
     150,    -1,   305,   151,    -1,    -1,   310,    -1,   147,    -1,
     152,    -1,   310,    -1,    -1,   153,   311,   261,    -1,   309,
      -1,   312,   152,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1166,  1166,  1166,  1177,  1183,  1187,  1192,  1196,  1202,
    1204,  1203,  1215,  1242,  1248,  1252,  1257,  1261,  1267,  1267,
    1271,  1275,  1279,  1283,  1287,  1291,  1295,  1300,  1301,  1305,
    1309,  1313,  1317,  1321,  1326,  1330,  1335,  1339,  1343,  1347,
    1350,  1354,  1361,  1362,  1366,  1370,  1374,  1378,  1381,  1388,
    1389,  1392,  1393,  1397,  1396,  1409,  1413,  1418,  1422,  1427,
    1431,  1436,  1440,  1444,  1448,  1452,  1458,  1462,  1468,  1469,
    1475,  1479,  1483,  1487,  1491,  1495,  1499,  1503,  1507,  1511,
    1517,  1518,  1524,  1528,  1534,  1538,  1544,  1548,  1552,  1556,
    1560,  1564,  1570,  1576,  1583,  1587,  1591,  1595,  1599,  1603,
    1609,  1615,  1622,  1626,  1629,  1633,  1637,  1643,  1644,  1645,
    1646,  1651,  1658,  1659,  1662,  1666,  1666,  1672,  1673,  1674,
    1675,  1676,  1677,  1678,  1679,  1680,  1681,  1682,  1683,  1684,
    1685,  1686,  1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,
    1695,  1696,  1697,  1698,  1699,  1700,  1703,  1703,  1703,  1704,
    1704,  1705,  1705,  1705,  1706,  1706,  1706,  1706,  1707,  1707,
    1707,  1708,  1708,  1708,  1709,  1709,  1709,  1709,  1710,  1710,
    1710,  1710,  1711,  1711,  1711,  1711,  1712,  1712,  1712,  1712,
    1713,  1713,  1713,  1713,  1714,  1714,  1717,  1721,  1725,  1729,
    1733,  1737,  1741,  1745,  1749,  1754,  1759,  1764,  1768,  1772,
    1776,  1780,  1784,  1788,  1792,  1796,  1800,  1804,  1808,  1812,
    1816,  1820,  1824,  1828,  1832,  1836,  1840,  1844,  1848,  1852,
    1856,  1860,  1864,  1868,  1872,  1876,  1880,  1884,  1888,  1892,
    1898,  1905,  1906,  1911,  1915,  1922,  1928,  1929,  1932,  1933,
    1934,  1939,  1944,  1951,  1956,  1961,  1966,  1971,  1978,  1978,
    1989,  1995,  1999,  2005,  2010,  2015,  2019,  2023,  2027,  2033,
    2037,  2041,  2047,  2048,  2049,  2050,  2051,  2052,  2053,  2054,
    2059,  2058,  2070,  2074,  2069,  2079,  2079,  2083,  2087,  2091,
    2095,  2100,  2105,  2109,  2113,  2117,  2121,  2125,  2129,  2133,
    2134,  2140,  2139,  2152,  2160,  2168,  2168,  2168,  2175,  2175,
    2175,  2182,  2188,  2193,  2195,  2192,  2204,  2202,  2218,  2223,
    2216,  2238,  2236,  2251,  2255,  2250,  2270,  2276,  2269,  2291,
    2295,  2299,  2303,  2309,  2316,  2317,  2318,  2321,  2322,  2325,
    2326,  2334,  2335,  2341,  2345,  2348,  2352,  2358,  2362,  2368,
    2372,  2376,  2380,  2384,  2388,  2392,  2396,  2400,  2406,  2410,
    2414,  2418,  2422,  2426,  2430,  2434,  2438,  2442,  2446,  2450,
    2454,  2458,  2462,  2468,  2469,  2476,  2480,  2484,  2491,  2495,
    2501,  2502,  2505,  2510,  2513,  2517,  2523,  2527,  2534,  2533,
    2546,  2556,  2560,  2565,  2572,  2576,  2580,  2584,  2588,  2592,
    2596,  2600,  2604,  2611,  2610,  2623,  2622,  2636,  2644,  2653,
    2656,  2663,  2666,  2670,  2671,  2674,  2678,  2681,  2685,  2688,
    2689,  2690,  2691,  2694,  2695,  2696,  2700,  2706,  2707,  2713,
    2718,  2717,  2728,  2732,  2738,  2742,  2748,  2752,  2758,  2761,
    2762,  2765,  2766,  2769,  2775,  2781,  2782,  2785,  2792,  2791,
    2805,  2809,  2816,  2820,  2827,  2834,  2835,  2836,  2837,  2838,
    2842,  2848,  2852,  2858,  2859,  2860,  2864,  2870,  2874,  2878,
    2882,  2886,  2892,  2898,  2902,  2906,  2910,  2914,  2918,  2925,
    2934,  2935,  2938,  2943,  2942,  2951,  2958,  2964,  2970,  2974,
    2978,  2982,  2986,  2990,  2994,  2998,  3002,  3006,  3010,  3014,
    3018,  3022,  3027,  3033,  3038,  3043,  3048,  3055,  3059,  3066,
    3070,  3076,  3080,  3086,  3093,  3099,  3105,  3109,  3115,  3119,
    3125,  3126,  3129,  3134,  3141,  3142,  3145,  3152,  3156,  3163,
    3168,  3168,  3193,  3194,  3200,  3205,  3211,  3215,  3221,  3222,
    3223,  3226,  3227,  3228,  3229,  3232,  3233,  3234,  3237,  3238,
    3241,  3242,  3245,  3246,  3249,  3252,  3255,  3256,  3257,  3260,
    3261,  3265,  3264,  3271,  3272,  3276
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "keyword_class", "keyword_module",
  "keyword_def", "keyword_begin", "keyword_if", "keyword_unless",
  "keyword_while", "keyword_until", "keyword_for", "keyword_undef",
  "keyword_rescue", "keyword_ensure", "keyword_end", "keyword_then",
  "keyword_elsif", "keyword_else", "keyword_case", "keyword_when",
  "keyword_break", "keyword_next", "keyword_redo", "keyword_retry",
  "keyword_in", "keyword_do", "keyword_do_cond", "keyword_do_block",
  "keyword_do_LAMBDA", "keyword_return", "keyword_yield", "keyword_super",
  "keyword_self", "keyword_nil", "keyword_true", "keyword_false",
  "keyword_and", "keyword_or", "keyword_not", "modifier_if",
  "modifier_unless", "modifier_while", "modifier_until", "modifier_rescue",
  "keyword_alias", "keyword_BEGIN", "keyword_END", "keyword__LINE__",
  "keyword__FILE__", "keyword__ENCODING__", "tIDENTIFIER", "tFID", "tGVAR",
  "tIVAR", "tCONSTANT", "tCVAR", "tLABEL", "tINTEGER", "tFLOAT", "tCHAR",
  "tXSTRING", "tREGEXP", "tSTRING", "tSTRING_PART", "tSTRING_MID",
  "tNTH_REF", "tBACK_REF", "tREGEXP_END", "tUPLUS", "tUMINUS", "tPOW",
  "tCMP", "tEQ", "tEQQ", "tNEQ", "tGEQ", "tLEQ", "tANDOP", "tOROP",
  "tMATCH", "tNMATCH", "tDOT2", "tDOT3", "tAREF", "tASET", "tLSHFT",
  "tRSHFT", "tCOLON2", "tCOLON3", "tOP_ASGN", "tASSOC", "tLPAREN",
  "tLPAREN_ARG", "tRPAREN", "tLBRACK", "tLBRACE", "tLBRACE_ARG", "tSTAR",
  "tAMPER", "tLAMBDA", "tSYMBEG", "tREGEXP_BEG", "tWORDS_BEG",
  "tSYMBOLS_BEG", "tSTRING_BEG", "tXSTRING_BEG", "tSTRING_DVAR", "tLAMBEG",
  "tHEREDOC_BEG", "tHEREDOC_END", "tLITERAL_DELIM", "tHD_LITERAL_DELIM",
  "tHD_STRING_PART", "tHD_STRING_MID", "tLOWEST", "'='", "'?'", "':'",
  "'>'", "'<'", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "tUMINUS_NUM", "'!'", "'~'", "idNULL", "idRespond_to", "idIFUNC",
  "idCFUNC", "id_core_set_method_alias", "id_core_set_variable_alias",
  "id_core_undef_method", "id_core_define_method",
  "id_core_define_singleton_method", "id_core_set_postexe", "tLAST_TOKEN",
  "'{'", "'}'", "'['", "'.'", "','", "'`'", "'('", "')'", "']'", "';'",
  "'\\n'", "$accept", "program", "@1", "top_compstmt", "top_stmts",
  "top_stmt", "@2", "bodystmt", "compstmt", "stmts", "stmt", "@3",
  "command_asgn", "expr", "expr_value", "command_call", "block_command",
  "cmd_brace_block", "@4", "command", "mlhs", "mlhs_inner", "mlhs_basic",
  "mlhs_item", "mlhs_list", "mlhs_post", "mlhs_node", "lhs", "cname",
  "cpath", "fname", "fsym", "undef_list", "@5", "op", "reswords", "arg",
  "arg_value", "aref_args", "paren_args", "opt_paren_args",
  "opt_call_args", "call_args", "command_args", "@6", "block_arg",
  "opt_block_arg", "args", "mrhs", "primary", "@7", "@8", "@9", "@10",
  "@11", "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20",
  "@21", "@22", "@23", "@24", "@25", "primary_value", "then", "do",
  "if_tail", "opt_else", "for_var", "f_marg", "f_marg_list", "f_margs",
  "block_param", "opt_block_param", "block_param_def", "opt_bv_decl",
  "bv_decls", "bvar", "f_larglist", "lambda_body", "do_block", "@26",
  "block_call", "method_call", "brace_block", "@27", "@28", "case_body",
  "cases", "opt_rescue", "exc_list", "exc_var", "opt_ensure", "literal",
  "string", "string_rep", "string_interp", "@29", "xstring", "regexp",
  "heredoc", "opt_heredoc_bodies", "heredoc_bodies", "heredoc_body",
  "heredoc_string_rep", "heredoc_string_interp", "@30", "words", "symbol",
  "basic_symbol", "sym", "symbols", "numeric", "variable", "var_lhs",
  "var_ref", "backref", "superclass", "@31", "f_arglist", "f_args",
  "f_bad_arg", "f_norm_arg", "f_arg_item", "f_arg", "f_opt_asgn", "f_opt",
  "f_block_opt", "f_block_optarg", "f_optarg", "restarg_mark",
  "f_rest_arg", "blkarg_mark", "f_block_arg", "opt_f_block_arg",
  "singleton", "@32", "assoc_list", "assocs", "assoc", "operation",
  "operation2", "operation3", "dot_or_colon", "opt_terms", "opt_nl",
  "rparen", "rbracket", "trailer", "term", "nl", "@33", "terms", "none", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,    61,    63,    58,    62,
      60,   124,    94,    38,    43,    45,    42,    47,    37,   371,
      33,   126,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   123,   125,    91,    46,    44,    96,    40,
      41,    93,    59,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   154,   156,   155,   157,   158,   158,   158,   158,   159,
     160,   159,   161,   162,   163,   163,   163,   163,   165,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     166,   166,   167,   167,   167,   167,   167,   167,   168,   169,
     169,   170,   170,   172,   171,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     177,   177,   178,   178,   179,   179,   180,   180,   180,   180,
     180,   180,   180,   180,   181,   181,   181,   181,   181,   181,
     181,   181,   182,   182,   183,   183,   183,   184,   184,   184,
     184,   184,   185,   185,   186,   187,   186,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     191,   192,   192,   192,   192,   193,   194,   194,   195,   195,
     195,   195,   195,   196,   196,   196,   196,   196,   198,   197,
     199,   200,   200,   201,   201,   201,   201,   201,   201,   202,
     202,   202,   203,   203,   203,   203,   203,   203,   203,   203,
     204,   203,   205,   206,   203,   207,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   208,   203,   203,   203,   209,   210,   203,   211,   212,
     203,   203,   203,   213,   214,   203,   215,   203,   216,   217,
     203,   218,   203,   219,   220,   203,   221,   222,   203,   203,
     203,   203,   203,   223,   224,   224,   224,   225,   225,   226,
     226,   227,   227,   228,   228,   229,   229,   230,   230,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   233,   233,   234,   234,   234,   235,   235,
     236,   236,   237,   237,   238,   238,   239,   239,   241,   240,
     242,   242,   242,   242,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   245,   244,   246,   244,   247,   248,   248,
     249,   249,   250,   250,   250,   251,   251,   252,   252,   253,
     253,   253,   253,   254,   254,   254,   254,   255,   255,   256,
     257,   256,   256,   256,   258,   258,   259,   259,   260,   261,
     261,   262,   262,   263,   263,   264,   264,   265,   266,   265,
     267,   267,   268,   268,   269,   270,   270,   270,   270,   270,
     270,   271,   271,   272,   272,   272,   272,   273,   273,   273,
     273,   273,   274,   275,   275,   275,   275,   275,   275,   275,
     276,   276,   277,   278,   277,   277,   279,   279,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   281,   281,   281,   281,   282,   282,   283,
     283,   284,   284,   285,   286,   287,   288,   288,   289,   289,
     290,   290,   291,   291,   292,   292,   293,   294,   294,   295,
     296,   295,   297,   297,   298,   298,   299,   299,   300,   300,
     300,   301,   301,   301,   301,   302,   302,   302,   303,   303,
     304,   304,   305,   305,   306,   307,   308,   308,   308,   309,
     309,   311,   310,   312,   312,   313
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     3,     2,     1,
       0,     5,     4,     2,     1,     1,     3,     2,     0,     4,
       2,     3,     3,     3,     3,     3,     4,     1,     3,     3,
       6,     5,     5,     5,     5,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     2,     1,     1,     1,
       1,     1,     4,     0,     5,     2,     3,     4,     5,     4,
       5,     2,     2,     2,     2,     2,     1,     3,     1,     3,
       1,     2,     3,     5,     2,     4,     2,     4,     1,     3,
       1,     3,     2,     3,     1,     2,     1,     4,     3,     3,
       3,     3,     2,     1,     1,     4,     3,     3,     3,     3,
       2,     1,     1,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     3,     5,
       6,     5,     5,     5,     5,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     6,     1,
       1,     1,     2,     4,     2,     3,     1,     1,     1,     1,
       2,     4,     2,     1,     2,     2,     4,     1,     0,     2,
       2,     2,     1,     1,     2,     3,     4,     4,     5,     3,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     0,     5,     0,     3,     3,     3,     2,
       3,     3,     1,     4,     3,     1,     4,     3,     2,     1,
       2,     0,     4,     6,     6,     0,     0,     7,     0,     0,
       7,     5,     4,     0,     0,     9,     0,     6,     0,     0,
       8,     0,     5,     0,     0,     7,     0,     0,     9,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       5,     1,     2,     1,     1,     1,     3,     1,     3,     1,
       4,     6,     3,     5,     2,     4,     1,     3,     6,     8,
       4,     6,     4,     2,     6,     2,     4,     6,     2,     4,
       2,     4,     1,     1,     1,     3,     1,     4,     1,     4,
       1,     3,     1,     1,     4,     1,     3,     3,     0,     5,
       2,     4,     5,     5,     2,     4,     4,     3,     3,     3,
       2,     1,     4,     0,     5,     0,     5,     5,     1,     1,
       6,     1,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       0,     4,     1,     2,     2,     3,     2,     3,     1,     0,
       1,     1,     2,     1,     2,     1,     2,     1,     0,     4,
       2,     3,     1,     4,     2,     1,     1,     1,     1,     1,
       2,     2,     3,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     2,     3,     2,     6,     8,
       4,     6,     4,     6,     2,     4,     6,     2,     4,     2,
       4,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     2,     2,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     1,     2,     2,     1,     1,
       0,     4,     1,     2,     1,     3,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     1,     2,     2,     0,     1,     1,     1,
       1,     0,     3,     1,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,   270,     0,
       0,   295,   298,     0,     0,   540,   319,   320,   321,   322,
     282,   248,   248,   465,   464,   466,   467,   542,     0,    10,
       0,   469,   468,   457,   530,   459,   458,   461,   460,   453,
     454,   413,   414,   470,   471,     0,     0,     0,     0,   272,
     555,   555,    78,   291,     0,     0,     0,     0,     0,     0,
     428,     0,     0,     0,     3,   540,     6,     9,    27,    39,
      42,    50,    49,     0,    66,     0,    70,    80,     0,    47,
     229,     0,    51,   289,   262,   263,   264,   265,   266,   411,
     410,   442,   412,   409,   463,     0,   267,   268,   248,     5,
       8,   319,   320,   282,   285,   391,     0,   102,   103,     0,
       0,     0,     0,   105,     0,   323,     0,   463,   268,     0,
     311,   156,   166,   157,   153,   182,   183,   184,   185,   164,
     179,   172,   162,   161,   177,   160,   159,   155,   180,   154,
     167,   171,   173,   165,   158,   174,   181,   176,   175,   168,
     178,   163,   152,   170,   169,   151,   149,   150,   146,   147,
     148,   107,   109,   108,   141,   142,   138,   120,   121,   122,
     129,   126,   128,   123,   124,   143,   144,   130,   131,   135,
     125,   127,   117,   118,   119,   132,   133,   134,   136,   137,
     139,   140,   145,   520,   313,   110,   111,   519,     0,     0,
       0,    48,     0,     0,     0,   463,     0,   268,     0,     0,
       0,     0,   334,   333,     0,     0,   463,   268,   175,   168,
     178,   163,   146,   147,   107,   108,     0,   112,   114,    20,
     113,   549,   551,   540,     0,   553,   550,   541,     0,     0,
       0,     0,   243,   230,   253,    64,   247,   555,   555,   524,
      65,    63,   542,    62,     0,   555,   390,    61,   542,     0,
     543,    18,     0,     0,   207,     0,   208,   279,     0,     0,
       0,   540,    15,   542,    68,    14,     0,   542,     0,   546,
     546,   231,     0,     0,   546,   522,     0,     0,    76,     0,
      86,    93,   492,   447,   446,   448,   449,     0,   445,   444,
     426,   420,   419,   422,     0,     0,   417,   440,     0,   451,
       0,   415,     0,   424,     0,   455,   456,    46,   222,   223,
       4,   541,     0,     0,     0,     0,     0,     0,     0,   378,
     380,     0,    82,     0,    74,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   555,     0,   539,   538,     0,   395,
     393,   290,     0,     0,   384,    55,   288,   308,   102,   103,
     104,   455,   456,     0,   473,   306,   472,     0,   555,     0,
       0,     0,   314,   316,     0,   555,   279,   325,     0,   324,
       0,     0,   555,     0,     0,     0,     0,     0,     0,   279,
       0,   555,     0,   303,     0,   115,   429,     0,     0,     0,
     554,   527,   254,   250,     0,     0,   244,   252,     0,   245,
     542,     0,   284,   249,   542,   239,   555,   555,   238,   542,
     287,    45,     0,     0,     0,     0,     0,     0,    17,   542,
     277,    13,   541,    67,   273,   276,   280,   548,   232,   547,
     548,   234,   281,   523,    92,    84,     0,    79,     0,     0,
     555,     0,   498,   495,   494,   493,   496,     0,   511,   515,
     514,   510,   492,     0,   375,   497,   499,   501,   555,     0,
     508,   555,   513,   555,     0,   491,   450,     0,     0,   433,
     438,   437,   423,   431,     0,   435,   427,   418,   441,   452,
     416,   425,     0,     0,     7,    21,    22,    23,    24,    25,
      43,    44,   555,     0,    28,    37,     0,    38,   542,     0,
      72,    83,    41,    40,     0,   186,   253,    36,   204,   212,
     217,   218,   219,   214,   216,   226,   227,   220,   221,   197,
     198,   224,   225,   542,   213,   215,   209,   210,   211,   199,
     200,   201,   202,   203,   531,   536,   532,   537,   389,   248,
     387,   542,   531,   533,   532,   534,   388,   248,   531,   532,
     248,   555,   555,    29,   188,    35,   196,    53,    56,     0,
     475,     0,     0,   102,   103,   106,     0,   542,   555,     0,
     542,   492,     0,   271,   555,   555,   401,   555,   326,   186,
     535,   532,   542,   531,   532,   555,   328,   296,   327,   299,
     535,   278,   542,   531,   532,     0,     0,   552,   430,     0,
       0,   302,   526,     0,   255,   251,     0,   555,   525,   283,
     544,   235,   240,   242,   286,    19,     0,    26,   195,    69,
      16,   542,   546,    85,    77,    89,    91,   542,   531,   532,
     503,   498,     0,   346,   337,   339,   542,   335,   542,     0,
       0,   292,     0,   484,   518,   504,     0,   487,   512,     0,
     489,   516,   443,     0,     0,   432,   434,   436,   205,   206,
     366,   542,     0,   364,   363,   261,     0,    81,    75,     0,
       0,     0,     0,     0,     0,   386,    59,     0,   392,     0,
       0,   237,   385,    57,   236,   381,    52,     0,     0,     0,
     555,   309,     0,     0,   392,   312,   521,   492,     0,     0,
     317,   402,   403,   555,   404,     0,   555,   331,     0,     0,
     329,     0,     0,   392,     0,     0,     0,     0,     0,   392,
       0,   116,   301,     0,     0,   256,     0,   257,   246,   555,
      11,   274,   233,    87,   542,     0,   344,     0,   500,     0,
     368,     0,     0,   502,   555,   555,   517,   555,   509,   555,
     555,   421,     0,   542,     0,   555,     0,   506,   555,   555,
     362,     0,     0,   259,    73,   187,     0,    34,   193,    33,
     194,    60,   545,     0,    31,   191,    32,   192,    58,   382,
     383,     0,     0,   189,     0,     0,   474,   307,   542,     0,
     477,   492,     0,     0,   406,   332,     0,    12,   408,     0,
     293,     0,   294,     0,     0,   304,   255,   555,   258,   241,
     336,   347,     0,   342,   338,   374,     0,   377,   376,     0,
     480,     0,   482,     0,   488,     0,   485,   490,   439,     0,
     365,   353,   355,     0,   505,     0,   358,     0,   360,   379,
     260,   228,    30,   190,   396,   394,     0,     0,   476,   315,
       0,     0,   405,     0,    94,   101,     0,   407,     0,   297,
     300,     0,   398,   399,   397,     0,   345,     0,   340,   372,
     542,   370,   373,   555,   555,   555,   555,   367,   555,   555,
     279,     0,   555,   507,   555,   555,    54,   310,     0,   100,
       0,   555,     0,   555,   555,     0,   343,     0,     0,   369,
     481,     0,   478,   483,   486,     0,   350,     0,   352,   535,
     278,   359,     0,   356,   361,   318,   535,    99,   542,   531,
     532,   400,   330,   305,   341,   371,   555,   555,   555,   555,
     555,   392,   479,   351,     0,   348,   354,   357,   555,   349
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    64,    65,    66,   262,   394,   395,   271,
     272,   442,    68,    69,   202,    70,    71,   588,   720,    72,
      73,   273,    74,    75,    76,   467,    77,   203,   113,   114,
     227,   228,   229,   626,   195,   196,    79,   244,   278,   568,
     712,   434,   435,   253,   254,   246,   426,   436,   527,    80,
     199,   276,   651,   277,   292,   209,   747,   210,   748,   625,
     891,   592,   589,   815,   390,   392,   601,   602,   821,   265,
     398,   617,   739,   740,   215,   664,   665,   666,   783,   692,
     693,   769,   900,   901,   483,   671,   330,   522,    82,    83,
     376,   582,   581,   419,   894,   605,   733,   823,   827,    84,
      85,   305,   306,   498,    86,    87,    88,   627,   636,   503,
     504,   505,   684,    89,    90,    91,   299,    92,    93,   205,
     206,    96,   207,   385,   591,   728,   729,   485,   486,   487,
     488,   489,   490,   787,   788,   491,   492,   493,   494,   776,
     673,   198,   391,   283,   437,   249,   119,   596,   570,   368,
     234,   431,   432,   708,   458,   399,   260,   416,   237,   275
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -763
static const yytype_int16 yypact[] =
{
    -763,   120,  2670,  -763,  7298,  9106,  9433,  5605,  -763,  8767,
    8767,  -763,  -763,  9215,  6691,  5113,  7976,  7976,  -763,  -763,
    7976,  3331,  2908,  -763,  -763,  -763,  -763,    26,  6691,  -763,
       9,  -763,  -763,  5736,  3049,  -763,  -763,  5865,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  8880,  8880,    90,  4462,   -22,
    8089,  8315,  6967,  -763,  6399,   584,   717,   907,   943,   659,
    -763,   272,  8993,  8880,  -763,   197,  -763,  1023,  -763,   519,
    -763,  -763,   119,    45,  -763,    11,  9324,  -763,   115,  3169,
     173,   228,    28,    81,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,   398,    87,  -763,   439,    44,  -763,
    -763,  -763,  -763,  -763,    21,    85,   100,   350,   394,  8767,
     278,  4597,   540,  -763,    58,  -763,   271,  -763,  -763,    44,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,    38,    49,
      54,    61,  -763,  -763,  -763,  -763,  -763,  -763,    97,   198,
    -763,   218,  -763,   232,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,    28,  3668,
      99,   519,    74,   138,   320,    24,   203,    40,    74,  8767,
    8767,   262,  -763,  -763,   331,   317,    52,    68,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  6545,  -763,  -763,   225,
    -763,  -763,  -763,   197,   325,  -763,  -763,   229,  8880,  8880,
    8880,  8880,  -763,  3169,   292,  -763,  -763,   243,   250,  -763,
    -763,  -763,  5000,  -763,  7976,  7976,  -763,  -763,  5228,  8767,
    -763,  -763,   256,  4732,  -763,   361,   330,   445,  7524,  4462,
     280,   197,  1023,   268,   326,  -763,  8767,   268,   304,   174,
     179,  -763,   292,   319,   179,  -763,   415,  9542,   334,   363,
     366,   379,   748,  -763,  -763,  -763,  -763,   971,  -763,  -763,
    -763,  -763,  -763,  -763,   370,   625,  -763,  -763,   975,  -763,
     982,  -763,  1039,  -763,   733,   419,   421,  -763,  -763,  -763,
    -763,  5341,  8767,  8767,  8767,  8767,  7524,  8767,  8767,  -763,
    -763,  8428,  -763,  4462,  7076,   338,  8428,  8880,  8880,  8880,
    8880,  8880,  8880,  8880,  8880,  8880,  8880,  8880,  8880,  8880,
    8880,  8880,  8880,  8880,  8880,  8880,  8880,  8880,  8880,  8880,
    8880,  8880,  8880,  2210,  7976,  9821,  -763,  -763, 10793,  -763,
    -763,  -763,  8993,  8993,  -763,   400,  -763,   519,  -763,   387,
    -763,  -763,  -763,   197,  -763,  -763,  -763,  9902,  7976,  9983,
    3668,  8767,  -763,  -763,   486,   490,    65,  -763,  3807,   497,
    8880, 10064,  7976, 10145,  8880,  8880,  4079,    60,    60,   104,
   10226,  7976, 10307,  -763,   452,  -763,   370,   325,  8541,   503,
    -763,  -763,  -763,  -763,  8880,  7185,  -763,  -763,  8202,  -763,
     268,   371,  -763,  -763,   268,  -763,   376,   389,  -763,   129,
    -763,  -763,  6691,  4194,   382, 10064, 10145,  8880,  1023,   268,
    -763,  -763,  5455,   391,   519,  -763,  -763,  7411,  -763,  -763,
    8315,  -763,  -763,  -763,   387,    11,  9542,  -763,  9542, 10388,
    7976, 10469,   425,  -763,  -763,  -763,  -763,   797,  -763,  -763,
    -763,  -763,   757,    80,  -763,  -763,  -763,  -763,   397,  8880,
    -763,   401,   514,   429,   518,  -763,  -763,   525,  4732,  -763,
    -763,  -763,   370,  -763,   480,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  8880,  8880,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,    29,  8880,  -763,   434,   448,  -763,   268,  9542,
     453,  -763,  -763,  -763,   509,  2107,  -763,  -763,   330,  1778,
    1778,  1778,  1778,  1278,  1278,  6710,  1338,  1778,  1778,  9758,
    9758,   583,   583,  2455,  1278,  1278,   735,   735,   813,    64,
      64,   330,   330,   330,  3423,  6123,  3515,  6252,  -763,    85,
    -763,   268,   524,  -763,   537,  -763,  -763,  3190,  -763,  -763,
    1238,    29,    29,  -763,  2887,  -763,  3169,  -763,  -763,   197,
    -763,  8767,  3668,   496,    37,  -763,    85,   268,    85,   632,
     129,   997,  6837,  -763,  8654,   618,  -763,   674,  -763,  3028,
    5994,  2767,   268,   279,   294,   618,  -763,  -763,  -763,  -763,
     140,   147,   268,   132,   151,  8767,  6691,  -763,   370,   643,
      67,  -763,  -763,  8880,   292,  -763,  7637,   250,  -763,  -763,
    -763,  -763,  7185,  8202,  -763,  -763,   516,  -763,  3169,    -6,
    1023,   268,   179,   338,  -763,   496,    37,   268,   238,   309,
    -763,  -763,   797,   556,  -763,   517,   268,  -763,   268,  4885,
    4732,  -763,   757,  -763,  -763,  -763,   757,  -763,  -763,   877,
    -763,  -763,  -763,   534,  4732,  -763,  -763,  -763,   330,   330,
    -763,   837,  4885,  -763,  -763,   522,  7750,  -763,  -763,  9542,
    8993,  8880,   562,  8993,  8993,  -763,   400,   531,   547,  8993,
    8993,  -763,  -763,   400,  -763,    81,   119,  4885,  4732,  8880,
      29,  -763,   197,   673,  -763,  -763,  -763,   757,  3668,   197,
    -763,   434,  -763,   609,  -763,  4347,   688,  -763,  8767,   702,
    -763,  8880,  8880,   353,  8880,  8880,   704,  4885,  4885,   155,
      60,  -763,  -763,  7863,  3943,  -763,  8880,  -763,  -763,   574,
    -763,  -763,  -763,   315,   268,   896,   575,  1139,  -763,   576,
     573,   712,   586,  -763,   585,   592,  -763,   593,  -763,   595,
     593,  -763,   601,   268,   629,   599,  9651,  -763,   605,   606,
    -763,   739,  8880,   612,  -763,  3169,  8880,  -763,  3169,  -763,
    3169,  -763,  -763,  8993,  -763,  3169,  -763,  3169,  -763,  -763,
    -763,   741,   616,  3169,  4732,  3668,  -763,  -763,   268,   747,
    -763,   997,  9760,    74,  -763,  -763,  4885,  -763,  -763,    74,
    -763,  8880,  -763,   749,   751,  -763,  -763,    93,  -763,  8202,
    -763,   620,   896,   621,  -763,  -763,  1073,  -763,  -763,   757,
    -763,   877,  -763,   877,  -763,   877,  -763,  -763,  -763,   655,
    -763,   757,  -763,   724,   414,   757,  -763,   877,  -763,  -763,
     637,  3169,  -763,  3169,  -763,  -763,   641,   773,  -763,  -763,
    3668,   737,  -763,   422,   366,   379,  3668,  -763,  3807,  -763,
    -763,  4885,  -763,  -763,  -763,   896,   620,   896,   642,  -763,
     213,  -763,  -763,   593,   653,   593,   593,  -763,   658,   662,
    -763, 10550,   593,  -763,   667,   593,  -763,  -763,   775,   387,
   10631,  7976, 10712,   490,   674,   800,   620,   896,  1073,  -763,
    -763,   877,  -763,  -763,  -763,   757,  -763,   877,  -763,   668,
     670,  -763,   877,  -763,  -763,  -763,   128,    37,   268,    84,
     103,  -763,  -763,  -763,   620,  -763,   593,   593,   669,   593,
     593,   118,  -763,  -763,   877,  -763,  -763,  -763,   593,  -763
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -763,  -763,  -763,   380,  -763,    42,  -763,  -363,   -19,  -763,
      35,  -763,  -293,   734,    13,   -48,  -763,  -570,  -763,   -13,
     817,  -170,     7,   -55,  -270,  -414,   -11,  1771,   -59,   828,
      -1,   -20,  -763,  -763,  -241,  -763,  1317,   894,  -763,    -7,
     257,  -338,    55,    -3,  -763,  -395,  -243,   101,  -291,     5,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,   295,
    -199,  -370,   -86,  -553,  -763,  -699,  -689,   177,  -763,  -480,
    -763,  -594,  -763,   -87,  -763,  -763,   126,  -763,  -763,  -763,
     -82,  -763,  -763,  -401,  -763,   -69,  -763,  -763,  -763,  -763,
    -763,   656,   903,  -763,  -763,  -763,  -763,  -763,  -198,  -364,
    -763,   364,  -763,  -763,  -763,     8,  -763,  -763,  -763,  1109,
    1870,   850,  1678,  -763,  -763,    56,  -280,  -760,  -397,  -593,
     305,  -644,  -616,  -762,    48,   193,  -763,  -587,  -763,  -279,
     388,  -763,  -763,  -763,    15,  -386,   816,  -307,  -763,   672,
       2,   -25,  -233,  -534,  -260,    19,   144,  -763,     4,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -556
static const yytype_int16 yytable[] =
{
      99,   371,   259,   242,   242,   429,   194,   242,   261,   406,
     115,   115,   484,   495,   317,   256,   629,   466,   115,   257,
     461,   335,   230,   208,   463,   440,   571,   599,   233,   270,
     635,   248,   248,   635,   235,   248,   230,    67,   619,    67,
     453,   288,   638,   532,   455,   537,   100,   786,   281,   285,
     597,   380,   736,   298,   654,   274,   569,   115,   577,   383,
     778,   580,   746,   724,   612,   280,   284,   320,   844,   321,
     369,   245,   250,   622,   638,   251,   841,   -94,   743,   773,
     667,   115,   598,   397,   235,   775,   902,   616,   749,   779,
     397,   374,   270,  -101,   569,   375,   577,   784,   256,   449,
     -96,   717,   718,   913,   789,   598,   502,   369,   690,   669,
     -67,   735,   374,   418,  -462,   698,   366,   247,   247,   -98,
       3,   247,   567,   763,   575,  -278,  -465,   575,  -275,  -100,
     405,  -275,   657,   386,   -95,   337,   801,  -464,   685,   598,
     -94,   -81,  -466,   808,   -97,   267,   567,   329,   575,  -467,
     691,   279,   263,   896,   396,   447,  -101,   -96,   332,   236,
     567,   331,   575,   528,   598,   -97,   327,   328,   902,   567,
     252,   575,   -99,   913,   367,   258,   -98,   372,   384,   232,
     -95,  -100,  -278,  -278,  -465,  -469,  -532,   370,   670,   859,
     360,   361,   362,   255,   429,  -464,   844,   639,   466,   -86,
    -466,   641,   668,   495,   567,   575,   644,  -467,   926,   236,
     231,   232,   231,   232,   753,   -93,   649,   786,   628,   231,
     232,   786,   407,   408,   370,   298,   231,   232,   567,   723,
     575,   336,   465,   778,   255,   417,   -96,   -96,   954,   242,
     814,   242,   242,  -469,   444,   427,   427,   635,   635,   258,
     270,   -92,   235,   438,   400,   -98,   -98,   638,   236,   466,
     773,  -323,   904,   -88,   685,   667,   766,   248,   773,   248,
     -95,   -95,   685,   451,   909,   452,   274,  -531,   914,   -88,
     -97,   -97,   232,   524,   892,   794,  -468,   -89,   533,  -531,
     235,   786,   115,   404,   -91,   697,  -532,    81,   -90,    81,
     116,   116,   -87,   448,   204,   204,  -457,   430,   214,   433,
     204,   204,   204,   732,   270,   204,   363,   409,  -323,  -323,
    -461,   457,   495,   530,   583,   585,   460,   232,   595,   378,
     315,   316,   232,   379,   -90,   515,   516,   517,   518,   115,
     274,  -392,   413,    81,  -468,   418,   236,   289,   958,   231,
     232,   242,   236,   247,   -88,   247,    67,   204,   576,   387,
     928,   519,   438,   514,  -457,   819,   232,   726,   667,   744,
     667,   289,   415,   364,   365,   242,  -528,   236,  -461,   607,
     835,   420,   576,   424,   745,   -88,   438,   615,   -88,   242,
     425,   -88,   762,   606,   758,   -96,   576,   428,   242,   443,
     438,   337,   590,  -392,   204,   576,    81,   532,   401,   438,
     -98,   653,   790,   465,   961,   236,   388,   389,   761,   410,
    -529,   232,   645,   459,   459,   -90,   618,   618,   459,   466,
     450,   754,   526,   768,   427,   427,   893,   526,  -457,   576,
     637,    99,   -66,   831,   635,   667,   898,   818,   495,   445,
     230,   469,   877,   638,  -463,   456,   -90,   242,  -392,   -90,
    -392,  -392,   -90,   462,   576,   402,   403,  -268,   438,   -95,
     464,   115,   652,   115,   465,  -279,   411,   412,    67,   683,
     499,   468,  -461,   500,   501,   531,   674,   650,  -462,   674,
     512,   674,   513,  -528,    81,  -457,  -457,   587,   667,  -528,
     667,   603,   911,   604,   204,   204,   402,   446,   470,   471,
     920,  -463,  -463,   608,   -94,   496,   758,   918,   631,   630,
     694,   640,  -535,   642,  -268,  -268,   647,   236,   702,   373,
     667,   840,  -279,  -279,   115,   447,   643,  -529,   -81,  -461,
    -461,   660,   495,  -529,   672,   -86,   707,   204,   676,   204,
     204,   236,   236,   204,   204,  -101,   327,   328,    81,   388,
     389,  -100,   705,    81,    81,   678,   706,   921,   922,   681,
     711,   204,   707,   711,   713,   714,   679,   716,   714,   694,
     694,  -253,   289,   948,  -535,   878,   -93,   707,   682,   705,
     686,   711,   -92,   500,   501,   696,   714,   707,   381,   382,
     699,   730,   734,   737,   722,   737,   751,   661,   721,   473,
     474,   475,   476,   737,   709,   598,    81,   204,   204,   204,
     204,    81,   204,   204,   886,   700,   204,   710,    81,   289,
     888,   204,   707,   809,   230,   427,   735,   803,   750,  -535,
     -96,  -535,  -535,   770,   465,  -531,   300,   725,   301,   302,
     771,   772,   533,   -98,   337,   797,   799,   759,   752,   204,
     760,   804,   806,   -95,   767,   782,   770,   204,   204,  -254,
     567,   -88,   661,   791,   473,   474,   475,   476,   781,   567,
     796,   575,   802,   204,   -90,    81,   204,   506,   817,   301,
     302,   738,   735,    81,   -87,   303,   304,   204,   811,   812,
     822,    81,   826,   765,   115,   526,   204,   358,   359,   360,
     361,   362,   308,   310,   312,   314,   825,   830,   694,   832,
     313,   839,   842,   301,   302,   846,   845,   847,   833,   834,
     848,   824,   849,   236,   828,   837,   303,   304,    81,   851,
     853,   816,   855,   201,   201,   858,   861,    81,   820,   201,
     860,   829,   865,   867,   869,   872,   874,   427,   770,  -255,
     875,   289,   879,   289,   889,   204,   890,   895,   897,   618,
     303,   304,   674,   674,   236,   674,   907,   674,   674,   910,
     307,   301,   302,   674,  -256,   916,   674,   674,   917,   927,
     945,   115,   919,    81,   511,   876,   459,   301,   302,   472,
     931,   473,   474,   475,   476,   935,   337,   887,   472,   937,
     473,   474,   475,   476,   942,   953,   964,  -531,    98,  -532,
      98,   350,   351,   646,   289,    98,    98,   115,   303,   304,
     212,    98,    98,    98,   120,   737,    98,   715,   952,   764,
     477,   955,   810,   377,   303,   304,   478,   479,   661,   477,
     473,   474,   475,   476,   951,   478,   479,   197,   357,   358,
     359,   360,   361,   362,    98,   774,   236,   923,   687,   924,
     393,   480,   925,   236,   481,   929,     0,   880,    98,   677,
     480,   680,     0,   481,   337,     0,   204,    81,   472,   662,
     473,   474,   475,   476,   236,   663,     0,   482,     0,   350,
     351,   674,   674,   674,   674,     0,   674,   674,   242,   908,
     674,     0,   674,   674,     0,   576,     0,     0,     0,   438,
     204,   606,   737,   707,     0,    98,     0,    98,   661,   477,
     473,   474,   475,   476,     0,   478,   479,   358,   359,   360,
     361,   362,     0,   201,   201,   282,     0,   661,     0,   473,
     474,   475,   476,     0,   674,   674,   674,   674,   674,     0,
     480,     0,     0,   481,    81,    81,   674,   236,     0,   477,
     309,   301,   302,   236,     0,     0,   479,     0,     0,    81,
       0,   777,     0,     0,   780,     0,     0,    81,   662,     0,
     232,     0,   439,   441,   289,   204,   785,     0,   204,   204,
     480,     0,     0,     0,   204,   204,   311,   301,   302,     0,
     454,     0,    81,    81,     0,    98,     0,     0,   303,   304,
       0,     0,     0,    81,     0,    98,    98,     0,     0,     0,
      81,     0,     0,   204,   496,   301,   302,     0,   508,   301,
     302,     0,    81,    81,     0,   509,   301,   302,   472,    81,
     473,   474,   475,   476,   303,   304,   201,   201,   201,   201,
       0,   520,   521,   322,   323,   324,   325,   326,    98,     0,
      98,    98,     0,     0,    98,    98,     0,     0,     0,    98,
       0,   864,   303,   304,    98,    98,   303,   304,     0,   477,
       0,     0,    98,   303,   304,   478,   479,     0,   204,     0,
       0,     0,   510,   301,   302,     0,     0,     0,     0,    81,
      81,    94,     0,    94,   117,   117,   117,   883,     0,     0,
     480,    81,   216,   481,   899,   600,   473,   474,   475,   476,
       0,     0,   421,   422,   423,     0,     0,    98,    98,    98,
      98,    98,    98,    98,    98,     0,   727,    98,     0,    98,
     303,   304,    98,     0,   903,     0,   905,    94,     0,     0,
     906,   290,   850,   852,     0,   854,     0,   856,   857,     0,
     912,     0,   915,   862,     0,    81,   866,   868,     0,     0,
      98,    81,     0,    81,     0,   290,    81,     0,    98,    98,
     661,     0,   473,   474,   475,   476,     0,     0,     0,     0,
     497,     0,     0,     0,    98,     0,    98,    98,   507,     0,
       0,   507,     0,   507,    98,   507,   204,   507,    98,     0,
      94,     0,    98,     0,     0,   525,     0,    98,     0,     0,
     536,   662,     0,     0,     0,     0,   956,   843,  -555,     0,
     957,     0,   959,     0,     0,     0,     0,   960,     0,     0,
       0,  -555,  -555,  -555,  -555,  -555,  -555,     0,  -555,    98,
       0,     0,     0,     0,  -555,  -555,     0,     0,    98,   968,
       0,     0,     0,     0,     0,  -555,  -555,     0,  -555,  -555,
    -555,  -555,  -555,     0,     0,     0,    98,     0,     0,     0,
       0,   930,   932,   933,   934,     0,   936,   938,     0,     0,
     941,     0,   943,   944,     0,     0,     0,     0,    94,     0,
       0,     0,   536,     0,    98,     0,     0,     0,   632,   634,
       0,     0,   282,     0,     0,   201,  -555,     0,     0,     0,
       0,     0,     0,   243,   243,     0,     0,   243,     0,     0,
       0,     0,     0,     0,   962,   963,   965,   966,   967,   337,
       0,   634,     0,     0,   282,     0,   969,     0,     0,   201,
       0,     0,   264,   266,   350,   351,     0,   243,   243,     0,
       0,     0,    94,     0,     0,     0,     0,    94,    94,   318,
     319,  -555,  -555,   675,  -555,     0,     0,   255,  -555,     0,
    -555,  -555,     0,     0,     0,     0,   290,     0,     0,   355,
     356,   357,   358,   359,   360,   361,   362,    98,    98,   337,
     338,   339,   340,   341,   342,   343,   344,   695,   346,   347,
       0,     0,     0,     0,   350,   351,     0,     0,     0,     0,
      94,     0,     0,     0,     0,    94,     0,     0,     0,     0,
       0,    98,    94,   290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,     0,     0,     0,
       0,     0,   201,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   731,    94,
      98,     0,     0,     0,     0,     0,     0,    94,    98,     0,
       0,     0,     0,     0,     0,    94,    98,     0,     0,    98,
      98,     0,     0,     0,     0,    98,    98,   755,     0,     0,
     757,     0,     0,    98,    98,     0,   634,   282,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,    98,    94,     0,    98,   243,   243,   243,   318,     0,
       0,    94,     0,    98,    98,     0,     0,     0,     0,   243,
      98,   243,   243,     0,     0,   290,     0,   290,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     793,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    98,     0,     0,     0,     0,     0,     0,   290,     0,
       0,     0,    98,     0,     0,     0,     0,   836,   243,     0,
     838,     0,     0,   535,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
      97,   243,    97,   118,   118,     0,   870,     0,     0,   584,
     586,   217,     0,     0,     0,     0,    98,     0,     0,     0,
       0,    94,    98,     0,    98,   243,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   609,     0,   243,
       0,   584,   586,     0,     0,     0,    97,     0,   243,     0,
     291,     0,     0,   282,     0,   243,     0,    98,     0,     0,
       0,   243,   243,     0,     0,   243,     0,     0,     0,     0,
       0,     0,     0,     0,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   648,     0,     0,     0,     0,     0,
       0,     0,     0,    78,   243,    78,     0,   243,    94,    94,
       0,     0,     0,     0,   213,     0,     0,   243,     0,    97,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,     0,     0,   243,     0,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,    94,    94,     0,   688,
     689,     0,     0,     0,     0,     0,     0,    94,     0,     0,
     243,     0,     0,     0,    94,     0,     0,     0,     0,   337,
    -556,  -556,  -556,  -556,   342,   343,    94,    94,  -556,  -556,
       0,     0,     0,    94,   350,   351,     0,     0,     0,     0,
       0,     0,    95,     0,    95,     0,     0,    97,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
       0,   243,     0,    94,    94,     0,     0,     0,     0,     0,
       0,   884,     0,     0,     0,    94,     0,     0,     0,     0,
       0,    97,     0,     0,     0,     0,    97,    97,     0,     0,
     243,     0,     0,   243,     0,     0,     0,     0,     0,   243,
     243,     0,     0,     0,     0,   291,     0,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,    94,     0,    94,     0,    97,
      94,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,    97,   291,   243,     0,     0,     0,   609,   795,     0,
     798,   800,     0,     0,     0,     0,   805,   807,     0,     0,
       0,     0,     0,     0,    78,     0,   813,     0,     0,    78,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   798,   800,
       0,   805,   807,     0,     0,     0,     0,     0,    97,    95,
     243,     0,     0,   243,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,    78,     0,     0,   534,     0,   243,
       0,     0,     0,   871,     0,     0,     0,     0,     0,     0,
     873,    97,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,    95,     0,     0,     0,     0,    95,    95,
       0,     0,     0,     0,   291,     0,   291,     0,   873,     0,
       0,   701,     0,     0,     0,     0,   243,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,    97,    78,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    95,     0,   350,   351,     0,    95,     0,     0,     0,
       0,     0,     0,    95,     0,     0,     0,   291,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,    78,   352,     0,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,     0,     0,   243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -230,     0,     0,     0,     0,     0,
      95,   564,   565,     0,     0,   566,     0,     0,    95,    78,
      97,     0,     0,     0,     0,     0,    95,     0,     0,   164,
     165,   166,   167,   168,   169,   170,   171,   172,     0,     0,
     173,   174,     0,     0,   175,   176,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   179,     0,
       0,     0,     0,    95,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,     0,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,     0,
     190,   191,     0,     0,     0,     0,     0,    97,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,   255,
       0,     0,    97,    78,     0,     0,     0,     0,    95,     0,
      97,     0,     0,     0,     0,     0,     0,   291,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,    97,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
      78,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,    95,    78,   118,     0,     0,     0,     0,     0,
       0,   534,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    78,
       0,     0,    97,    97,     0,     0,     0,     0,     0,    78,
     885,     0,     0,     0,    97,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    78,
       0,     0,     0,     0,     0,    78,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    95,
      95,   350,   351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,     0,     0,     0,    97,     0,
       0,     0,    95,     0,    97,     0,    97,     0,     0,    97,
       0,     0,   352,     0,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,     0,    78,    78,    95,    95,     0,
       0,     0,     0,   882,     0,     0,     0,    78,    95,     0,
       0,     0,     0,     0,     0,    95,     0,     0,   232,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    95,     0,
       0,     0,     0,     0,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,    78,     0,    78,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
    -555,     4,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     0,    95,    95,     0,     0,     0,    15,
       0,    16,    17,    18,    19,     0,    95,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,    29,    30,    31,    32,
       0,    33,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,    42,     0,     0,    43,    44,     0,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,     0,    95,     0,    95,    47,
       0,    95,    48,    49,     0,    50,    51,  -278,    52,     0,
      53,    54,    55,    56,    57,    58,    59,     0,     0,    60,
    -278,  -278,  -278,  -278,  -278,  -278,     0,  -278,     0,     0,
       0,     0,     0,     0,  -278,  -278,  -278,     0,     0,    61,
      62,    63,     0,     0,  -278,  -278,     0,  -278,  -278,  -278,
    -278,  -278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -555,  -555,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,     0,     0,  -278,  -278,  -278,     0,   742,  -278,     0,
       0,     0,     0,     0,  -278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -278,     0,     0,     0,     0,
       0,     0,     0,   -99,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -391,     0,
       0,  -278,  -278,  -278,  -278,     0,     0,  -278,  -278,  -278,
    -278,  -391,  -391,  -391,  -391,  -391,  -391,     0,  -391,     0,
       0,   719,     0,     0,  -391,  -391,  -391,     0,     0,     0,
       0,     0,     0,     0,     0,  -391,  -391,     0,  -391,  -391,
    -391,  -391,  -391,     0,     0,     0,     0,     0,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,     0,     0,   350,   351,     0,     0,     0,     0,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,     0,     0,  -391,  -391,  -391,     0,     0,  -391,
       0,     0,     0,     0,   352,  -391,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -391,     0,  -391,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -269,
       0,  -391,  -391,  -391,  -391,  -391,     0,   255,  -391,  -391,
    -391,  -391,  -269,  -269,  -269,  -269,  -269,  -269,     0,  -269,
       0,     0,   701,     0,     0,     0,  -269,  -269,  -269,     0,
       0,     0,     0,     0,     0,     0,  -269,  -269,     0,  -269,
    -269,  -269,  -269,  -269,     0,     0,     0,     0,     0,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,     0,     0,   350,   351,     0,     0,     0,     0,
    -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,     0,     0,  -269,  -269,  -269,     0,     0,
    -269,     0,     0,     0,     0,   352,  -269,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,  -269,     0,     0,
       0,     0,     0,     0,     0,     0,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -555,     0,     0,  -269,  -269,  -269,  -269,     0,     0,  -269,
    -269,  -269,  -269,  -555,  -555,  -555,  -555,  -555,  -555,     0,
    -555,     0,     0,     0,     0,     0,  -555,  -555,  -555,     0,
       0,     0,     0,     0,     0,     0,     0,  -555,  -555,     0,
    -555,  -555,  -555,  -555,  -555,     0,     0,     0,     0,     0,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,     0,     0,   350,   351,     0,     0,     0,
       0,  -555,  -555,  -555,  -555,  -555,  -555,  -555,  -555,  -555,
    -555,  -555,  -555,  -555,     0,     0,  -555,  -555,  -555,     0,
       0,  -555,     0,     0,     0,     0,   352,  -555,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -555,     0,  -555,
    -555,  -555,  -555,  -555,  -555,  -555,  -555,  -555,  -555,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -285,     0,  -555,  -555,  -555,  -555,  -555,     0,   255,
    -555,  -555,  -555,  -555,  -285,  -285,  -285,  -285,  -285,  -285,
       0,  -285,     0,     0,     0,     0,     0,     0,  -285,  -285,
       0,     0,     0,     0,     0,     0,     0,     0,  -285,  -285,
       0,  -285,  -285,  -285,  -285,  -285,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,     0,     0,  -285,  -285,  -285,
       0,     0,  -285,  -535,     0,     0,     0,     0,  -285,     0,
       0,     0,     0,     0,     0,     0,  -535,  -535,  -535,     0,
    -535,  -535,     0,  -535,     0,     0,     0,     0,  -285,  -535,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -535,  -535,     0,  -535,  -535,  -535,  -535,  -535,     0,     0,
       0,     0,     0,     0,     0,  -285,  -285,  -285,  -285,     0,
     252,  -285,  -285,  -285,  -285,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -535,  -535,  -535,  -535,  -535,  -535,
    -535,  -535,  -535,  -535,  -535,  -535,  -535,     0,     0,  -535,
    -535,  -535,     0,   703,     0,  -278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -278,  -278,
    -278,     0,  -278,  -278,     0,  -278,     0,     0,     0,   -97,
    -535,     0,  -535,  -535,  -535,  -535,  -535,  -535,  -535,  -535,
    -535,  -535,  -278,  -278,     0,  -278,  -278,  -278,  -278,  -278,
       0,     0,     0,     0,     0,     0,  -535,  -535,  -535,  -535,
     -89,     0,     0,  -535,     0,  -535,  -535,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,     0,
       0,  -278,  -278,  -278,     0,   704,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -99,  -278,     0,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -278,
    -278,  -278,   -91,     0,     0,  -278,     0,  -278,  -278,   268,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,  -555,  -555,  -555,     0,     0,  -555,    15,     0,    16,
      17,    18,    19,     0,     0,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,     0,     0,
       0,     0,     0,    28,     0,    30,    31,    32,     0,    33,
      34,    35,    36,    37,    38,     0,    39,    40,    41,     0,
       0,    42,     0,     0,    43,    44,     0,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
      48,    49,     0,    50,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     0,   268,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    -555,  -555,  -555,     0,  -555,  -555,    15,     0,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,    30,    31,    32,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,    41,     0,     0,
      42,     0,     0,    43,    44,     0,    45,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,    48,
      49,     0,    50,    51,     0,    52,     0,    53,    54,    55,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,     0,
       0,     0,     0,     0,   268,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,  -555,  -555,
    -555,  -555,    15,  -555,    16,    17,    18,    19,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,     0,
      30,    31,    32,     0,    33,    34,    35,    36,    37,    38,
       0,    39,    40,    41,     0,     0,    42,     0,     0,    43,
      44,     0,    45,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,    48,    49,     0,    50,    51,
       0,    52,     0,    53,    54,    55,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,     0,     0,     0,     0,     0,
     268,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,  -555,  -555,  -555,  -555,    15,     0,
      16,    17,    18,    19,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,    30,    31,    32,     0,
      33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
       0,     0,    42,     0,     0,    43,    44,     0,    45,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,    48,    49,     0,    50,    51,     0,    52,     0,    53,
      54,    55,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     4,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,    61,    62,
      63,     0,     0,    15,     0,    16,    17,    18,    19,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,  -555,  -555,    27,     0,     0,     0,     0,     0,    28,
      29,    30,    31,    32,     0,    33,    34,    35,    36,    37,
      38,     0,    39,    40,    41,     0,     0,    42,     0,     0,
      43,    44,     0,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,    48,    49,     0,    50,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -555,     0,
       0,     0,     0,     0,     0,     0,  -555,  -555,   268,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,  -555,  -555,     0,     0,     0,    15,     0,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,    30,    31,    32,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,    41,     0,     0,
      42,     0,     0,    43,    44,     0,    45,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,    48,
      49,     0,    50,    51,     0,    52,     0,    53,    54,    55,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,     0,   268,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,    61,    62,    63,     0,
       0,    15,     0,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,  -555,
    -555,    27,     0,     0,     0,     0,     0,    28,     0,    30,
      31,    32,     0,    33,    34,    35,    36,    37,    38,     0,
      39,    40,    41,     0,     0,    42,     0,     0,    43,    44,
       0,    45,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,   269,    49,     0,    50,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,     0,     0,     0,     0,   268,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,     0,  -555,     0,  -555,  -555,    15,     0,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,    30,    31,    32,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,    41,     0,     0,
      42,     0,     0,    43,    44,     0,    45,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,    48,
      49,     0,    50,    51,     0,    52,     0,    53,    54,    55,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,     0,
       0,     0,     0,   268,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,     0,  -555,     0,  -555,
    -555,    15,     0,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,     0,     0,     0,     0,     0,    28,     0,    30,
      31,    32,     0,    33,    34,    35,    36,    37,    38,     0,
      39,    40,    41,     0,     0,    42,     0,     0,    43,    44,
       0,    45,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,    48,    49,     0,    50,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -555,     0,     0,     0,
       0,     0,     0,     0,  -555,  -555,   268,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
    -555,     0,     0,     0,    15,     0,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,    30,    31,    32,     0,    33,    34,    35,    36,
      37,    38,     0,    39,    40,    41,     0,     0,    42,     0,
       0,    43,    44,     0,    45,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,    48,    49,     0,
      50,    51,     0,    52,     0,    53,    54,    55,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,    61,    62,    63,     0,     0,    15,
       0,    16,    17,    18,    19,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,  -555,  -555,   106,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,    33,    34,    35,    36,    37,    38,   238,    39,    40,
      41,     0,     0,    42,     0,     0,    43,    44,     0,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,     0,   111,    49,     0,    50,    51,     0,   239,   240,
      53,    54,    55,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,    61,
     241,    63,    15,     0,    16,    17,    18,    19,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,   232,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,    33,    34,    35,    36,    37,    38,
       0,    39,    40,    41,     0,     0,    42,     0,     0,    43,
      44,     0,    45,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   111,    49,     0,    50,    51,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,    61,    62,    63,     0,     0,    15,     0,    16,
      17,    18,    19,     0,     0,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,   231,   232,    27,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,    33,
      34,    35,    36,    37,    38,     0,    39,    40,    41,     0,
       0,    42,     0,     0,    43,    44,     0,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
     111,    49,     0,    50,    51,     0,     0,     0,    53,    54,
      55,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,    61,    62,    63,
      15,     0,    16,    17,    18,    19,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,   232,     0,     0,     0,     0,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,    38,     0,    39,
      40,    41,     0,     0,    42,     0,     0,    43,    44,     0,
      45,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,    48,    49,     0,    50,    51,     0,    52,
       0,    53,    54,    55,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
      61,    62,    63,     0,    15,     0,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,   420,    27,     0,     0,     0,     0,     0,
      28,     0,    30,    31,    32,     0,    33,    34,    35,    36,
      37,    38,     0,    39,    40,    41,     0,     0,    42,     0,
       0,    43,    44,     0,    45,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,    48,    49,     0,
      50,    51,     0,    52,     0,    53,    54,    55,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   420,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,     0,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,     0,     0,     0,     0,
     155,   156,   157,   158,   159,   160,   161,   162,    35,    36,
     163,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   172,     0,     0,   173,   174,     0,     0,   175,
     176,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,     0,   190,   191,     0,     0,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,     0,     0,
       0,     0,     0,   192,   193,  -528,     0,  -528,  -528,  -528,
    -528,     0,  -528,     0,     0,     0,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,     0,     0,  -528,     0,     0,     0,     0,
       0,     0,     0,     0,  -528,  -528,     0,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,     0,     0,  -528,
       0,     0,  -528,  -528,     0,  -528,  -528,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -528,     0,     0,  -528,  -528,
       0,  -528,  -528,     0,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,     0,     0,  -528,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -528,  -528,  -528,  -529,  -529,
    -529,  -529,  -529,  -529,  -529,  -529,  -529,     0,     0,  -528,
       0,     0,     0,     0,  -529,  -528,  -529,  -529,  -529,  -529,
       0,  -529,     0,     0,     0,  -529,  -529,  -529,  -529,  -529,
    -529,  -529,     0,     0,  -529,     0,     0,     0,     0,     0,
       0,     0,     0,  -529,  -529,     0,  -529,  -529,  -529,  -529,
    -529,  -529,  -529,  -529,  -529,  -529,     0,     0,  -529,     0,
       0,  -529,  -529,     0,  -529,  -529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -529,     0,     0,  -529,  -529,     0,
    -529,  -529,     0,  -529,  -529,  -529,  -529,  -529,  -529,  -529,
    -529,  -529,     0,     0,  -529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -529,  -529,  -529,  -531,  -531,  -531,
    -531,  -531,  -531,  -531,  -531,  -531,     0,     0,  -529,     0,
       0,     0,     0,  -531,  -529,  -531,  -531,  -531,  -531,     0,
       0,     0,     0,     0,  -531,  -531,  -531,  -531,  -531,  -531,
    -531,     0,     0,  -531,     0,     0,     0,     0,     0,     0,
       0,     0,  -531,  -531,     0,  -531,  -531,  -531,  -531,  -531,
    -531,  -531,  -531,  -531,  -531,     0,     0,  -531,     0,     0,
    -531,  -531,     0,  -531,  -531,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -531,   741,     0,  -531,  -531,     0,  -531,
    -531,     0,  -531,  -531,  -531,  -531,  -531,  -531,  -531,  -531,
    -531,     0,     0,  -531,     0,     0,     0,     0,     0,     0,
     -97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -531,  -531,  -531,  -533,  -533,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,     0,     0,     0,     0,     0,
       0,     0,  -533,  -531,  -533,  -533,  -533,  -533,     0,     0,
       0,     0,     0,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
       0,     0,  -533,     0,     0,     0,     0,     0,     0,     0,
       0,  -533,  -533,     0,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,  -533,  -533,     0,     0,  -533,     0,     0,  -533,
    -533,     0,  -533,  -533,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -533,     0,     0,  -533,  -533,     0,  -533,  -533,
       0,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
       0,     0,  -533,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -533,  -533,  -533,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -534,  -534,     0,     0,     0,     0,     0,     0,
       0,  -534,  -533,  -534,  -534,  -534,  -534,     0,     0,     0,
       0,     0,  -534,  -534,  -534,  -534,  -534,  -534,  -534,     0,
       0,  -534,     0,     0,     0,     0,     0,     0,     0,     0,
    -534,  -534,     0,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -534,     0,     0,  -534,     0,     0,  -534,  -534,
       0,  -534,  -534,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -534,     0,     0,  -534,  -534,     0,  -534,  -534,     0,
    -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,     0,
       0,  -534,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -534,  -534,  -534,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -534,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,     0,     0,   145,
     146,   147,   218,   219,   220,   221,   152,   153,   154,     0,
       0,     0,     0,     0,   155,   156,   157,   222,   223,   160,
     224,   162,   293,   294,   225,   295,     0,     0,     0,     0,
       0,     0,   296,     0,     0,     0,     0,     0,   164,   165,
     166,   167,   168,   169,   170,   171,   172,     0,     0,   173,
     174,     0,     0,   175,   176,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,     0,     0,
       0,     0,     0,     0,   297,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,     0,   145,   146,   147,   218,   219,
     220,   221,   152,   153,   154,     0,     0,     0,     0,     0,
     155,   156,   157,   222,   223,   160,   224,   162,   293,   294,
     225,   295,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   172,     0,     0,   173,   174,     0,     0,   175,
     176,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,     0,
     414,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,     0,   190,   191,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,     0,
       0,   145,   146,   147,   218,   219,   220,   221,   152,   153,
     154,     0,     0,     0,     0,     0,   155,   156,   157,   222,
     223,   160,   224,   162,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     164,   165,   166,   167,   168,   169,   170,   171,   172,     0,
       0,   173,   174,     0,     0,   175,   176,   177,   178,     0,
       0,   337,   338,   339,   340,   341,   342,   343,     0,   179,
     346,   347,   226,     0,     0,     0,   350,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       0,   190,   191,     0,     0,     0,     0,     0,     0,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   192,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,     0,     0,   145,   146,   147,
     218,   219,   220,   221,   152,   153,   154,     0,     0,     0,
       0,     0,   155,   156,   157,   222,   223,   160,   224,   162,
       0,     0,   225,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,     0,     0,   173,   174,     0,
       0,   175,   176,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,     0,   190,   191,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,     0,     0,   192,    15,     0,   101,   102,
      18,    19,     0,     0,     0,     0,     0,   103,   104,   105,
      23,    24,    25,    26,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,    41,     0,     0,
      42,     0,     0,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   286,     0,     0,   111,
      49,     0,    50,    51,     0,     0,     0,    53,    54,    55,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,    15,   112,   101,   102,    18,
      19,     0,     0,     0,     0,     0,   103,   104,   105,    23,
      24,    25,    26,     0,   287,   106,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,    33,    34,    35,
      36,    37,    38,     0,    39,    40,    41,     0,     0,    42,
       0,     0,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   286,     0,     0,   111,    49,
       0,    50,    51,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,    15,   112,   101,   102,    18,    19,
       0,     0,     0,     0,     0,   103,   104,   105,    23,    24,
      25,    26,     0,   529,   106,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    33,    34,    35,    36,
      37,    38,   238,    39,    40,    41,     0,     0,    42,     0,
       0,    43,    44,     0,    45,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,     0,     0,   111,    49,     0,
      50,    51,     0,   633,   240,    53,    54,    55,    56,    57,
      58,    59,     0,     0,    60,   499,     0,     0,   500,   501,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    61,   241,    63,    15,     0,    16,
      17,    18,    19,     0,     0,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,     0,     0,
       0,     0,     0,    28,    29,    30,    31,    32,     0,    33,
      34,    35,    36,    37,    38,     0,    39,    40,    41,     0,
       0,    42,     0,     0,    43,    44,     0,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
      48,    49,     0,    50,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,    61,    62,    63,
      15,     0,   101,   102,    18,    19,     0,     0,     0,     0,
       0,   103,   104,   105,    23,    24,    25,    26,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,    33,    34,    35,    36,    37,    38,   238,    39,
      40,    41,     0,     0,    42,     0,     0,    43,    44,     0,
      45,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     200,     0,     0,   111,    49,     0,    50,    51,     0,   633,
       0,    53,    54,    55,    56,    57,    58,    59,     0,     0,
      60,   499,     0,     0,   500,   501,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      61,   241,    63,    15,     0,    16,    17,    18,    19,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
       0,    30,    31,    32,     0,    33,    34,    35,    36,    37,
      38,     0,    39,    40,    41,     0,     0,    42,     0,     0,
      43,    44,     0,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,    48,    49,     0,    50,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    61,    62,    63,    15,     0,   101,   102,
      18,    19,     0,     0,     0,     0,     0,   103,   104,   105,
      23,    24,    25,    26,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,    41,     0,     0,
      42,     0,     0,    43,    44,     0,    45,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,   111,
      49,     0,    50,    51,     0,   756,     0,    53,    54,    55,
      56,    57,    58,    59,     0,     0,    60,   499,     0,     0,
     500,   501,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,    61,   241,    63,    15,
       0,   101,   102,    18,    19,     0,     0,     0,     0,     0,
     103,   104,   105,    23,    24,    25,    26,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,    33,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,    42,     0,     0,    43,    44,     0,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,     0,   111,    49,     0,    50,    51,     0,   792,     0,
      53,    54,    55,    56,    57,    58,    59,     0,     0,    60,
     499,     0,     0,   500,   501,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,    61,
     241,    63,    15,     0,   101,   102,    18,    19,     0,     0,
       0,     0,     0,   103,   104,   105,    23,    24,    25,    26,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,    33,    34,    35,    36,    37,    38,
       0,    39,    40,    41,     0,     0,    42,     0,     0,    43,
      44,     0,    45,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   111,    49,     0,    50,    51,
       0,   633,     0,    53,    54,    55,    56,    57,    58,    59,
       0,     0,    60,   499,     0,     0,   500,   501,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,    61,   241,    63,    15,     0,    16,    17,    18,
      19,     0,     0,     0,     0,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,    33,    34,    35,
      36,    37,    38,   238,    39,    40,    41,     0,     0,    42,
       0,     0,    43,    44,     0,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,     0,     0,   111,    49,
       0,    50,    51,     0,   239,   240,    53,    54,    55,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,    61,   241,    63,    15,     0,
     101,   102,    18,    19,     0,     0,     0,     0,     0,   103,
     104,   105,    23,    24,    25,    26,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,     0,
      33,    34,    35,    36,    37,    38,   238,    39,    40,    41,
       0,     0,    42,     0,     0,    43,    44,     0,    45,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
       0,   111,    49,     0,    50,    51,     0,   239,     0,    53,
      54,    55,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,    61,   241,
      63,    15,     0,   101,   102,    18,    19,     0,     0,     0,
       0,     0,   103,   104,   105,    23,    24,    25,    26,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,    33,    34,    35,    36,    37,    38,   238,
      39,    40,    41,     0,     0,    42,     0,     0,    43,    44,
       0,    45,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   200,     0,     0,   111,    49,     0,    50,    51,     0,
       0,   240,    53,    54,    55,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,    61,   241,    63,    15,     0,   101,   102,    18,    19,
       0,     0,     0,     0,     0,   103,   104,   105,    23,    24,
      25,    26,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    33,    34,    35,    36,
      37,    38,   238,    39,    40,    41,     0,     0,    42,     0,
       0,    43,    44,     0,    45,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,     0,     0,   111,    49,     0,
      50,    51,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     0,     0,    61,   241,    63,    15,     0,    16,
      17,    18,    19,     0,     0,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,    33,
      34,    35,    36,    37,    38,     0,    39,    40,    41,     0,
       0,    42,     0,     0,    43,    44,     0,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
     111,    49,     0,    50,    51,     0,   523,     0,    53,    54,
      55,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,    61,   241,    63,
      15,     0,   101,   102,    18,    19,     0,     0,     0,     0,
       0,   103,   104,   105,    23,    24,    25,    26,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,    33,    34,    35,    36,    37,    38,     0,    39,
      40,    41,     0,     0,    42,     0,     0,    43,    44,     0,
      45,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     200,     0,     0,   111,    49,     0,    50,    51,     0,   239,
       0,    53,    54,    55,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
      61,   241,    63,    15,     0,   101,   102,    18,    19,     0,
       0,     0,     0,     0,   103,   104,   105,    23,    24,    25,
      26,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,    33,    34,    35,    36,    37,
      38,     0,    39,    40,    41,     0,     0,    42,     0,     0,
      43,    44,     0,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   200,     0,     0,   111,    49,     0,    50,
      51,     0,   523,     0,    53,    54,    55,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    61,   241,    63,    15,     0,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,    41,     0,     0,
      42,     0,     0,    43,    44,     0,    45,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,   111,
      49,     0,    50,    51,     0,     0,     0,    53,    54,    55,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,    61,    62,    63,    15,
       0,   101,   102,    18,    19,     0,     0,     0,     0,     0,
     103,   104,   105,    23,    24,    25,    26,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,    33,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,    42,     0,     0,    43,    44,     0,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,     0,   111,    49,     0,    50,    51,     0,     0,     0,
      53,    54,    55,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,    61,
     241,    63,    15,     0,    16,    17,    18,    19,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,    33,    34,    35,    36,    37,    38,
       0,    39,    40,    41,     0,     0,    42,     0,     0,    43,
      44,     0,    45,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   111,    49,     0,    50,    51,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,    61,   241,    63,    15,     0,   101,   102,    18,
      19,     0,     0,     0,     0,     0,   103,   104,   105,    23,
      24,    25,    26,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,   107,    34,    35,
      36,   108,    38,     0,    39,    40,    41,     0,     0,    42,
       0,     0,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,     0,   110,     0,     0,   111,    49,
       0,    50,    51,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,    15,   112,   101,   102,    18,    19,
       0,     0,     0,     0,     0,   103,   104,   105,    23,    24,
      25,    26,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    33,    34,    35,    36,
      37,    38,     0,    39,    40,    41,     0,     0,    42,     0,
       0,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,     0,     0,    48,    49,     0,
      50,    51,     0,    52,     0,    53,    54,    55,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,    15,   112,   101,   102,    18,    19,     0,
       0,     0,     0,     0,   103,   104,   105,    23,    24,    25,
      26,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,    33,    34,    35,    36,    37,
      38,     0,    39,    40,    41,     0,     0,    42,     0,     0,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   286,     0,     0,   333,    49,     0,    50,
      51,     0,   334,     0,    53,    54,    55,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,    15,   112,   101,   102,    18,    19,     0,     0,
       0,     0,     0,   103,   104,   105,    23,    24,    25,    26,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,   107,    34,    35,    36,   108,    38,
       0,    39,    40,    41,     0,     0,    42,     0,     0,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,   111,    49,     0,    50,    51,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,    15,   112,   101,   102,    18,    19,     0,     0,     0,
       0,     0,   103,   104,   105,    23,    24,    25,    26,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,    33,    34,    35,    36,    37,    38,     0,
      39,    40,    41,     0,     0,    42,     0,     0,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   286,     0,     0,   333,    49,     0,    50,    51,     0,
       0,     0,    53,    54,    55,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
      15,   112,   101,   102,    18,    19,     0,     0,     0,     0,
       0,   103,   104,   105,    23,    24,    25,    26,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,    33,    34,    35,    36,    37,    38,     0,    39,
      40,    41,     0,     0,    42,     0,     0,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     863,     0,     0,   111,    49,     0,    50,    51,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,    15,
     112,   101,   102,    18,    19,     0,     0,     0,     0,     0,
     103,   104,   105,    23,    24,    25,    26,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,    33,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,    42,     0,     0,    43,    44,     0,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
    -556,  -556,     0,     0,   350,   351,     0,     0,     0,   881,
       0,     0,   111,    49,     0,    50,    51,     0,     0,     0,
      53,    54,    55,    56,    57,    58,    59,     0,     0,    60,
       0,     0,   572,   573,     0,     0,   574,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,     0,     0,   112,
     164,   165,   166,   167,   168,   169,   170,   171,   172,     0,
       0,   173,   174,     0,     0,   175,   176,   177,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       0,   190,   191,   593,   565,     0,     0,   594,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
     255,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,   173,   174,     0,     0,   175,   176,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,     0,   190,   191,   578,   573,     0,     0,   579,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,   255,   164,   165,   166,   167,   168,   169,   170,   171,
     172,     0,     0,   173,   174,     0,     0,   175,   176,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,   610,   565,     0,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,   255,   164,   165,   166,   167,   168,   169,   170,
     171,   172,     0,     0,   173,   174,     0,     0,   175,   176,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,     0,   190,   191,   613,   573,     0,     0,
     614,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,   255,   164,   165,   166,   167,   168,   169,
     170,   171,   172,     0,     0,   173,   174,     0,     0,   175,
     176,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,     0,   190,   191,   620,   565,     0,
       0,   621,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,   255,   164,   165,   166,   167,   168,
     169,   170,   171,   172,     0,     0,   173,   174,     0,     0,
     175,   176,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   623,   573,
       0,     0,   624,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,   255,   164,   165,   166,   167,
     168,   169,   170,   171,   172,     0,     0,   173,   174,     0,
       0,   175,   176,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,     0,   190,   191,   655,
     565,     0,     0,   656,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   192,   255,   164,   165,   166,
     167,   168,   169,   170,   171,   172,     0,     0,   173,   174,
       0,     0,   175,   176,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     0,   190,   191,
     658,   573,     0,     0,   659,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   192,   255,   164,   165,
     166,   167,   168,   169,   170,   171,   172,     0,     0,   173,
     174,     0,     0,   175,   176,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
     191,   939,   565,     0,     0,   940,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   255,   164,
     165,   166,   167,   168,   169,   170,   171,   172,     0,     0,
     173,   174,     0,     0,   175,   176,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,     0,
     190,   191,   946,   565,     0,     0,   947,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,   255,
     164,   165,   166,   167,   168,   169,   170,   171,   172,     0,
       0,   173,   174,     0,     0,   175,   176,   177,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       0,   190,   191,   949,   573,     0,     0,   950,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
     255,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,   173,   174,     0,     0,   175,   176,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,     0,   190,   191,   578,   573,     0,     0,   579,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,   255,   164,   165,   166,   167,   168,   169,   170,   171,
     172,     0,     0,   173,   174,     0,     0,   175,   176,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192
};

static const yytype_int16 yycheck[] =
{
       2,    83,    27,    16,    17,   248,     7,    20,    28,   208,
       5,     6,   292,   292,    62,    22,   417,   287,    13,    22,
     280,    76,    14,    10,   284,   258,   364,   390,    15,    48,
     425,    16,    17,   428,    15,    20,    28,     2,   408,     4,
     273,    52,   428,   336,   277,   336,     4,   691,    50,    51,
     388,   110,   605,    54,   468,    48,   363,    52,   365,     1,
     676,   368,   615,   597,   402,    50,    51,    65,   767,    65,
      26,    16,    17,   411,   460,    20,   765,    25,   612,   672,
     477,    76,   389,    16,    65,   672,   846,    27,   622,   676,
      16,    98,   111,    25,   401,    98,   403,   691,   105,   269,
      16,   581,   582,   865,   691,   412,   304,    26,    79,    29,
     116,    18,   119,    20,    90,   529,    88,    16,    17,    16,
       0,    20,   363,   657,   365,    88,    88,   368,   150,    25,
      90,   153,   470,   114,    16,    71,   706,    88,   502,   446,
     116,   147,    88,   713,    16,    55,   387,    28,   389,    88,
     121,    50,   143,   842,    55,    90,   116,    25,   147,    15,
     401,   116,   403,   333,   471,    25,    37,    38,   928,   410,
     149,   412,    25,   935,   146,   149,    25,    90,   120,   153,
      25,   116,   145,   146,   146,    88,   149,   143,   108,   783,
     126,   127,   128,   149,   437,   146,   895,   430,   468,   147,
     146,   434,   482,   482,   445,   446,   439,   146,   897,    65,
     152,   153,   152,   153,   147,   147,   449,   861,   416,   152,
     153,   865,   209,   210,   143,   226,   152,   153,   469,   592,
     471,   116,   287,   849,   149,   233,   152,   153,   927,   252,
     720,   254,   255,   146,   263,   247,   248,   642,   643,   149,
     269,   147,   233,   255,   116,   152,   153,   643,   114,   529,
     853,    88,   849,    25,   628,   662,   663,   252,   861,   254,
     152,   153,   636,   271,   861,   271,   269,   149,   865,   147,
     152,   153,   153,   331,   837,   699,    88,   147,   336,   149,
     271,   935,   287,    90,   147,   528,   149,     2,   147,     4,
       5,     6,   147,   268,     9,    10,    88,   252,    13,   254,
      15,    16,    17,   604,   333,    20,    88,    55,   145,   146,
      88,   147,   601,   334,   372,   373,   147,   153,   387,    51,
      58,    59,   153,    55,    25,   322,   323,   324,   325,   334,
     333,    26,    25,    48,   146,    20,   202,    52,   935,   152,
     153,   364,   208,   252,   116,   254,   321,    62,   365,    88,
     147,   326,   364,   321,   146,   728,   153,   600,   765,    90,
     767,    76,   147,   145,   146,   388,    26,   233,   146,   398,
     750,   152,   389,    91,    90,   147,   388,   406,   150,   402,
     147,   153,   652,   395,   637,   116,   403,   147,   411,   143,
     402,    71,   383,    88,   109,   412,   111,   700,    88,   411,
     116,   466,   691,   468,   948,   271,   145,   146,   651,    88,
      26,   153,   442,   279,   280,   116,   407,   408,   284,   699,
     150,   630,   331,   666,   436,   437,   837,   336,    88,   446,
     425,   443,   116,    90,   839,   842,   843,   727,   727,    88,
     442,    88,   815,   839,    88,   151,   147,   470,   143,   150,
     145,   146,   153,   144,   471,   145,   146,    88,   470,   116,
      55,   466,   457,   468,   529,    88,   145,   146,   443,   498,
     110,   147,    88,   113,   114,   147,   488,   452,    90,   491,
      71,   493,    71,   143,   199,   145,   146,    97,   895,   149,
     897,    15,    88,    13,   209,   210,   145,   146,   145,   146,
      88,   145,   146,    16,   116,    63,   759,   880,    15,   418,
     522,   150,    26,   147,   145,   146,   144,   383,   553,    90,
     927,   764,   145,   146,   529,    90,   147,   143,   147,   145,
     146,   116,   821,   149,   147,   147,   571,   252,   147,   254,
     255,   407,   408,   258,   259,   116,    37,    38,   263,   145,
     146,   116,   569,   268,   269,    51,   569,   145,   146,    51,
     577,   276,   597,   580,   577,   577,   147,   580,   580,   581,
     582,   147,   287,   921,    88,   818,   147,   612,    63,   596,
     110,   598,   147,   113,   114,   147,   598,   622,    58,    59,
     147,   602,   604,   605,   591,   607,   626,    51,   589,    53,
      54,    55,    56,   615,    90,   922,   321,   322,   323,   324,
     325,   326,   327,   328,   823,   116,   331,    90,   333,   334,
     829,   336,   657,   715,   626,   637,    18,    90,   625,   143,
     116,   145,   146,   668,   699,   149,    62,    15,    64,    65,
     669,   670,   700,   116,    71,   703,   704,   642,    15,   364,
     144,   709,   710,   116,   147,   684,   691,   372,   373,   147,
     911,   147,    51,   692,    53,    54,    55,    56,   144,   920,
     118,   922,   151,   388,   147,   390,   391,    62,    15,    64,
      65,    17,    18,   398,   147,   111,   112,   402,   717,   718,
      91,   406,    14,   147,   699,   604,   411,   124,   125,   126,
     127,   128,    56,    57,    58,    59,   735,    15,   720,    15,
      61,   147,   147,    64,    65,   152,   150,    15,   747,   748,
     144,   733,   147,   589,   736,   754,   111,   112,   443,   147,
     147,   722,   147,     9,    10,   144,   147,   452,   729,    15,
     121,   738,   147,   147,    15,   803,    15,   759,   783,   147,
     144,   466,    15,   468,    15,   470,    15,   147,   147,   750,
     111,   112,   774,   775,   630,   777,   121,   779,   780,    55,
      63,    64,    65,   785,   147,   144,   788,   789,    15,   147,
      15,   786,    55,   498,    61,   814,   652,    64,    65,    51,
     147,    53,    54,    55,    56,   147,    71,   826,    51,   147,
      53,    54,    55,    56,   147,    15,   147,   149,     2,   149,
       4,    86,    87,   443,   529,     9,    10,   822,   111,   112,
      13,    15,    16,    17,     6,   837,    20,   580,   924,   662,
      92,   928,   716,   109,   111,   112,    98,    99,    51,    92,
      53,    54,    55,    56,   923,    98,    99,     7,   123,   124,
     125,   126,   127,   128,    48,   672,   722,   886,   504,   888,
     198,   123,   891,   729,   126,   900,    -1,   821,    62,   491,
     123,   493,    -1,   126,    71,    -1,   591,   592,    51,    92,
      53,    54,    55,    56,   750,    98,    -1,   149,    -1,    86,
      87,   903,   904,   905,   906,    -1,   908,   909,   921,   861,
     912,    -1,   914,   915,    -1,   922,    -1,    -1,    -1,   921,
     625,   923,   924,   948,    -1,   109,    -1,   111,    51,    92,
      53,    54,    55,    56,    -1,    98,    99,   124,   125,   126,
     127,   128,    -1,   209,   210,    51,    -1,    51,    -1,    53,
      54,    55,    56,    -1,   956,   957,   958,   959,   960,    -1,
     123,    -1,    -1,   126,   669,   670,   968,   823,    -1,    92,
      63,    64,    65,   829,    -1,    -1,    99,    -1,    -1,   684,
      -1,   676,    -1,    -1,   679,    -1,    -1,   692,    92,    -1,
     153,    -1,   258,   259,   699,   700,   691,    -1,   703,   704,
     123,    -1,    -1,    -1,   709,   710,    63,    64,    65,    -1,
     276,    -1,   717,   718,    -1,   199,    -1,    -1,   111,   112,
      -1,    -1,    -1,   728,    -1,   209,   210,    -1,    -1,    -1,
     735,    -1,    -1,   738,    63,    64,    65,    -1,    63,    64,
      65,    -1,   747,   748,    -1,    63,    64,    65,    51,   754,
      53,    54,    55,    56,   111,   112,   322,   323,   324,   325,
      -1,   327,   328,    40,    41,    42,    43,    44,   252,    -1,
     254,   255,    -1,    -1,   258,   259,    -1,    -1,    -1,   263,
      -1,   786,   111,   112,   268,   269,   111,   112,    -1,    92,
      -1,    -1,   276,   111,   112,    98,    99,    -1,   803,    -1,
      -1,    -1,    63,    64,    65,    -1,    -1,    -1,    -1,   814,
     815,     2,    -1,     4,     5,     6,     7,   822,    -1,    -1,
     123,   826,    13,   126,    51,   391,    53,    54,    55,    56,
      -1,    -1,   238,   239,   240,    -1,    -1,   321,   322,   323,
     324,   325,   326,   327,   328,    -1,   149,   331,    -1,   333,
     111,   112,   336,    -1,   849,    -1,   851,    48,    -1,    -1,
     855,    52,   774,   775,    -1,   777,    -1,   779,   780,    -1,
     865,    -1,   867,   785,    -1,   880,   788,   789,    -1,    -1,
     364,   886,    -1,   888,    -1,    76,   891,    -1,   372,   373,
      51,    -1,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
     297,    -1,    -1,    -1,   388,    -1,   390,   391,   305,    -1,
      -1,   308,    -1,   310,   398,   312,   921,   314,   402,    -1,
     111,    -1,   406,    -1,    -1,   331,    -1,   411,    -1,    -1,
     336,    92,    -1,    -1,    -1,    -1,   931,    98,     0,    -1,
     935,    -1,   937,    -1,    -1,    -1,    -1,   942,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,   443,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,   452,   964,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    -1,    -1,    -1,   470,    -1,    -1,    -1,
      -1,   903,   904,   905,   906,    -1,   908,   909,    -1,    -1,
     912,    -1,   914,   915,    -1,    -1,    -1,    -1,   199,    -1,
      -1,    -1,   418,    -1,   498,    -1,    -1,    -1,   424,   425,
      -1,    -1,   428,    -1,    -1,   591,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,   956,   957,   958,   959,   960,    71,
      -1,   457,    -1,    -1,   460,    -1,   968,    -1,    -1,   625,
      -1,    -1,    45,    46,    86,    87,    -1,    50,    51,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,   268,   269,    62,
      63,   143,   144,   489,   146,    -1,    -1,   149,   150,    -1,
     152,   153,    -1,    -1,    -1,    -1,   287,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,   591,   592,    71,
      72,    73,    74,    75,    76,    77,    78,   523,    80,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
     321,    -1,    -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,
      -1,   625,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   738,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   669,   670,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   604,   390,
     684,    -1,    -1,    -1,    -1,    -1,    -1,   398,   692,    -1,
      -1,    -1,    -1,    -1,    -1,   406,   700,    -1,    -1,   703,
     704,    -1,    -1,    -1,    -1,   709,   710,   633,    -1,    -1,
     636,    -1,    -1,   717,   718,    -1,   642,   643,    -1,    -1,
      -1,    -1,    -1,    -1,   728,    -1,    -1,    -1,    -1,    -1,
      -1,   735,   443,    -1,   738,   238,   239,   240,   241,    -1,
      -1,   452,    -1,   747,   748,    -1,    -1,    -1,    -1,   252,
     754,   254,   255,    -1,    -1,   466,    -1,   468,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     696,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   498,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   803,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     814,   815,    -1,    -1,    -1,    -1,    -1,    -1,   529,    -1,
      -1,    -1,   826,    -1,    -1,    -1,    -1,   753,   331,    -1,
     756,    -1,    -1,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
       2,   364,     4,     5,     6,    -1,   792,    -1,    -1,   372,
     373,    13,    -1,    -1,    -1,    -1,   880,    -1,    -1,    -1,
      -1,   592,   886,    -1,   888,   388,    -1,   891,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   400,    -1,   402,
      -1,   404,   405,    -1,    -1,    -1,    48,    -1,   411,    -1,
      52,    -1,    -1,   839,    -1,   418,    -1,   921,    -1,    -1,
      -1,   424,   425,    -1,    -1,   428,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     2,   457,     4,    -1,   460,   669,   670,
      -1,    -1,    -1,    -1,    13,    -1,    -1,   470,    -1,   111,
      -1,    -1,    -1,   684,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   692,    -1,    -1,    -1,    -1,   489,    -1,   699,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,   717,   718,    -1,   512,
     513,    -1,    -1,    -1,    -1,    -1,    -1,   728,    -1,    -1,
     523,    -1,    -1,    -1,   735,    -1,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    77,   747,   748,    80,    81,
      -1,    -1,    -1,   754,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,     2,    -1,     4,    -1,    -1,   199,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   786,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,   604,    -1,   814,   815,    -1,    -1,    -1,    -1,    -1,
      -1,   822,    -1,    -1,    -1,   826,    -1,    -1,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,   268,   269,    -1,    -1,
     633,    -1,    -1,   636,    -1,    -1,    -1,    -1,    -1,   642,
     643,    -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   880,
      -1,    -1,    -1,    -1,    -1,   886,    -1,   888,    -1,   321,
     891,    -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,
      -1,   333,   334,   696,    -1,    -1,    -1,   700,   701,    -1,
     703,   704,    -1,    -1,    -1,    -1,   709,   710,    -1,    -1,
      -1,    -1,    -1,    -1,   263,    -1,   719,    -1,    -1,   268,
     269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   741,   742,
      -1,   744,   745,    -1,    -1,    -1,    -1,    -1,   390,   199,
     753,    -1,    -1,   756,    -1,    -1,   398,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   321,    -1,    -1,    -1,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,   333,    -1,    -1,   336,    -1,   792,
      -1,    -1,    -1,   796,    -1,    -1,    -1,    -1,    -1,    -1,
     803,   443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     452,    -1,    -1,   263,    -1,    -1,    -1,    -1,   268,   269,
      -1,    -1,    -1,    -1,   466,    -1,   468,    -1,   831,    -1,
      -1,    44,    -1,    -1,    -1,    -1,   839,    -1,    -1,    -1,
      -1,   390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   398,
      -1,    -1,    -1,    -1,    -1,    -1,   498,   406,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   321,    -1,    86,    87,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,   333,    -1,    -1,    -1,   529,    -1,    -1,
      -1,    -1,    -1,    -1,   443,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   452,   117,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,   921,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
     390,    51,    52,    -1,    -1,    55,    -1,    -1,   398,   498,
     592,    -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      80,    81,    -1,    -1,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,   443,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   452,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
     130,   131,    -1,    -1,    -1,    -1,    -1,   669,   670,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,
      -1,    -1,   684,   592,    -1,    -1,    -1,    -1,   498,    -1,
     692,    -1,    -1,    -1,    -1,    -1,    -1,   699,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   717,   718,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   728,    -1,    -1,    -1,
      -1,    -1,    -1,   735,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   747,   748,    -1,    -1,    -1,
      -1,    -1,   754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     669,   670,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   684,    -1,    -1,    -1,    -1,
      -1,    -1,   592,   692,   786,    -1,    -1,    -1,    -1,    -1,
      -1,   700,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   717,   718,
      -1,    -1,   814,   815,    -1,    -1,    -1,    -1,    -1,   728,
     822,    -1,    -1,    -1,   826,    -1,   735,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   747,   748,
      -1,    -1,    -1,    -1,    -1,   754,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,   669,
     670,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   684,    -1,    -1,    -1,   880,    -1,
      -1,    -1,   692,    -1,   886,    -1,   888,    -1,    -1,   891,
      -1,    -1,   117,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,   814,   815,   717,   718,    -1,
      -1,    -1,    -1,   822,    -1,    -1,    -1,   826,   728,    -1,
      -1,    -1,    -1,    -1,    -1,   735,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   747,   748,    -1,
      -1,    -1,    -1,    -1,   754,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   880,    -1,    -1,    -1,    -1,    -1,   886,    -1,   888,
      -1,    -1,   891,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,   814,   815,    -1,    -1,    -1,    19,
      -1,    21,    22,    23,    24,    -1,   826,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     880,    -1,    -1,    -1,    -1,    -1,   886,    -1,   888,    89,
      -1,   891,    92,    93,    -1,    95,    96,     0,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,   109,
      13,    14,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,   129,
     130,   131,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    87,    88,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,
      -1,   144,   145,   146,   147,    -1,    -1,   150,   151,   152,
     153,    13,    14,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    44,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,   117,    97,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
      -1,   143,   144,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,    13,    14,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    44,    -1,    -1,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    -1,    -1,   117,    97,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,    -1,    -1,   144,   145,   146,   147,    -1,    -1,   150,
     151,   152,   153,    13,    14,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,   117,    97,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,    -1,   143,   144,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,    13,    14,    15,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    -1,    86,    87,    88,
      -1,    -1,    91,     0,    -1,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,   117,    26,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    88,    -1,    90,    -1,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,   116,
     117,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,   146,
     147,    -1,    -1,   150,    -1,   152,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    88,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   147,    -1,    -1,   150,    -1,   152,   153,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    -1,    95,    96,    -1,    98,    -1,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     152,   153,    15,    -1,    17,    18,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    15,   152,
     153,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      -1,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    15,   152,   153,    18,    19,    -1,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    93,    -1,    95,    96,    -1,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,   129,   130,
     131,    -1,    -1,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,   152,   153,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,
      96,    -1,    98,    -1,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,   153,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,   129,   130,   131,    -1,
      -1,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,   152,
     153,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      98,    -1,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,   150,    -1,   152,   153,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,   150,    -1,   152,
     153,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      98,    -1,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,   153,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    96,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,   129,   130,   131,    -1,    -1,    19,
      -1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,   152,   153,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    92,    93,    -1,    95,    96,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,   129,
     130,   131,    19,    -1,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,   129,   130,   131,    -1,    -1,    19,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,   152,   153,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    -1,    95,    96,    -1,    -1,    -1,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,   129,   130,   131,
      19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,   153,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
     129,   130,   131,    -1,    19,    -1,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,   152,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    96,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    80,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,   130,   131,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,   148,   149,    19,    -1,    21,    22,    23,
      24,    -1,    26,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,
      -1,    95,    96,    -1,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    19,   149,    21,    22,    23,    24,
      -1,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    19,   149,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,
      96,    -1,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,   149,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,   149,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    80,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   130,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    80,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    71,    72,    73,    74,    75,    76,    77,    -1,    98,
      80,    81,   101,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   148,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    80,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   130,   131,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    -1,    -1,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,   109,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,   129,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,   147,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,
      -1,    95,    96,    -1,    -1,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,   109,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,   129,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,   147,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,   109,   110,    -1,    -1,   113,   114,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,   129,   130,   131,    19,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    -1,    95,    96,    -1,    98,    -1,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,   129,   130,   131,
      19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
     109,   110,    -1,    -1,   113,   114,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
     129,   130,   131,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,
      96,    -1,    98,    -1,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,   129,   130,   131,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,   109,   110,    -1,    -1,
     113,   114,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,   129,   130,   131,    19,
      -1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    92,    93,    -1,    95,    96,    -1,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,   109,
     110,    -1,    -1,   113,   114,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,   129,
     130,   131,    19,    -1,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      -1,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,   109,   110,    -1,    -1,   113,   114,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,   129,   130,   131,    19,    -1,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,
      -1,    95,    96,    -1,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,   129,   130,   131,    19,    -1,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    93,    -1,    95,    96,    -1,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,   129,   130,
     131,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,   129,   130,   131,    19,    -1,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    96,    -1,    -1,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,   129,   130,   131,    19,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    -1,    95,    96,    -1,    98,    -1,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,   129,   130,   131,
      19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
     129,   130,   131,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,
      96,    -1,    98,    -1,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,   129,   130,   131,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    -1,    -1,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,   129,   130,   131,    19,
      -1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    92,    93,    -1,    95,    96,    -1,    -1,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,   129,
     130,   131,    19,    -1,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,   129,   130,   131,    19,    -1,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    89,    -1,    -1,    92,    93,
      -1,    95,    96,    -1,    -1,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,   109,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,   129,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    96,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,   109,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,   129,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,
      96,    -1,    98,    -1,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,   109,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,   129,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,   109,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,   129,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      -1,    -1,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,   109,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,   129,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,    -1,
      -1,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
     109,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
     129,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,    89,
      -1,    -1,    92,    93,    -1,    95,    96,    -1,    -1,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,   109,
      -1,    -1,    51,    52,    -1,    -1,    55,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,   129,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   130,   131,    51,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,
     149,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    80,    81,    -1,    -1,    84,    85,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,    51,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,   149,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    80,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,   130,   131,    51,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   149,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    80,    81,    -1,    -1,    84,    85,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,   130,   131,    51,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    80,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,   130,   131,    51,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    80,    81,    -1,    -1,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,   130,   131,    51,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   148,   149,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    80,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   130,   131,    51,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   149,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    80,    81,
      -1,    -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,   130,   131,
      51,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    80,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   130,
     131,    51,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      80,    81,    -1,    -1,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
     130,   131,    51,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   130,   131,    51,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,
     149,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    80,    81,    -1,    -1,    84,    85,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,    51,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,   149,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    80,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   155,   156,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    19,    21,    22,    23,    24,
      30,    31,    32,    33,    34,    35,    36,    39,    45,    46,
      47,    48,    49,    51,    52,    53,    54,    55,    56,    58,
      59,    60,    63,    66,    67,    69,    70,    89,    92,    93,
      95,    96,    98,   100,   101,   102,   103,   104,   105,   106,
     109,   129,   130,   131,   157,   158,   159,   164,   166,   167,
     169,   170,   173,   174,   176,   177,   178,   180,   181,   190,
     203,   223,   242,   243,   253,   254,   258,   259,   260,   267,
     268,   269,   271,   272,   273,   274,   275,   276,   300,   313,
     159,    21,    22,    30,    31,    32,    39,    51,    55,    86,
      89,    92,   129,   182,   183,   203,   223,   273,   276,   300,
     183,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    45,    46,    47,    48,    49,
      50,    51,    52,    55,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    80,    81,    84,    85,    86,    87,    98,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     130,   131,   148,   149,   184,   188,   189,   275,   295,   204,
      89,   167,   168,   181,   223,   273,   274,   276,   168,   209,
     211,    89,   174,   181,   223,   228,   273,   276,    33,    34,
      35,    36,    48,    49,    51,    55,   101,   184,   185,   186,
     269,   152,   153,   168,   304,   309,   310,   312,    57,    98,
      99,   130,   173,   190,   191,   196,   199,   201,   298,   299,
     196,   196,   149,   197,   198,   149,   193,   197,   149,   305,
     310,   185,   160,   143,   190,   223,   190,    55,     1,    92,
     162,   163,   164,   175,   176,   313,   205,   207,   192,   201,
     298,   313,   191,   297,   298,   313,    89,   147,   180,   223,
     273,   276,   208,    53,    54,    56,    63,   105,   184,   270,
      62,    64,    65,   111,   112,   255,   256,    63,   255,    63,
     255,    63,   255,    61,   255,    58,    59,   169,   190,   190,
     304,   312,    40,    41,    42,    43,    44,    37,    38,    28,
     240,   116,   147,    92,    98,   177,   116,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      86,    87,   117,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    88,   145,   146,    88,   146,   303,    26,
     143,   244,    90,    90,   193,   197,   244,   167,    51,    55,
     182,    58,    59,     1,   120,   277,   309,    88,   145,   146,
     218,   296,   219,   303,   161,   162,    55,    16,   224,   309,
     116,    88,   145,   146,    90,    90,   224,   168,   168,    55,
      88,   145,   146,    25,   105,   147,   311,   304,    20,   247,
     152,   191,   191,   191,    91,   147,   200,   313,   147,   200,
     196,   305,   306,   196,   195,   196,   201,   298,   313,   167,
     306,   167,   165,   143,   162,    88,   146,    90,   164,   175,
     150,   304,   312,   306,   167,   306,   151,   147,   308,   310,
     147,   308,   144,   308,    55,   177,   178,   179,   147,    88,
     145,   146,    51,    53,    54,    55,    56,    92,    98,    99,
     123,   126,   149,   238,   280,   281,   282,   283,   284,   285,
     286,   289,   290,   291,   292,   293,    63,   256,   257,   110,
     113,   114,   262,   263,   264,   265,    62,   256,    63,    63,
      63,    61,    71,    71,   159,   168,   168,   168,   168,   164,
     167,   167,   241,    98,   169,   191,   201,   202,   175,   147,
     180,   147,   166,   169,   181,   190,   191,   202,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,    51,    52,    55,   188,   193,   301,
     302,   195,    51,    52,    55,   188,   193,   301,    51,    55,
     301,   246,   245,   169,   190,   169,   190,    97,   171,   216,
     309,   278,   215,    51,    55,   182,   301,   195,   301,   161,
     167,   220,   221,    15,    13,   249,   313,   162,    16,   190,
      51,    55,   195,    51,    55,   162,    27,   225,   309,   225,
      51,    55,   195,    51,    55,   213,   187,   261,   262,   247,
     201,    15,   191,    98,   191,   199,   262,   298,   299,   306,
     150,   306,   147,   147,   306,   185,   157,   144,   190,   306,
     164,   206,   298,   177,   179,    51,    55,   195,    51,    55,
     116,    51,    92,    98,   229,   230,   231,   282,   280,    29,
     108,   239,   147,   294,   313,   191,   147,   294,    51,   147,
     294,    51,    63,   162,   266,   263,   110,   265,   190,   190,
      79,   121,   233,   234,   313,   191,   147,   306,   179,   147,
     116,    44,   305,    90,    90,   193,   197,   305,   307,    90,
      90,   193,   194,   197,   313,   194,   197,   233,   233,    44,
     172,   309,   168,   161,   307,    15,   306,   149,   279,   280,
     184,   191,   202,   250,   313,    18,   227,   313,    17,   226,
     227,    90,    90,   307,    90,    90,   227,   210,   212,   307,
     168,   185,    15,   147,   224,   191,    98,   191,   200,   298,
     144,   306,   308,   307,   231,   147,   282,   147,   306,   235,
     305,   162,   162,   283,   289,   291,   293,   284,   286,   291,
     284,   144,   162,   232,   235,   284,   285,   287,   288,   291,
     293,   162,    98,   191,   179,   190,   118,   169,   190,   169,
     190,   171,   151,    90,   169,   190,   169,   190,   171,   244,
     240,   162,   162,   190,   233,   217,   309,    15,   280,   161,
     309,   222,    91,   251,   313,   162,    14,   252,   313,   168,
      15,    90,    15,   162,   162,   225,   191,   162,   191,   147,
     306,   230,   147,    98,   229,   150,   152,    15,   144,   147,
     294,   147,   294,   147,   294,   147,   294,   294,   144,   235,
     121,   147,   294,    89,   223,   147,   294,   147,   294,    15,
     191,   190,   169,   190,    15,   144,   162,   161,   306,    15,
     279,    89,   181,   223,   273,   276,   224,   162,   224,    15,
      15,   214,   227,   247,   248,   147,   230,   147,   282,    51,
     236,   237,   281,   284,   291,   284,   284,   121,   288,   291,
      55,    88,   284,   287,   291,   284,   144,    15,   161,    55,
      88,   145,   146,   162,   162,   162,   230,   147,   147,   305,
     294,   147,   294,   294,   294,   147,   294,   147,   294,    51,
      55,   294,   147,   294,   294,    15,    51,    55,   195,    51,
      55,   249,   226,    15,   230,   237,   284,   284,   291,   284,
     284,   307,   294,   294,   147,   294,   294,   294,   284,   294
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (p, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, p)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, p); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_state *p)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    parser_state *p;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (p);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_state *p)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    parser_state *p;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, p);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, parser_state *p)
#else
static void
yy_reduce_print (yyvsp, yyrule, p)
    YYSTYPE *yyvsp;
    int yyrule;
    parser_state *p;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , p);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, p); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, parser_state *p)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, p)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    parser_state *p;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (p);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (parser_state *p);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (parser_state *p)
#else
int
yyparse (p)
    parser_state *p;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 1166 "src/parse.y"
    {
                      p->lstate = EXPR_BEG;
                      if (!p->locals) p->locals = cons(0,0);
                    ;}
    break;

  case 3:
#line 1171 "src/parse.y"
    {
                      p->tree = new_scope(p, (yyvsp[(2) - (2)].nd));
                      NODE_LINENO(p->tree, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 4:
#line 1178 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 5:
#line 1184 "src/parse.y"
    {
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 6:
#line 1188 "src/parse.y"
    {
                      (yyval.nd) = new_begin(p, (yyvsp[(1) - (1)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 7:
#line 1193 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), newline_node((yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 8:
#line 1197 "src/parse.y"
    {
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 10:
#line 1204 "src/parse.y"
    {
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 11:
#line 1208 "src/parse.y"
    {
                      yyerror(p, "BEGIN not supported");
                      local_resume(p, (yyvsp[(2) - (5)].nd));
                      (yyval.nd) = 0;
                    ;}
    break;

  case 12:
#line 1219 "src/parse.y"
    {
                      if ((yyvsp[(2) - (4)].nd)) {
                        (yyval.nd) = new_rescue(p, (yyvsp[(1) - (4)].nd), (yyvsp[(2) - (4)].nd), (yyvsp[(3) - (4)].nd));
                        NODE_LINENO((yyval.nd), (yyvsp[(1) - (4)].nd));
                      }
                      else if ((yyvsp[(3) - (4)].nd)) {
                        yywarn(p, "else without rescue is useless");
                        (yyval.nd) = push((yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].nd));
                      }
                      else {
                        (yyval.nd) = (yyvsp[(1) - (4)].nd);
                      }
                      if ((yyvsp[(4) - (4)].nd)) {
                        if ((yyval.nd)) {
                          (yyval.nd) = new_ensure(p, (yyval.nd), (yyvsp[(4) - (4)].nd));
                        }
                        else {
                          (yyval.nd) = push((yyvsp[(4) - (4)].nd), new_nil(p));
                        }
                      }
                    ;}
    break;

  case 13:
#line 1243 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 14:
#line 1249 "src/parse.y"
    {
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 15:
#line 1253 "src/parse.y"
    {
                      (yyval.nd) = new_begin(p, (yyvsp[(1) - (1)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 16:
#line 1258 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), newline_node((yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 17:
#line 1262 "src/parse.y"
    {
                      (yyval.nd) = new_begin(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 18:
#line 1267 "src/parse.y"
    {p->lstate = EXPR_FNAME;;}
    break;

  case 19:
#line 1268 "src/parse.y"
    {
                      (yyval.nd) = new_alias(p, (yyvsp[(2) - (4)].id), (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 20:
#line 1272 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 21:
#line 1276 "src/parse.y"
    {
                      (yyval.nd) = new_if(p, cond((yyvsp[(3) - (3)].nd)), (yyvsp[(1) - (3)].nd), 0);
                    ;}
    break;

  case 22:
#line 1280 "src/parse.y"
    {
                      (yyval.nd) = new_unless(p, cond((yyvsp[(3) - (3)].nd)), (yyvsp[(1) - (3)].nd), 0);
                    ;}
    break;

  case 23:
#line 1284 "src/parse.y"
    {
                      (yyval.nd) = new_while(p, cond((yyvsp[(3) - (3)].nd)), (yyvsp[(1) - (3)].nd));
                    ;}
    break;

  case 24:
#line 1288 "src/parse.y"
    {
                      (yyval.nd) = new_until(p, cond((yyvsp[(3) - (3)].nd)), (yyvsp[(1) - (3)].nd));
                    ;}
    break;

  case 25:
#line 1292 "src/parse.y"
    {
                      (yyval.nd) = new_rescue(p, (yyvsp[(1) - (3)].nd), list1(list3(0, 0, (yyvsp[(3) - (3)].nd))), 0);
                    ;}
    break;

  case 26:
#line 1296 "src/parse.y"
    {
                      yyerror(p, "END not suported");
                      (yyval.nd) = new_postexe(p, (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 28:
#line 1302 "src/parse.y"
    {
                      (yyval.nd) = new_masgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 29:
#line 1306 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 30:
#line 1310 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (6)].nd), intern("[]",2), (yyvsp[(3) - (6)].nd)), (yyvsp[(5) - (6)].id), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 31:
#line 1314 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 32:
#line 1318 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 33:
#line 1322 "src/parse.y"
    {
                      yyerror(p, "constant re-assignment");
                      (yyval.nd) = 0;
                    ;}
    break;

  case 34:
#line 1327 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 35:
#line 1331 "src/parse.y"
    {
                      backref_error(p, (yyvsp[(1) - (3)].nd));
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 36:
#line 1336 "src/parse.y"
    {
                      (yyval.nd) = new_asgn(p, (yyvsp[(1) - (3)].nd), new_array(p, (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 37:
#line 1340 "src/parse.y"
    {
                      (yyval.nd) = new_masgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 38:
#line 1344 "src/parse.y"
    {
                      (yyval.nd) = new_masgn(p, (yyvsp[(1) - (3)].nd), new_array(p, (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 40:
#line 1351 "src/parse.y"
    {
                      (yyval.nd) = new_asgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 41:
#line 1355 "src/parse.y"
    {
                      (yyval.nd) = new_asgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 43:
#line 1363 "src/parse.y"
    {
                      (yyval.nd) = new_and(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 44:
#line 1367 "src/parse.y"
    {
                      (yyval.nd) = new_or(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 45:
#line 1371 "src/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, cond((yyvsp[(3) - (3)].nd)), "!");
                    ;}
    break;

  case 46:
#line 1375 "src/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, cond((yyvsp[(2) - (2)].nd)), "!");
                    ;}
    break;

  case 48:
#line 1382 "src/parse.y"
    {
                      if (!(yyvsp[(1) - (1)].nd)) (yyval.nd) = new_nil(p);
                      else (yyval.nd) = (yyvsp[(1) - (1)].nd);
                    ;}
    break;

  case 53:
#line 1397 "src/parse.y"
    {
                      local_nest(p);
                    ;}
    break;

  case 54:
#line 1403 "src/parse.y"
    {
                      (yyval.nd) = new_block(p, (yyvsp[(3) - (5)].nd), (yyvsp[(4) - (5)].nd));
                      local_unnest(p);
                    ;}
    break;

  case 55:
#line 1410 "src/parse.y"
    {
                      (yyval.nd) = new_fcall(p, (yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 56:
#line 1414 "src/parse.y"
    {
                      args_with_block(p, (yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd));
                      (yyval.nd) = new_fcall(p, (yyvsp[(1) - (3)].id), (yyvsp[(2) - (3)].nd));
                    ;}
    break;

  case 57:
#line 1419 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 58:
#line 1423 "src/parse.y"
    {
                      args_with_block(p, (yyvsp[(4) - (5)].nd), (yyvsp[(5) - (5)].nd));
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].nd));
                   ;}
    break;

  case 59:
#line 1428 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 60:
#line 1432 "src/parse.y"
    {
                      args_with_block(p, (yyvsp[(4) - (5)].nd), (yyvsp[(5) - (5)].nd));
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].nd));
                    ;}
    break;

  case 61:
#line 1437 "src/parse.y"
    {
                      (yyval.nd) = new_super(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 62:
#line 1441 "src/parse.y"
    {
                      (yyval.nd) = new_yield(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 63:
#line 1445 "src/parse.y"
    {
                      (yyval.nd) = new_return(p, ret_args(p, (yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 64:
#line 1449 "src/parse.y"
    {
                      (yyval.nd) = new_break(p, ret_args(p, (yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 65:
#line 1453 "src/parse.y"
    {
                      (yyval.nd) = new_next(p, ret_args(p, (yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 66:
#line 1459 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                    ;}
    break;

  case 67:
#line 1463 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 69:
#line 1470 "src/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(2) - (3)].nd));
                    ;}
    break;

  case 70:
#line 1476 "src/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 71:
#line 1480 "src/parse.y"
    {
                      (yyval.nd) = list1(push((yyvsp[(1) - (2)].nd),(yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 72:
#line 1484 "src/parse.y"
    {
                      (yyval.nd) = list2((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 73:
#line 1488 "src/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].nd), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 74:
#line 1492 "src/parse.y"
    {
                      (yyval.nd) = list2((yyvsp[(1) - (2)].nd), new_nil(p));
                    ;}
    break;

  case 75:
#line 1496 "src/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (4)].nd), new_nil(p), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 76:
#line 1500 "src/parse.y"
    {
                      (yyval.nd) = list2(0, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 77:
#line 1504 "src/parse.y"
    {
                      (yyval.nd) = list3(0, (yyvsp[(2) - (4)].nd), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 78:
#line 1508 "src/parse.y"
    {
                      (yyval.nd) = list2(0, new_nil(p));
                    ;}
    break;

  case 79:
#line 1512 "src/parse.y"
    {
                      (yyval.nd) = list3(0, new_nil(p), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 81:
#line 1519 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 82:
#line 1525 "src/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 83:
#line 1529 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(2) - (3)].nd));
                    ;}
    break;

  case 84:
#line 1535 "src/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 85:
#line 1539 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 86:
#line 1545 "src/parse.y"
    {
                      assignable(p, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 87:
#line 1549 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), intern("[]",2), (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 88:
#line 1553 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0);
                    ;}
    break;

  case 89:
#line 1557 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0);
                    ;}
    break;

  case 90:
#line 1561 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0);
                    ;}
    break;

  case 91:
#line 1565 "src/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "dynamic constant assignment");
                      (yyval.nd) = new_colon2(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id));
                    ;}
    break;

  case 92:
#line 1571 "src/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "dynamic constant assignment");
                      (yyval.nd) = new_colon3(p, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 93:
#line 1577 "src/parse.y"
    {
                      backref_error(p, (yyvsp[(1) - (1)].nd));
                      (yyval.nd) = 0;
                    ;}
    break;

  case 94:
#line 1584 "src/parse.y"
    {
                      assignable(p, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 95:
#line 1588 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), intern("[]",2), (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 96:
#line 1592 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0);
                    ;}
    break;

  case 97:
#line 1596 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0);
                    ;}
    break;

  case 98:
#line 1600 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0);
                    ;}
    break;

  case 99:
#line 1604 "src/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "dynamic constant assignment");
                      (yyval.nd) = new_colon2(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id));
                    ;}
    break;

  case 100:
#line 1610 "src/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "dynamic constant assignment");
                      (yyval.nd) = new_colon3(p, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 101:
#line 1616 "src/parse.y"
    {
                      backref_error(p, (yyvsp[(1) - (1)].nd));
                      (yyval.nd) = 0;
                    ;}
    break;

  case 102:
#line 1623 "src/parse.y"
    {
                      yyerror(p, "class/module name must be CONSTANT");
                    ;}
    break;

  case 104:
#line 1630 "src/parse.y"
    {
                      (yyval.nd) = cons((node*)1, nsym((yyvsp[(2) - (2)].id)));
                    ;}
    break;

  case 105:
#line 1634 "src/parse.y"
    {
                      (yyval.nd) = cons((node*)0, nsym((yyvsp[(1) - (1)].id)));
                    ;}
    break;

  case 106:
#line 1638 "src/parse.y"
    {
                      (yyval.nd) = cons((yyvsp[(1) - (3)].nd), nsym((yyvsp[(3) - (3)].id)));
                    ;}
    break;

  case 110:
#line 1647 "src/parse.y"
    {
                      p->lstate = EXPR_ENDFN;
                      (yyval.id) = (yyvsp[(1) - (1)].id);
                    ;}
    break;

  case 111:
#line 1652 "src/parse.y"
    {
                      p->lstate = EXPR_ENDFN;
                      (yyval.id) = (yyvsp[(1) - (1)].id);
                    ;}
    break;

  case 114:
#line 1663 "src/parse.y"
    {
                      (yyval.nd) = new_undef(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 115:
#line 1666 "src/parse.y"
    {p->lstate = EXPR_FNAME;;}
    break;

  case 116:
#line 1667 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (4)].nd), nsym((yyvsp[(4) - (4)].id)));
                    ;}
    break;

  case 117:
#line 1672 "src/parse.y"
    { (yyval.id) = intern_c('|');   ;}
    break;

  case 118:
#line 1673 "src/parse.y"
    { (yyval.id) = intern_c('^');   ;}
    break;

  case 119:
#line 1674 "src/parse.y"
    { (yyval.id) = intern_c('&');   ;}
    break;

  case 120:
#line 1675 "src/parse.y"
    { (yyval.id) = intern("<=>",3); ;}
    break;

  case 121:
#line 1676 "src/parse.y"
    { (yyval.id) = intern("==",2);  ;}
    break;

  case 122:
#line 1677 "src/parse.y"
    { (yyval.id) = intern("===",3); ;}
    break;

  case 123:
#line 1678 "src/parse.y"
    { (yyval.id) = intern("=~",2);  ;}
    break;

  case 124:
#line 1679 "src/parse.y"
    { (yyval.id) = intern("!~",2);  ;}
    break;

  case 125:
#line 1680 "src/parse.y"
    { (yyval.id) = intern_c('>');   ;}
    break;

  case 126:
#line 1681 "src/parse.y"
    { (yyval.id) = intern(">=",2);  ;}
    break;

  case 127:
#line 1682 "src/parse.y"
    { (yyval.id) = intern_c('<');   ;}
    break;

  case 128:
#line 1683 "src/parse.y"
    { (yyval.id) = intern("<=",2);  ;}
    break;

  case 129:
#line 1684 "src/parse.y"
    { (yyval.id) = intern("!=",2);  ;}
    break;

  case 130:
#line 1685 "src/parse.y"
    { (yyval.id) = intern("<<",2);  ;}
    break;

  case 131:
#line 1686 "src/parse.y"
    { (yyval.id) = intern(">>",2);  ;}
    break;

  case 132:
#line 1687 "src/parse.y"
    { (yyval.id) = intern_c('+');   ;}
    break;

  case 133:
#line 1688 "src/parse.y"
    { (yyval.id) = intern_c('-');   ;}
    break;

  case 134:
#line 1689 "src/parse.y"
    { (yyval.id) = intern_c('*');   ;}
    break;

  case 135:
#line 1690 "src/parse.y"
    { (yyval.id) = intern_c('*');   ;}
    break;

  case 136:
#line 1691 "src/parse.y"
    { (yyval.id) = intern_c('/');   ;}
    break;

  case 137:
#line 1692 "src/parse.y"
    { (yyval.id) = intern_c('%');   ;}
    break;

  case 138:
#line 1693 "src/parse.y"
    { (yyval.id) = intern("**",2);  ;}
    break;

  case 139:
#line 1694 "src/parse.y"
    { (yyval.id) = intern_c('!');   ;}
    break;

  case 140:
#line 1695 "src/parse.y"
    { (yyval.id) = intern_c('~');   ;}
    break;

  case 141:
#line 1696 "src/parse.y"
    { (yyval.id) = intern("+@",2);  ;}
    break;

  case 142:
#line 1697 "src/parse.y"
    { (yyval.id) = intern("-@",2);  ;}
    break;

  case 143:
#line 1698 "src/parse.y"
    { (yyval.id) = intern("[]",2);  ;}
    break;

  case 144:
#line 1699 "src/parse.y"
    { (yyval.id) = intern("[]=",3); ;}
    break;

  case 145:
#line 1700 "src/parse.y"
    { (yyval.id) = intern_c('`');   ;}
    break;

  case 186:
#line 1718 "src/parse.y"
    {
                      (yyval.nd) = new_asgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 187:
#line 1722 "src/parse.y"
    {
                      (yyval.nd) = new_asgn(p, (yyvsp[(1) - (5)].nd), new_rescue(p, (yyvsp[(3) - (5)].nd), list1(list3(0, 0, (yyvsp[(5) - (5)].nd))), 0));
                    ;}
    break;

  case 188:
#line 1726 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 189:
#line 1730 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, (yyvsp[(1) - (5)].nd), (yyvsp[(2) - (5)].id), new_rescue(p, (yyvsp[(3) - (5)].nd), list1(list3(0, 0, (yyvsp[(5) - (5)].nd))), 0));
                    ;}
    break;

  case 190:
#line 1734 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (6)].nd), intern("[]",2), (yyvsp[(3) - (6)].nd)), (yyvsp[(5) - (6)].id), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 191:
#line 1738 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 192:
#line 1742 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 193:
#line 1746 "src/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 194:
#line 1750 "src/parse.y"
    {
                      yyerror(p, "constant re-assignment");
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 195:
#line 1755 "src/parse.y"
    {
                      yyerror(p, "constant re-assignment");
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 196:
#line 1760 "src/parse.y"
    {
                      backref_error(p, (yyvsp[(1) - (3)].nd));
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 197:
#line 1765 "src/parse.y"
    {
                      (yyval.nd) = new_dot2(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 198:
#line 1769 "src/parse.y"
    {
                      (yyval.nd) = new_dot3(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 199:
#line 1773 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "+", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 200:
#line 1777 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "-", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 201:
#line 1781 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "*", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 202:
#line 1785 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "/", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 203:
#line 1789 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "%", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 204:
#line 1793 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "**", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 205:
#line 1797 "src/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, call_bin_op(p, (yyvsp[(2) - (4)].nd), "**", (yyvsp[(4) - (4)].nd)), "-@");
                    ;}
    break;

  case 206:
#line 1801 "src/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, call_bin_op(p, (yyvsp[(2) - (4)].nd), "**", (yyvsp[(4) - (4)].nd)), "-@");
                    ;}
    break;

  case 207:
#line 1805 "src/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, (yyvsp[(2) - (2)].nd), "+@");
                    ;}
    break;

  case 208:
#line 1809 "src/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, (yyvsp[(2) - (2)].nd), "-@");
                    ;}
    break;

  case 209:
#line 1813 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "|", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 210:
#line 1817 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "^", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 211:
#line 1821 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "&", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 212:
#line 1825 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "<=>", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 213:
#line 1829 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), ">", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 214:
#line 1833 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), ">=", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 215:
#line 1837 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "<", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 216:
#line 1841 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "<=", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 217:
#line 1845 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "==", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 218:
#line 1849 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "===", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 219:
#line 1853 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "!=", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 220:
#line 1857 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "=~", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 221:
#line 1861 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "!~", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 222:
#line 1865 "src/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, cond((yyvsp[(2) - (2)].nd)), "!");
                    ;}
    break;

  case 223:
#line 1869 "src/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, cond((yyvsp[(2) - (2)].nd)), "~");
                    ;}
    break;

  case 224:
#line 1873 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "<<", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 225:
#line 1877 "src/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), ">>", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 226:
#line 1881 "src/parse.y"
    {
                      (yyval.nd) = new_and(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 227:
#line 1885 "src/parse.y"
    {
                      (yyval.nd) = new_or(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 228:
#line 1889 "src/parse.y"
    {
                      (yyval.nd) = new_if(p, cond((yyvsp[(1) - (6)].nd)), (yyvsp[(3) - (6)].nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 229:
#line 1893 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                    ;}
    break;

  case 230:
#line 1899 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                      if (!(yyval.nd)) (yyval.nd) = new_nil(p);
                    ;}
    break;

  case 232:
#line 1907 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 233:
#line 1912 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (4)].nd), new_hash(p, (yyvsp[(3) - (4)].nd)));
                    ;}
    break;

  case 234:
#line 1916 "src/parse.y"
    {
                      (yyval.nd) = cons(new_hash(p, (yyvsp[(1) - (2)].nd)), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 235:
#line 1923 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 240:
#line 1935 "src/parse.y"
    {
                      (yyval.nd) = cons((yyvsp[(1) - (2)].nd),0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 241:
#line 1940 "src/parse.y"
    {
                      (yyval.nd) = cons(push((yyvsp[(1) - (4)].nd), new_hash(p, (yyvsp[(3) - (4)].nd))), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (4)].nd));
                    ;}
    break;

  case 242:
#line 1945 "src/parse.y"
    {
                      (yyval.nd) = cons(list1(new_hash(p, (yyvsp[(1) - (2)].nd))), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 243:
#line 1952 "src/parse.y"
    {
                      (yyval.nd) = cons(list1((yyvsp[(1) - (1)].nd)), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 244:
#line 1957 "src/parse.y"
    {
                      (yyval.nd) = cons((yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 245:
#line 1962 "src/parse.y"
    {
                      (yyval.nd) = cons(list1(new_hash(p, (yyvsp[(1) - (2)].nd))), (yyvsp[(2) - (2)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 246:
#line 1967 "src/parse.y"
    {
                      (yyval.nd) = cons(push((yyvsp[(1) - (4)].nd), new_hash(p, (yyvsp[(3) - (4)].nd))), (yyvsp[(4) - (4)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (4)].nd));
                    ;}
    break;

  case 247:
#line 1972 "src/parse.y"
    {
                      (yyval.nd) = cons(0, (yyvsp[(1) - (1)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 248:
#line 1978 "src/parse.y"
    {
                      (yyval.stack) = p->cmdarg_stack;
                      CMDARG_PUSH(1);
                    ;}
    break;

  case 249:
#line 1983 "src/parse.y"
    {
                      p->cmdarg_stack = (yyvsp[(1) - (2)].stack);
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 250:
#line 1990 "src/parse.y"
    {
                      (yyval.nd) = new_block_arg(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 251:
#line 1996 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 252:
#line 2000 "src/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 253:
#line 2006 "src/parse.y"
    {
                      (yyval.nd) = cons((yyvsp[(1) - (1)].nd), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 254:
#line 2011 "src/parse.y"
    {
                      (yyval.nd) = cons(new_splat(p, (yyvsp[(2) - (2)].nd)), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 255:
#line 2016 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 256:
#line 2020 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (4)].nd), new_splat(p, (yyvsp[(4) - (4)].nd)));
                    ;}
    break;

  case 257:
#line 2024 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (4)].nd), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 258:
#line 2028 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (5)].nd), new_splat(p, (yyvsp[(5) - (5)].nd)));
                    ;}
    break;

  case 259:
#line 2034 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 260:
#line 2038 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (4)].nd), new_splat(p, (yyvsp[(4) - (4)].nd)));
                    ;}
    break;

  case 261:
#line 2042 "src/parse.y"
    {
                      (yyval.nd) = list1(new_splat(p, (yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 269:
#line 2055 "src/parse.y"
    {
                      (yyval.nd) = new_fcall(p, (yyvsp[(1) - (1)].id), 0);
                    ;}
    break;

  case 270:
#line 2059 "src/parse.y"
    {
                      (yyval.stack) = p->cmdarg_stack;
                      p->cmdarg_stack = 0;
                    ;}
    break;

  case 271:
#line 2065 "src/parse.y"
    {
                      p->cmdarg_stack = (yyvsp[(2) - (4)].stack);
                      (yyval.nd) = (yyvsp[(3) - (4)].nd);
                    ;}
    break;

  case 272:
#line 2070 "src/parse.y"
    {
                      (yyval.stack) = p->cmdarg_stack;
                      p->cmdarg_stack = 0;
                    ;}
    break;

  case 273:
#line 2074 "src/parse.y"
    {p->lstate = EXPR_ENDARG;;}
    break;

  case 274:
#line 2075 "src/parse.y"
    {
                      p->cmdarg_stack = (yyvsp[(2) - (5)].stack);
                      (yyval.nd) = (yyvsp[(3) - (5)].nd);
                    ;}
    break;

  case 275:
#line 2079 "src/parse.y"
    {p->lstate = EXPR_ENDARG;;}
    break;

  case 276:
#line 2080 "src/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 277:
#line 2084 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 278:
#line 2088 "src/parse.y"
    {
                      (yyval.nd) = new_colon2(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id));
                    ;}
    break;

  case 279:
#line 2092 "src/parse.y"
    {
                      (yyval.nd) = new_colon3(p, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 280:
#line 2096 "src/parse.y"
    {
                      (yyval.nd) = new_array(p, (yyvsp[(2) - (3)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(2) - (3)].nd));
                    ;}
    break;

  case 281:
#line 2101 "src/parse.y"
    {
                      (yyval.nd) = new_hash(p, (yyvsp[(2) - (3)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(2) - (3)].nd));
                    ;}
    break;

  case 282:
#line 2106 "src/parse.y"
    {
                      (yyval.nd) = new_return(p, 0);
                    ;}
    break;

  case 283:
#line 2110 "src/parse.y"
    {
                      (yyval.nd) = new_yield(p, (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 284:
#line 2114 "src/parse.y"
    {
                      (yyval.nd) = new_yield(p, 0);
                    ;}
    break;

  case 285:
#line 2118 "src/parse.y"
    {
                      (yyval.nd) = new_yield(p, 0);
                    ;}
    break;

  case 286:
#line 2122 "src/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, cond((yyvsp[(3) - (4)].nd)), "!");
                    ;}
    break;

  case 287:
#line 2126 "src/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, new_nil(p), "!");
                    ;}
    break;

  case 288:
#line 2130 "src/parse.y"
    {
                      (yyval.nd) = new_fcall(p, (yyvsp[(1) - (2)].id), cons(0, (yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 290:
#line 2135 "src/parse.y"
    {
                      call_with_block(p, (yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 291:
#line 2140 "src/parse.y"
    {
                      local_nest(p);
                      (yyval.num) = p->lpar_beg;
                      p->lpar_beg = ++p->paren_nest;
                    ;}
    break;

  case 292:
#line 2147 "src/parse.y"
    {
                      p->lpar_beg = (yyvsp[(2) - (4)].num);
                      (yyval.nd) = new_lambda(p, (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].nd));
                      local_unnest(p);
                    ;}
    break;

  case 293:
#line 2156 "src/parse.y"
    {
                      (yyval.nd) = new_if(p, cond((yyvsp[(2) - (6)].nd)), (yyvsp[(4) - (6)].nd), (yyvsp[(5) - (6)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (6)].num));
                    ;}
    break;

  case 294:
#line 2164 "src/parse.y"
    {
                      (yyval.nd) = new_unless(p, cond((yyvsp[(2) - (6)].nd)), (yyvsp[(4) - (6)].nd), (yyvsp[(5) - (6)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (6)].num));
                    ;}
    break;

  case 295:
#line 2168 "src/parse.y"
    {COND_PUSH(1);;}
    break;

  case 296:
#line 2168 "src/parse.y"
    {COND_POP();;}
    break;

  case 297:
#line 2171 "src/parse.y"
    {
                      (yyval.nd) = new_while(p, cond((yyvsp[(3) - (7)].nd)), (yyvsp[(6) - (7)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (7)].num));
                    ;}
    break;

  case 298:
#line 2175 "src/parse.y"
    {COND_PUSH(1);;}
    break;

  case 299:
#line 2175 "src/parse.y"
    {COND_POP();;}
    break;

  case 300:
#line 2178 "src/parse.y"
    {
                      (yyval.nd) = new_until(p, cond((yyvsp[(3) - (7)].nd)), (yyvsp[(6) - (7)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (7)].num));
                    ;}
    break;

  case 301:
#line 2185 "src/parse.y"
    {
                      (yyval.nd) = new_case(p, (yyvsp[(2) - (5)].nd), (yyvsp[(4) - (5)].nd));
                    ;}
    break;

  case 302:
#line 2189 "src/parse.y"
    {
                      (yyval.nd) = new_case(p, 0, (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 303:
#line 2193 "src/parse.y"
    {COND_PUSH(1);;}
    break;

  case 304:
#line 2195 "src/parse.y"
    {COND_POP();;}
    break;

  case 305:
#line 2198 "src/parse.y"
    {
                      (yyval.nd) = new_for(p, (yyvsp[(2) - (9)].nd), (yyvsp[(5) - (9)].nd), (yyvsp[(8) - (9)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (9)].num));
                    ;}
    break;

  case 306:
#line 2204 "src/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "class definition in method body");
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 307:
#line 2211 "src/parse.y"
    {
                      (yyval.nd) = new_class(p, (yyvsp[(2) - (6)].nd), (yyvsp[(3) - (6)].nd), (yyvsp[(5) - (6)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (6)].num));
                      local_resume(p, (yyvsp[(4) - (6)].nd));
                    ;}
    break;

  case 308:
#line 2218 "src/parse.y"
    {
                      (yyval.num) = p->in_def;
                      p->in_def = 0;
                    ;}
    break;

  case 309:
#line 2223 "src/parse.y"
    {
                      (yyval.nd) = cons(local_switch(p), (node*)(intptr_t)p->in_single);
                      p->in_single = 0;
                    ;}
    break;

  case 310:
#line 2229 "src/parse.y"
    {
                      (yyval.nd) = new_sclass(p, (yyvsp[(3) - (8)].nd), (yyvsp[(7) - (8)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (8)].num));
                      local_resume(p, (yyvsp[(6) - (8)].nd)->car);
                      p->in_def = (yyvsp[(4) - (8)].num);
                      p->in_single = (int)(intptr_t)(yyvsp[(6) - (8)].nd)->cdr;
                    ;}
    break;

  case 311:
#line 2238 "src/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "module definition in method body");
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 312:
#line 2245 "src/parse.y"
    {
                      (yyval.nd) = new_module(p, (yyvsp[(2) - (5)].nd), (yyvsp[(4) - (5)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (5)].num));
                      local_resume(p, (yyvsp[(3) - (5)].nd));
                    ;}
    break;

  case 313:
#line 2251 "src/parse.y"
    {
                      (yyval.stack) = p->cmdarg_stack;
                      p->cmdarg_stack = 0;
                    ;}
    break;

  case 314:
#line 2255 "src/parse.y"
    {
                      p->in_def++;
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 315:
#line 2262 "src/parse.y"
    {
                      (yyval.nd) = new_def(p, (yyvsp[(2) - (7)].id), (yyvsp[(5) - (7)].nd), (yyvsp[(6) - (7)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (7)].num));
                      local_resume(p, (yyvsp[(4) - (7)].nd));
                      p->in_def--;
                      p->cmdarg_stack = (yyvsp[(3) - (7)].stack);
                    ;}
    break;

  case 316:
#line 2270 "src/parse.y"
    {
                      p->lstate = EXPR_FNAME;
                      (yyval.stack) = p->cmdarg_stack;
                      p->cmdarg_stack = 0;
                    ;}
    break;

  case 317:
#line 2276 "src/parse.y"
    {
                      p->in_single++;
                      p->lstate = EXPR_ENDFN; /* force for args */
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 318:
#line 2284 "src/parse.y"
    {
                      (yyval.nd) = new_sdef(p, (yyvsp[(2) - (9)].nd), (yyvsp[(5) - (9)].id), (yyvsp[(7) - (9)].nd), (yyvsp[(8) - (9)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (9)].num));
                      local_resume(p, (yyvsp[(6) - (9)].nd));
                      p->in_single--;
                      p->cmdarg_stack = (yyvsp[(4) - (9)].stack);
                    ;}
    break;

  case 319:
#line 2292 "src/parse.y"
    {
                      (yyval.nd) = new_break(p, 0);
                    ;}
    break;

  case 320:
#line 2296 "src/parse.y"
    {
                      (yyval.nd) = new_next(p, 0);
                    ;}
    break;

  case 321:
#line 2300 "src/parse.y"
    {
                      (yyval.nd) = new_redo(p);
                    ;}
    break;

  case 322:
#line 2304 "src/parse.y"
    {
                      (yyval.nd) = new_retry(p);
                    ;}
    break;

  case 323:
#line 2310 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                      if (!(yyval.nd)) (yyval.nd) = new_nil(p);
                    ;}
    break;

  case 330:
#line 2329 "src/parse.y"
    {
                      (yyval.nd) = new_if(p, cond((yyvsp[(2) - (5)].nd)), (yyvsp[(4) - (5)].nd), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 332:
#line 2336 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 333:
#line 2342 "src/parse.y"
    {
                      (yyval.nd) = list1(list1((yyvsp[(1) - (1)].nd)));
                    ;}
    break;

  case 335:
#line 2349 "src/parse.y"
    {
                      (yyval.nd) = new_arg(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 336:
#line 2353 "src/parse.y"
    {
                      (yyval.nd) = new_masgn(p, (yyvsp[(2) - (3)].nd), 0);
                    ;}
    break;

  case 337:
#line 2359 "src/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 338:
#line 2363 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 339:
#line 2369 "src/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (1)].nd),0,0);
                    ;}
    break;

  case 340:
#line 2373 "src/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (4)].nd), new_arg(p, (yyvsp[(4) - (4)].id)), 0);
                    ;}
    break;

  case 341:
#line 2377 "src/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (6)].nd), new_arg(p, (yyvsp[(4) - (6)].id)), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 342:
#line 2381 "src/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (3)].nd), (node*)-1, 0);
                    ;}
    break;

  case 343:
#line 2385 "src/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (5)].nd), (node*)-1, (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 344:
#line 2389 "src/parse.y"
    {
                      (yyval.nd) = list3(0, new_arg(p, (yyvsp[(2) - (2)].id)), 0);
                    ;}
    break;

  case 345:
#line 2393 "src/parse.y"
    {
                      (yyval.nd) = list3(0, new_arg(p, (yyvsp[(2) - (4)].id)), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 346:
#line 2397 "src/parse.y"
    {
                      (yyval.nd) = list3(0, (node*)-1, 0);
                    ;}
    break;

  case 347:
#line 2401 "src/parse.y"
    {
                      (yyval.nd) = list3(0, (node*)-1, (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 348:
#line 2407 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].nd), (yyvsp[(5) - (6)].id), 0, (yyvsp[(6) - (6)].id));
                    ;}
    break;

  case 349:
#line 2411 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (8)].nd), (yyvsp[(3) - (8)].nd), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].nd), (yyvsp[(8) - (8)].id));
                    ;}
    break;

  case 350:
#line 2415 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].nd), 0, 0, (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 351:
#line 2419 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].nd), 0, (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].id));
                    ;}
    break;

  case 352:
#line 2423 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (4)].nd), 0, (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 353:
#line 2427 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (2)].nd), 0, 1, 0, 0);
                    ;}
    break;

  case 354:
#line 2431 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), 0, (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].id));
                    ;}
    break;

  case 355:
#line 2435 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (2)].nd), 0, 0, 0, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 356:
#line 2439 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 357:
#line 2443 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].id));
                    ;}
    break;

  case 358:
#line 2447 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (2)].nd), 0, 0, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 359:
#line 2451 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (4)].nd), 0, (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 360:
#line 2455 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, (yyvsp[(1) - (2)].id), 0, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 361:
#line 2459 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 362:
#line 2463 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, 0, 0, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 364:
#line 2470 "src/parse.y"
    {
                      p->cmd_start = TRUE;
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                    ;}
    break;

  case 365:
#line 2477 "src/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 366:
#line 2481 "src/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 367:
#line 2485 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (4)].nd);
                    ;}
    break;

  case 368:
#line 2492 "src/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 369:
#line 2496 "src/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 372:
#line 2506 "src/parse.y"
    {
                      local_add_f(p, (yyvsp[(1) - (1)].id));
                      new_bv(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 374:
#line 2514 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (4)].nd);
                    ;}
    break;

  case 375:
#line 2518 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                    ;}
    break;

  case 376:
#line 2524 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 377:
#line 2528 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 378:
#line 2534 "src/parse.y"
    {
                      local_nest(p);
                    ;}
    break;

  case 379:
#line 2540 "src/parse.y"
    {
                      (yyval.nd) = new_block(p,(yyvsp[(3) - (5)].nd),(yyvsp[(4) - (5)].nd));
                      local_unnest(p);
                    ;}
    break;

  case 380:
#line 2547 "src/parse.y"
    {
                      if ((yyvsp[(1) - (2)].nd)->car == (node*)NODE_YIELD) {
                        yyerror(p, "block given to yield");
                      }
                      else {
                        call_with_block(p, (yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                      }
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 381:
#line 2557 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 382:
#line 2561 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].nd));
                      call_with_block(p, (yyval.nd), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 383:
#line 2566 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].nd));
                      call_with_block(p, (yyval.nd), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 384:
#line 2573 "src/parse.y"
    {
                      (yyval.nd) = new_fcall(p, (yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 385:
#line 2577 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 386:
#line 2581 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 387:
#line 2585 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0);
                    ;}
    break;

  case 388:
#line 2589 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), intern("call",4), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 389:
#line 2593 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), intern("call",4), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 390:
#line 2597 "src/parse.y"
    {
                      (yyval.nd) = new_super(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 391:
#line 2601 "src/parse.y"
    {
                      (yyval.nd) = new_zsuper(p);
                    ;}
    break;

  case 392:
#line 2605 "src/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), intern("[]",2), (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 393:
#line 2611 "src/parse.y"
    {
                      local_nest(p);
                      (yyval.num) = p->lineno;
                    ;}
    break;

  case 394:
#line 2617 "src/parse.y"
    {
                      (yyval.nd) = new_block(p,(yyvsp[(3) - (5)].nd),(yyvsp[(4) - (5)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(2) - (5)].num));
                      local_unnest(p);
                    ;}
    break;

  case 395:
#line 2623 "src/parse.y"
    {
                      local_nest(p);
                      (yyval.num) = p->lineno;
                    ;}
    break;

  case 396:
#line 2629 "src/parse.y"
    {
                      (yyval.nd) = new_block(p,(yyvsp[(3) - (5)].nd),(yyvsp[(4) - (5)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(2) - (5)].num));
                      local_unnest(p);
                    ;}
    break;

  case 397:
#line 2639 "src/parse.y"
    {
                      (yyval.nd) = cons(cons((yyvsp[(2) - (5)].nd), (yyvsp[(4) - (5)].nd)), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 398:
#line 2645 "src/parse.y"
    {
                      if ((yyvsp[(1) - (1)].nd)) {
                        (yyval.nd) = cons(cons(0, (yyvsp[(1) - (1)].nd)), 0);
                      }
                      else {
                        (yyval.nd) = 0;
                      }
                    ;}
    break;

  case 400:
#line 2659 "src/parse.y"
    {
                      (yyval.nd) = list1(list3((yyvsp[(2) - (6)].nd), (yyvsp[(3) - (6)].nd), (yyvsp[(5) - (6)].nd)));
                      if ((yyvsp[(6) - (6)].nd)) (yyval.nd) = append((yyval.nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 402:
#line 2667 "src/parse.y"
    {
                        (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 405:
#line 2675 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 407:
#line 2682 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 415:
#line 2697 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 416:
#line 2701 "src/parse.y"
    {
                      (yyval.nd) = new_dstr(p, push((yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 418:
#line 2708 "src/parse.y"
    {
                      (yyval.nd) = append((yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 419:
#line 2714 "src/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 420:
#line 2718 "src/parse.y"
    {
                      (yyval.nd) = p->lex_strterm;
                      p->lex_strterm = NULL;
                    ;}
    break;

  case 421:
#line 2724 "src/parse.y"
    {
                      p->lex_strterm = (yyvsp[(2) - (4)].nd);
                      (yyval.nd) = list2((yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 422:
#line 2729 "src/parse.y"
    {
                      (yyval.nd) = list1(new_literal_delim(p));
                    ;}
    break;

  case 423:
#line 2733 "src/parse.y"
    {
                      (yyval.nd) = list1(new_literal_delim(p));
                    ;}
    break;

  case 424:
#line 2739 "src/parse.y"
    {
                        (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 425:
#line 2743 "src/parse.y"
    {
                      (yyval.nd) = new_dxstr(p, push((yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 426:
#line 2749 "src/parse.y"
    {
                        (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 427:
#line 2753 "src/parse.y"
    {
                      (yyval.nd) = new_dregx(p, (yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 433:
#line 2770 "src/parse.y"
    {
                      parser_heredoc_info * inf = parsing_heredoc_inf(p);
                      inf->doc = push(inf->doc, new_str(p, "", 0));
                      heredoc_end(p);
                    ;}
    break;

  case 434:
#line 2776 "src/parse.y"
    {
                      heredoc_end(p);
                    ;}
    break;

  case 437:
#line 2786 "src/parse.y"
    {
                      parser_heredoc_info * inf = parsing_heredoc_inf(p);
                      inf->doc = push(inf->doc, (yyvsp[(1) - (1)].nd));
                      heredoc_treat_nextline(p);
                    ;}
    break;

  case 438:
#line 2792 "src/parse.y"
    {
                      (yyval.nd) = p->lex_strterm;
                      p->lex_strterm = NULL;
                    ;}
    break;

  case 439:
#line 2798 "src/parse.y"
    {
                      parser_heredoc_info * inf = parsing_heredoc_inf(p);
                      p->lex_strterm = (yyvsp[(2) - (4)].nd);
                      inf->doc = push(push(inf->doc, (yyvsp[(1) - (4)].nd)), (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 440:
#line 2806 "src/parse.y"
    {
                      (yyval.nd) = new_words(p, list1((yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 441:
#line 2810 "src/parse.y"
    {
                      (yyval.nd) = new_words(p, push((yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 442:
#line 2817 "src/parse.y"
    {
                      (yyval.nd) = new_sym(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 443:
#line 2821 "src/parse.y"
    {
                      p->lstate = EXPR_END;
                      (yyval.nd) = new_dsym(p, push((yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].nd)));
                    ;}
    break;

  case 444:
#line 2828 "src/parse.y"
    {
                      p->lstate = EXPR_END;
                      (yyval.id) = (yyvsp[(2) - (2)].id);
                    ;}
    break;

  case 449:
#line 2839 "src/parse.y"
    {
                      (yyval.id) = new_strsym(p, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 450:
#line 2843 "src/parse.y"
    {
                      (yyval.id) = new_strsym(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 451:
#line 2849 "src/parse.y"
    {
                      (yyval.nd) = new_symbols(p, list1((yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 452:
#line 2853 "src/parse.y"
    {
                      (yyval.nd) = new_symbols(p, push((yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 455:
#line 2861 "src/parse.y"
    {
                      (yyval.nd) = negate_lit(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 456:
#line 2865 "src/parse.y"
    {
                      (yyval.nd) = negate_lit(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 457:
#line 2871 "src/parse.y"
    {
                      (yyval.nd) = new_lvar(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 458:
#line 2875 "src/parse.y"
    {
                      (yyval.nd) = new_ivar(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 459:
#line 2879 "src/parse.y"
    {
                      (yyval.nd) = new_gvar(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 460:
#line 2883 "src/parse.y"
    {
                      (yyval.nd) = new_cvar(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 461:
#line 2887 "src/parse.y"
    {
                      (yyval.nd) = new_const(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 462:
#line 2893 "src/parse.y"
    {
                      assignable(p, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 463:
#line 2899 "src/parse.y"
    {
                      (yyval.nd) = var_reference(p, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 464:
#line 2903 "src/parse.y"
    {
                      (yyval.nd) = new_nil(p);
                    ;}
    break;

  case 465:
#line 2907 "src/parse.y"
    {
                      (yyval.nd) = new_self(p);
                    ;}
    break;

  case 466:
#line 2911 "src/parse.y"
    {
                      (yyval.nd) = new_true(p);
                    ;}
    break;

  case 467:
#line 2915 "src/parse.y"
    {
                      (yyval.nd) = new_false(p);
                    ;}
    break;

  case 468:
#line 2919 "src/parse.y"
    {
                      if (!p->filename) {
                        p->filename = "(null)";
                      }
                      (yyval.nd) = new_str(p, p->filename, strlen(p->filename));
                    ;}
    break;

  case 469:
#line 2926 "src/parse.y"
    {
                      char buf[16];

                      snprintf(buf, sizeof(buf), "%d", p->lineno);
                      (yyval.nd) = new_int(p, buf, 10);
                    ;}
    break;

  case 472:
#line 2939 "src/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 473:
#line 2943 "src/parse.y"
    {
                      p->lstate = EXPR_BEG;
                      p->cmd_start = TRUE;
                    ;}
    break;

  case 474:
#line 2948 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(3) - (4)].nd);
                    ;}
    break;

  case 475:
#line 2952 "src/parse.y"
    {
                      yyerrok;
                      (yyval.nd) = 0;
                    ;}
    break;

  case 476:
#line 2959 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                      p->lstate = EXPR_BEG;
                      p->cmd_start = TRUE;
                    ;}
    break;

  case 477:
#line 2965 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 478:
#line 2971 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].nd), (yyvsp[(5) - (6)].id), 0, (yyvsp[(6) - (6)].id));
                    ;}
    break;

  case 479:
#line 2975 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (8)].nd), (yyvsp[(3) - (8)].nd), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].nd), (yyvsp[(8) - (8)].id));
                    ;}
    break;

  case 480:
#line 2979 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].nd), 0, 0, (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 481:
#line 2983 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].nd), 0, (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].id));
                    ;}
    break;

  case 482:
#line 2987 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (4)].nd), 0, (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 483:
#line 2991 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), 0, (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].id));
                    ;}
    break;

  case 484:
#line 2995 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (2)].nd), 0, 0, 0, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 485:
#line 2999 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 486:
#line 3003 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].id));
                    ;}
    break;

  case 487:
#line 3007 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (2)].nd), 0, 0, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 488:
#line 3011 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (4)].nd), 0, (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 489:
#line 3015 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, (yyvsp[(1) - (2)].id), 0, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 490:
#line 3019 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 491:
#line 3023 "src/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, 0, 0, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 492:
#line 3027 "src/parse.y"
    {
                      local_add_f(p, 0);
                      (yyval.nd) = new_args(p, 0, 0, 0, 0, 0);
                    ;}
    break;

  case 493:
#line 3034 "src/parse.y"
    {
                      yyerror(p, "formal argument cannot be a constant");
                      (yyval.nd) = 0;
                    ;}
    break;

  case 494:
#line 3039 "src/parse.y"
    {
                      yyerror(p, "formal argument cannot be an instance variable");
                      (yyval.nd) = 0;
                    ;}
    break;

  case 495:
#line 3044 "src/parse.y"
    {
                      yyerror(p, "formal argument cannot be a global variable");
                      (yyval.nd) = 0;
                    ;}
    break;

  case 496:
#line 3049 "src/parse.y"
    {
                      yyerror(p, "formal argument cannot be a class variable");
                      (yyval.nd) = 0;
                    ;}
    break;

  case 497:
#line 3056 "src/parse.y"
    {
                      (yyval.id) = 0;
                    ;}
    break;

  case 498:
#line 3060 "src/parse.y"
    {
                      local_add_f(p, (yyvsp[(1) - (1)].id));
                      (yyval.id) = (yyvsp[(1) - (1)].id);
                    ;}
    break;

  case 499:
#line 3067 "src/parse.y"
    {
                      (yyval.nd) = new_arg(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 500:
#line 3071 "src/parse.y"
    {
                      (yyval.nd) = new_masgn(p, (yyvsp[(2) - (3)].nd), 0);
                    ;}
    break;

  case 501:
#line 3077 "src/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 502:
#line 3081 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 503:
#line 3087 "src/parse.y"
    {
                      local_add_f(p, (yyvsp[(1) - (2)].id));
                      (yyval.id) = (yyvsp[(1) - (2)].id);
                    ;}
    break;

  case 504:
#line 3094 "src/parse.y"
    {
                      (yyval.nd) = cons(nsym((yyvsp[(1) - (2)].id)), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 505:
#line 3100 "src/parse.y"
    {
                      (yyval.nd) = cons(nsym((yyvsp[(1) - (2)].id)), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 506:
#line 3106 "src/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 507:
#line 3110 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 508:
#line 3116 "src/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 509:
#line 3120 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 512:
#line 3130 "src/parse.y"
    {
                      local_add_f(p, (yyvsp[(2) - (2)].id));
                      (yyval.id) = (yyvsp[(2) - (2)].id);
                    ;}
    break;

  case 513:
#line 3135 "src/parse.y"
    {
                      local_add_f(p, 0);
                      (yyval.id) = -1;
                    ;}
    break;

  case 516:
#line 3146 "src/parse.y"
    {
                      local_add_f(p, (yyvsp[(2) - (2)].id));
                      (yyval.id) = (yyvsp[(2) - (2)].id);
                    ;}
    break;

  case 517:
#line 3153 "src/parse.y"
    {
                      (yyval.id) = (yyvsp[(2) - (2)].id);
                    ;}
    break;

  case 518:
#line 3157 "src/parse.y"
    {
                      local_add_f(p, 0);
                      (yyval.id) = 0;
                    ;}
    break;

  case 519:
#line 3164 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                      if (!(yyval.nd)) (yyval.nd) = new_nil(p);
                    ;}
    break;

  case 520:
#line 3168 "src/parse.y"
    {p->lstate = EXPR_BEG;;}
    break;

  case 521:
#line 3169 "src/parse.y"
    {
                      if ((yyvsp[(3) - (4)].nd) == 0) {
                        yyerror(p, "can't define singleton method for ().");
                      }
                      else {
                        switch ((enum node_type)(int)(intptr_t)(yyvsp[(3) - (4)].nd)->car) {
                        case NODE_STR:
                        case NODE_DSTR:
                        case NODE_XSTR:
                        case NODE_DXSTR:
                        case NODE_DREGX:
                        case NODE_MATCH:
                        case NODE_FLOAT:
                        case NODE_ARRAY:
                        case NODE_HEREDOC:
                          yyerror(p, "can't define singleton method for literals");
                        default:
                          break;
                        }
                      }
                      (yyval.nd) = (yyvsp[(3) - (4)].nd);
                    ;}
    break;

  case 523:
#line 3195 "src/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 524:
#line 3201 "src/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 525:
#line 3206 "src/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 526:
#line 3212 "src/parse.y"
    {
                      (yyval.nd) = cons((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 527:
#line 3216 "src/parse.y"
    {
                      (yyval.nd) = cons(new_sym(p, (yyvsp[(1) - (2)].id)), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 549:
#line 3260 "src/parse.y"
    {yyerrok;;}
    break;

  case 551:
#line 3265 "src/parse.y"
    {
                      p->lineno++;
                      p->column = 0;
                    ;}
    break;

  case 554:
#line 3272 "src/parse.y"
    {yyerrok;;}
    break;

  case 555:
#line 3276 "src/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 8537 "/Users/ongaeshi/Documents/mruby-1.1.0/build/host/src/y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (p, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (p, yymsg);
	  }
	else
	  {
	    yyerror (p, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, p);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, p);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (p, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, p);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, p);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 3280 "src/parse.y"

#define yylval  (*((YYSTYPE*)(p->ylval)))

static void
yyerror(parser_state *p, const char *s)
{
  char* c;
  int n;

  if (! p->capture_errors) {
#ifdef ENABLE_STDIO
    if (p->filename) {
      fprintf(stderr, "%s:%d:%d: %s\n", p->filename, p->lineno, p->column, s);
    }
    else {
      fprintf(stderr, "line %d:%d: %s\n", p->lineno, p->column, s);
    }
#endif
  }
  else if (p->nerr < sizeof(p->error_buffer) / sizeof(p->error_buffer[0])) {
    n = strlen(s);
    c = (char *)parser_palloc(p, n + 1);
    memcpy(c, s, n + 1);
    p->error_buffer[p->nerr].message = c;
    p->error_buffer[p->nerr].lineno = p->lineno;
    p->error_buffer[p->nerr].column = p->column;
  }
  p->nerr++;
}

static void
yyerror_i(parser_state *p, const char *fmt, int i)
{
  char buf[256];

  snprintf(buf, sizeof(buf), fmt, i);
  yyerror(p, buf);
}

static void
yywarn(parser_state *p, const char *s)
{
  char* c;
  int n;

  if (! p->capture_errors) {
#ifdef ENABLE_STDIO
    if (p->filename) {
      fprintf(stderr, "%s:%d:%d: %s\n", p->filename, p->lineno, p->column, s);
    }
    else {
      fprintf(stderr, "line %d:%d: %s\n", p->lineno, p->column, s);
    }
#endif
  }
  else if (p->nwarn < sizeof(p->warn_buffer) / sizeof(p->warn_buffer[0])) {
    n = strlen(s);
    c = (char *)parser_palloc(p, n + 1);
    memcpy(c, s, n + 1);
    p->warn_buffer[p->nwarn].message = c;
    p->warn_buffer[p->nwarn].lineno = p->lineno;
    p->warn_buffer[p->nwarn].column = p->column;
  }
  p->nwarn++;
}

static void
yywarning(parser_state *p, const char *s)
{
  yywarn(p, s);
}

static void
yywarning_s(parser_state *p, const char *fmt, const char *s)
{
  char buf[256];

  snprintf(buf, sizeof(buf), fmt, s);
  yywarning(p, buf);
}

static void
backref_error(parser_state *p, node *n)
{
  int c;

  c = (int)(intptr_t)n->car;

  if (c == NODE_NTH_REF) {
    yyerror_i(p, "can't set variable $%d", (int)(intptr_t)n->cdr);
  }
  else if (c == NODE_BACK_REF) {
    yyerror_i(p, "can't set variable $%c", (int)(intptr_t)n->cdr);
  }
  else {
    mrb_bug(p->mrb, "Internal error in backref_error() : n=>car == %S", mrb_fixnum_value(c));
  }
}

static void pushback(parser_state *p, int c);
static mrb_bool peeks(parser_state *p, const char *s);
static mrb_bool skips(parser_state *p, const char *s);

static inline int
nextc(parser_state *p)
{
  int c;

  if (p->pb) {
    node *tmp;

    c = (int)(intptr_t)p->pb->car;
    tmp = p->pb;
    p->pb = p->pb->cdr;
    cons_free(tmp);
  }
  else {
#ifdef ENABLE_STDIO
    if (p->f) {
      if (feof(p->f)) goto eof;
      c = fgetc(p->f);
      if (c == EOF) goto eof;
    }
    else
#endif
      if (!p->s || p->s >= p->send) {
        goto eof;
      }
      else {
        c = (unsigned char)*p->s++;
      }
  }
  if (c >= 0) {
    p->column++;
  }
  if (c == '\r') {
    c = nextc(p);
    if (c != '\n') {
      pushback(p, c);
      return '\r';
    }
    return c;
  }
  return c;

  eof:
  if (!p->cxt) return -1;
  else {
    if (p->cxt->partial_hook(p) < 0)
      return -1;                /* end of program(s) */
    return -2;                  /* end of a file in the program files */
  }
}

static void
pushback(parser_state *p, int c)
{
  if (c >= 0) {
    p->column--;
  }
  p->pb = cons((node*)(intptr_t)c, p->pb);
}

static void
skip(parser_state *p, char term)
{
  int c;

  for (;;) {
    c = nextc(p);
    if (c < 0) break;
    if (c == term) break;
  }
}

static int
peekc_n(parser_state *p, int n)
{
  node *list = 0;
  int c0;

  do {
    c0 = nextc(p);
    if (c0 == -1) return c0;    /* do not skip partial EOF */
    list = push(list, (node*)(intptr_t)c0);
  } while(n--);
  if (p->pb) {
    p->pb = append((node*)list, p->pb);
  }
  else {
    p->pb = list;
  }
  return c0;
}

static mrb_bool
peek_n(parser_state *p, int c, int n)
{
  return peekc_n(p, n) == c && c >= 0;
}
#define peek(p,c) peek_n((p), (c), 0)

static mrb_bool
peeks(parser_state *p, const char *s)
{
  int len = strlen(s);

#ifdef ENABLE_STDIO
  if (p->f) {
    int n = 0;
    while (*s) {
      if (!peek_n(p, *s++, n++)) return FALSE;
    }
    return TRUE;
  }
  else
#endif
    if (p->s && p->s + len <= p->send) {
      if (memcmp(p->s, s, len) == 0) return TRUE;
    }
  return FALSE;
}

static mrb_bool
skips(parser_state *p, const char *s)
{
  int c;

  for (;;) {
    /* skip until first char */
    for (;;) {
      c = nextc(p);
      if (c < 0) return c;
      if (c == '\n') {
        p->lineno++;
        p->column = 0;
      }
      if (c == *s) break;
    }
    s++;
    if (peeks(p, s)) {
      int len = strlen(s);

      while (len--) {
        if (nextc(p) == '\n') {
          p->lineno++;
          p->column = 0;
        }
      }
      return TRUE;
    }
    else{
      s--;
    }
  }
  return FALSE;
}


static int
newtok(parser_state *p)
{
  p->bidx = 0;
  return p->column - 1;
}

static void
tokadd(parser_state *p, int32_t c)
{
  char utf8[4];
  unsigned len;

  /* mrb_assert(-0x10FFFF <= c && c <= 0xFF); */
  if (c >= 0) {
    /* Single byte from source or non-Unicode escape */
    utf8[0] = (char)c;
    len = 1;
  }
  else {
    /* Unicode character */
    c = -c;
    if (c < 0x80) {
      utf8[0] = (char)c;
      len = 1;
    }
    else if (c < 0x800) {
      utf8[0] = (char)(0xC0 | (c >> 6));
      utf8[1] = (char)(0x80 | (c & 0x3F));
      len = 2;
    }
    else if (c < 0x10000) {
      utf8[0] = (char)(0xE0 |  (c >> 12)        );
      utf8[1] = (char)(0x80 | ((c >>  6) & 0x3F));
      utf8[2] = (char)(0x80 | ( c        & 0x3F));
      len = 3;
    }
    else {
      utf8[0] = (char)(0xF0 |  (c >> 18)        );
      utf8[1] = (char)(0x80 | ((c >> 12) & 0x3F));
      utf8[2] = (char)(0x80 | ((c >>  6) & 0x3F));
      utf8[3] = (char)(0x80 | ( c        & 0x3F));
      len = 4;
    }
  }
  if (p->bidx+len <= MRB_PARSER_BUF_SIZE) {
    unsigned i;
    for (i = 0; i < len; i++) {
      p->buf[p->bidx++] = utf8[i];
    }
  }
}

static int
toklast(parser_state *p)
{
  return p->buf[p->bidx-1];
}

static void
tokfix(parser_state *p)
{
  if (p->bidx >= MRB_PARSER_BUF_SIZE) {
    yyerror(p, "string too long (truncated)");
  }
  p->buf[p->bidx] = '\0';
}

static const char*
tok(parser_state *p)
{
  return p->buf;
}

static int
toklen(parser_state *p)
{
  return p->bidx;
}

#define IS_ARG() (p->lstate == EXPR_ARG || p->lstate == EXPR_CMDARG)
#define IS_END() (p->lstate == EXPR_END || p->lstate == EXPR_ENDARG || p->lstate == EXPR_ENDFN)
#define IS_BEG() (p->lstate == EXPR_BEG || p->lstate == EXPR_MID || p->lstate == EXPR_VALUE || p->lstate == EXPR_CLASS)
#define IS_SPCARG(c) (IS_ARG() && space_seen && !ISSPACE(c))
#define IS_LABEL_POSSIBLE() ((p->lstate == EXPR_BEG && !cmd_state) || IS_ARG())
#define IS_LABEL_SUFFIX(n) (peek_n(p, ':',(n)) && !peek_n(p, ':', (n)+1))

static int
scan_oct(const int *start, int len, int *retlen)
{
  const int *s = start;
  int retval = 0;

  /* mrb_assert(len <= 3) */
  while (len-- && *s >= '0' && *s <= '7') {
    retval <<= 3;
    retval |= *s++ - '0';
  }
  *retlen = s - start;

  return retval;
}

static int32_t
scan_hex(const int *start, int len, int *retlen)
{
  static const char hexdigit[] = "0123456789abcdef0123456789ABCDEF";
  const int *s = start;
  int32_t retval = 0;
  char *tmp;

  /* mrb_assert(len <= 8) */
  while (len-- && *s && (tmp = (char*)strchr(hexdigit, *s))) {
    retval <<= 4;
    retval |= (tmp - hexdigit) & 15;
    s++;
  }
  *retlen = s - start;

  return retval;
}

/* Return negative to indicate Unicode code point */
static int32_t
read_escape(parser_state *p)
{
  int32_t c;

  switch (c = nextc(p)) {
  case '\\':/* Backslash */
    return c;

  case 'n':/* newline */
    return '\n';

  case 't':/* horizontal tab */
    return '\t';

  case 'r':/* carriage-return */
    return '\r';

  case 'f':/* form-feed */
    return '\f';

  case 'v':/* vertical tab */
    return '\13';

  case 'a':/* alarm(bell) */
    return '\007';

  case 'e':/* escape */
    return 033;

  case '0': case '1': case '2': case '3': /* octal constant */
  case '4': case '5': case '6': case '7':
  {
    int buf[3];
    int i;

    buf[0] = c;
    for (i=1; i<3; i++) {
      buf[i] = nextc(p);
      if (buf[i] < 0) goto eof;
      if (buf[i] < '0' || '7' < buf[i]) {
        pushback(p, buf[i]);
        break;
      }
    }
    c = scan_oct(buf, i, &i);
  }
  return c;

  case 'x':     /* hex constant */
  {
    int buf[2];
    int i;

    for (i=0; i<2; i++) {
      buf[i] = nextc(p);
      if (buf[i] < 0) goto eof;
      if (!ISXDIGIT(buf[i])) {
        pushback(p, buf[i]);
        break;
      }
    }
    c = scan_hex(buf, i, &i);
    if (i == 0) {
      yyerror(p, "Invalid escape character syntax");
      return 0;
    }
  }
  return c;

  case 'u':     /* Unicode */
  {
    int buf[9];
    int i;

    /* Look for opening brace */
    i = 0;
    buf[0] = nextc(p);
    if (buf[0] < 0) goto eof;
    if (buf[0] == '{') {
      /* \u{xxxxxxxx} form */
      for (i=0; i<9; i++) {
        buf[i] = nextc(p);
        if (buf[i] < 0) goto eof;
        if (buf[i] == '}') {
          break;
        }
        else if (!ISXDIGIT(buf[i])) {
          yyerror(p, "Invalid escape character syntax");
          pushback(p, buf[i]);
          return 0;
        }
      }
    }
    else if (ISXDIGIT(buf[0])) {
      /* \uxxxx form */
      for (i=1; i<4; i++) {
        buf[i] = nextc(p);
        if (buf[i] < 0) goto eof;
        if (!ISXDIGIT(buf[i])) {
          pushback(p, buf[i]);
          break;
        }
      }
    }
    else {
      pushback(p, buf[0]);
    }
    c = scan_hex(buf, i, &i);
    if (i == 0) {
      yyerror(p, "Invalid escape character syntax");
      return 0;
    }
    if (c < 0 || c > 0x10FFFF || (c & 0xFFFFF800) == 0xD800) {
      yyerror(p, "Invalid Unicode code point");
      return 0;
    }
  }
  return -c;

  case 'b':/* backspace */
    return '\010';

  case 's':/* space */
    return ' ';

  case 'M':
    if ((c = nextc(p)) != '-') {
      yyerror(p, "Invalid escape character syntax");
      pushback(p, c);
      return '\0';
    }
    if ((c = nextc(p)) == '\\') {
      return read_escape(p) | 0x80;
    }
    else if (c < 0) goto eof;
    else {
      return ((c & 0xff) | 0x80);
    }

  case 'C':
    if ((c = nextc(p)) != '-') {
      yyerror(p, "Invalid escape character syntax");
      pushback(p, c);
      return '\0';
    }
  case 'c':
    if ((c = nextc(p))== '\\') {
      c = read_escape(p);
    }
    else if (c == '?')
      return 0177;
    else if (c < 0) goto eof;
    return c & 0x9f;

    eof:
  case -1:
  case -2:                      /* end of a file */
    yyerror(p, "Invalid escape character syntax");
    return '\0';

  default:
    return c;
  }
}

static int
parse_string(parser_state *p)
{
  int c;
  string_type type = (string_type)(intptr_t)p->lex_strterm->car;
  int nest_level = (intptr_t)p->lex_strterm->cdr->car;
  int beg = (intptr_t)p->lex_strterm->cdr->cdr->car;
  int end = (intptr_t)p->lex_strterm->cdr->cdr->cdr;
  parser_heredoc_info *hinf = (type & STR_FUNC_HEREDOC) ? parsing_heredoc_inf(p) : NULL;

  newtok(p);
  while ((c = nextc(p)) != end || nest_level != 0) {
    if (hinf && (c == '\n' || c < 0)) {
      mrb_bool line_head;
      tokadd(p, '\n');
      tokfix(p);
      p->lineno++;
      p->column = 0;
      line_head = hinf->line_head;
      hinf->line_head = TRUE;
      if (line_head) {
        /* check whether end of heredoc */
        const char *s = tok(p);
        int len = toklen(p);
        if (hinf->allow_indent) {
          while (ISSPACE(*s) && len > 0) {
            ++s;
            --len;
          }
        }
        if ((len-1 == hinf->term_len) && (strncmp(s, hinf->term, len-1) == 0)) {
          return tHEREDOC_END;
        }
      }
      if (c < 0) {
        char buf[256];
        snprintf(buf, sizeof(buf), "can't find heredoc delimiter \"%s\" anywhere before EOF", hinf->term);
        yyerror(p, buf);
        return 0;
      }
      yylval.nd = new_str(p, tok(p), toklen(p));
      return tHD_STRING_MID;
    }
    if (c < 0) {
      yyerror(p, "unterminated string meets end of file");
      return 0;
    }
    else if (c == beg) {
      nest_level++;
      p->lex_strterm->cdr->car = (node*)(intptr_t)nest_level;
    }
    else if (c == end) {
      nest_level--;
      p->lex_strterm->cdr->car = (node*)(intptr_t)nest_level;
    }
    else if (c == '\\') {
      c = nextc(p);
      if (type & STR_FUNC_EXPAND) {
        if (c == end || c == beg) {
          tokadd(p, c);
        }
        else if (c == '\n') {
          p->lineno++;
          p->column = 0;
          if (type & STR_FUNC_ARRAY) {
            tokadd(p, '\n');
          }
        }
        else if (type & STR_FUNC_REGEXP) {
          tokadd(p, '\\');
          tokadd(p, c);
        }
        else {
          pushback(p, c);
          tokadd(p, read_escape(p));
          if (hinf)
            hinf->line_head = FALSE;
        }
      }
      else {
        if (c != beg && c != end) {
          if (c == '\n') {
            p->lineno++;
            p->column = 0;
          }
          if (!(c == '\\' || ((type & STR_FUNC_ARRAY) && ISSPACE(c)))) {
            tokadd(p, '\\');
          }
        }
        tokadd(p, c);
      }
      continue;
    }
    else if ((c == '#') && (type & STR_FUNC_EXPAND)) {
      c = nextc(p);
      if (c == '{') {
        tokfix(p);
        p->lstate = EXPR_BEG;
        p->cmd_start = TRUE;
        yylval.nd = new_str(p, tok(p), toklen(p));
        if (hinf) {
          hinf->line_head = FALSE;
          return tHD_STRING_PART;
        }
        return tSTRING_PART;
      }
      tokadd(p, '#');
      pushback(p, c);
      continue;
    }
    if ((type & STR_FUNC_ARRAY) && ISSPACE(c)) {
      if (toklen(p) == 0) {
        do {
          if (c == '\n') {
            p->lineno++;
            p->column = 0;
            heredoc_treat_nextline(p);
            if (p->parsing_heredoc != NULL) {
              return tHD_LITERAL_DELIM;
            }
          }
          c = nextc(p);
        } while (ISSPACE(c));
        pushback(p, c);
        return tLITERAL_DELIM;
      }
      else {
        pushback(p, c);
        tokfix(p);
        yylval.nd = new_str(p, tok(p), toklen(p));
        return tSTRING_MID;
      }
    }
    tokadd(p, c);
  }

  tokfix(p);
  p->lstate = EXPR_END;
  end_strterm(p);

  if (type & STR_FUNC_XQUOTE) {
    yylval.nd = new_xstr(p, tok(p), toklen(p));
    return tXSTRING;
  }

  if (type & STR_FUNC_REGEXP) {
    int f = 0;
    int re_opt;
    char *s = strndup(tok(p), toklen(p));
    char flags[3];
    char *flag = flags;
    char *dup;

    newtok(p);
    while (re_opt = nextc(p), re_opt >= 0 && ISALPHA(re_opt)) {
      switch (re_opt) {
      case 'i': f |= 1; break;
      case 'x': f |= 2; break;
      case 'm': f |= 4; break;
      default: tokadd(p, re_opt); break;
      }
    }
    pushback(p, re_opt);
    if (toklen(p)) {
      char msg[128];
      tokfix(p);
      snprintf(msg, sizeof(msg), "unknown regexp option%s - %s",
          toklen(p) > 1 ? "s" : "", tok(p));
      yyerror(p, msg);
    }
    if (f != 0) {
      if (f & 1) *flag++ = 'i';
      if (f & 2) *flag++ = 'x';
      if (f & 4) *flag++ = 'm';
      dup = strndup(flags, (size_t)(flag - flags));
    }
    else {
      dup = NULL;
    }
    yylval.nd = new_regx(p, s, dup);

    return tREGEXP;
  }

  yylval.nd = new_str(p, tok(p), toklen(p));
  return tSTRING;
}


static int
heredoc_identifier(parser_state *p)
{
  int c;
  int type = str_heredoc;
  mrb_bool indent = FALSE;
  mrb_bool quote = FALSE;
  node *newnode;
  parser_heredoc_info *info;

  c = nextc(p);
  if (ISSPACE(c) || c == '=') {
    pushback(p, c);
    return 0;
  }
  if (c == '-') {
    indent = TRUE;
    c = nextc(p);
  }
  if (c == '\'' || c == '"') {
    int term = c;
    if (c == '\'')
      quote = TRUE;
    newtok(p);
    while ((c = nextc(p)) >= 0 && c != term) {
      if (c == '\n') {
        c = -1;
        break;
      }
      tokadd(p, c);
    }
    if (c < 0) {
      yyerror(p, "unterminated here document identifier");
      return 0;
    }
  }
  else {
    if (c < 0) {
      return 0;                 /* missing here document identifier */
    }
    if (! identchar(c)) {
      pushback(p, c);
      if (indent) pushback(p, '-');
      return 0;
    }
    newtok(p);
    do {
      tokadd(p, c);
    } while ((c = nextc(p)) >= 0 && identchar(c));
    pushback(p, c);
  }
  tokfix(p);
  newnode = new_heredoc(p);
  info = (parser_heredoc_info*)newnode->cdr;
  info->term = strndup(tok(p), toklen(p));
  info->term_len = toklen(p);
  if (! quote)
    type |= STR_FUNC_EXPAND;
  info->type = (string_type)type;
  info->allow_indent = indent;
  info->line_head = TRUE;
  info->doc = NULL;
  p->heredocs_from_nextline = push(p->heredocs_from_nextline, newnode);
  p->lstate = EXPR_END;

  yylval.nd = newnode;
  return tHEREDOC_BEG;
}

static int
arg_ambiguous(parser_state *p)
{
  yywarning(p, "ambiguous first argument; put parentheses or even spaces");
  return 1;
}

#include "lex.def"

static int
parser_yylex(parser_state *p)
{
  int32_t c;
  int space_seen = 0;
  int cmd_state;
  enum mrb_lex_state_enum last_state;
  int token_column;

  if (p->lex_strterm) {
    if (is_strterm_type(p, STR_FUNC_HEREDOC)) {
      if (p->parsing_heredoc != NULL)
        return parse_string(p);
    }
    else
      return parse_string(p);
  }
  cmd_state = p->cmd_start;
  p->cmd_start = FALSE;
  retry:
  last_state = p->lstate;
  switch (c = nextc(p)) {
  case '\0':    /* NUL */
  case '\004':  /* ^D */
  case '\032':  /* ^Z */
    return 0;
  case -1:      /* end of script. */
    if (p->heredocs_from_nextline)
      goto maybe_heredoc;
    return 0;

  /* white spaces */
  case ' ': case '\t': case '\f': case '\r':
  case '\13':   /* '\v' */
    space_seen = 1;
    goto retry;

  case '#':     /* it's a comment */
    skip(p, '\n');
    /* fall through */
  case -2:      /* end of a file */
  case '\n':
    maybe_heredoc:
    heredoc_treat_nextline(p);
  switch (p->lstate) {
  case EXPR_BEG:
  case EXPR_FNAME:
  case EXPR_DOT:
  case EXPR_CLASS:
  case EXPR_VALUE:
    p->lineno++;
    p->column = 0;
    if (p->parsing_heredoc != NULL) {
      return parse_string(p);
    }
    goto retry;
  default:
    break;
  }
  if (p->parsing_heredoc != NULL) {
    return '\n';
  }
  while ((c = nextc(p))) {
    switch (c) {
    case ' ': case '\t': case '\f': case '\r':
    case '\13': /* '\v' */
      space_seen = 1;
      break;
    case '.':
      if ((c = nextc(p)) != '.') {
        pushback(p, c);
        pushback(p, '.');
        goto retry;
      }
    case -1:                  /* EOF */
    case -2:                  /* end of a file */
      goto normal_newline;
    default:
      pushback(p, c);
      goto normal_newline;
    }
  }
  normal_newline:
  p->cmd_start = TRUE;
  p->lstate = EXPR_BEG;
  return '\n';

  case '*':
    if ((c = nextc(p)) == '*') {
      if ((c = nextc(p)) == '=') {
        yylval.id = intern("**",2);
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      c = tPOW;
    }
    else {
      if (c == '=') {
        yylval.id = intern_c('*');
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      if (IS_SPCARG(c)) {
        yywarning(p, "`*' interpreted as argument prefix");
        c = tSTAR;
      }
      else if (IS_BEG()) {
        c = tSTAR;
      }
      else {
        c = '*';
      }
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    return c;

  case '!':
    c = nextc(p);
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
      if (c == '@') {
        return '!';
      }
    }
    else {
      p->lstate = EXPR_BEG;
    }
    if (c == '=') {
      return tNEQ;
    }
    if (c == '~') {
      return tNMATCH;
    }
    pushback(p, c);
    return '!';

  case '=':
    if (p->column == 1) {
      static const char begin[] = "begin";
      static const char end[] = "\n=end";
      if (peeks(p, begin)) {
        c = peekc_n(p, sizeof(begin)-1);
        if (c < 0 || ISSPACE(c)) {
          do {
            if (!skips(p, end)) {
              yyerror(p, "embedded document meets end of file");
              return 0;
            }
            c = nextc(p);
          } while (!(c < 0 || ISSPACE(c)));
          if (c != '\n') skip(p, '\n');
          p->lineno++;
          p->column = 0;
          goto retry;
        }
      }
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    if ((c = nextc(p)) == '=') {
      if ((c = nextc(p)) == '=') {
        return tEQQ;
      }
      pushback(p, c);
      return tEQ;
    }
    if (c == '~') {
      return tMATCH;
    }
    else if (c == '>') {
      return tASSOC;
    }
    pushback(p, c);
    return '=';

  case '<':
    c = nextc(p);
    if (c == '<' &&
        p->lstate != EXPR_DOT &&
        p->lstate != EXPR_CLASS &&
        !IS_END() &&
        (!IS_ARG() || space_seen)) {
      int token = heredoc_identifier(p);
      if (token)
        return token;
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
      if (p->lstate == EXPR_CLASS) {
        p->cmd_start = TRUE;
      }
    }
    if (c == '=') {
      if ((c = nextc(p)) == '>') {
        return tCMP;
      }
      pushback(p, c);
      return tLEQ;
    }
    if (c == '<') {
      if ((c = nextc(p)) == '=') {
        yylval.id = intern("<<",2);
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      return tLSHFT;
    }
    pushback(p, c);
    return '<';

  case '>':
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    if ((c = nextc(p)) == '=') {
      return tGEQ;
    }
    if (c == '>') {
      if ((c = nextc(p)) == '=') {
        yylval.id = intern(">>",2);
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      return tRSHFT;
    }
    pushback(p, c);
    return '>';

  case '"':
    p->lex_strterm = new_strterm(p, str_dquote, '"', 0);
    return tSTRING_BEG;

  case '\'':
    p->lex_strterm = new_strterm(p, str_squote, '\'', 0);
    return parse_string(p);

  case '`':
    if (p->lstate == EXPR_FNAME) {
      p->lstate = EXPR_ENDFN;
      return '`';
    }
    if (p->lstate == EXPR_DOT) {
      if (cmd_state)
        p->lstate = EXPR_CMDARG;
      else
        p->lstate = EXPR_ARG;
      return '`';
    }
    p->lex_strterm = new_strterm(p, str_xquote, '`', 0);
    return tXSTRING_BEG;

  case '?':
    if (IS_END()) {
      p->lstate = EXPR_VALUE;
      return '?';
    }
    c = nextc(p);
    if (c < 0) {
      yyerror(p, "incomplete character syntax");
      return 0;
    }
    if (ISSPACE(c)) {
      if (!IS_ARG()) {
        int c2;
        switch (c) {
        case ' ':
          c2 = 's';
          break;
        case '\n':
          c2 = 'n';
          break;
        case '\t':
          c2 = 't';
          break;
        case '\v':
          c2 = 'v';
          break;
        case '\r':
          c2 = 'r';
          break;
        case '\f':
          c2 = 'f';
          break;
        default:
          c2 = 0;
          break;
        }
        if (c2) {
          char buf[256];
          snprintf(buf, sizeof(buf), "invalid character syntax; use ?\\%c", c2);
          yyerror(p, buf);
        }
      }
      ternary:
      pushback(p, c);
      p->lstate = EXPR_VALUE;
      return '?';
    }
    newtok(p);
    /* need support UTF-8 if configured */
    if ((isalnum(c) || c == '_')) {
      int c2 = nextc(p);
      pushback(p, c2);
      if ((isalnum(c2) || c2 == '_')) {
        goto ternary;
      }
    }
    if (c == '\\') {
      c = read_escape(p);
      tokadd(p, c);
    }
    else {
      tokadd(p, c);
    }
    tokfix(p);
    yylval.nd = new_str(p, tok(p), toklen(p));
    p->lstate = EXPR_END;
    return tCHAR;

  case '&':
    if ((c = nextc(p)) == '&') {
      p->lstate = EXPR_BEG;
      if ((c = nextc(p)) == '=') {
        yylval.id = intern("&&",2);
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      return tANDOP;
    }
    else if (c == '=') {
      yylval.id = intern_c('&');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    pushback(p, c);
    if (IS_SPCARG(c)) {
      yywarning(p, "`&' interpreted as argument prefix");
      c = tAMPER;
    }
    else if (IS_BEG()) {
      c = tAMPER;
    }
    else {
      c = '&';
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    return c;

  case '|':
    if ((c = nextc(p)) == '|') {
      p->lstate = EXPR_BEG;
      if ((c = nextc(p)) == '=') {
        yylval.id = intern("||",2);
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      return tOROP;
    }
    if (c == '=') {
      yylval.id = intern_c('|');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    pushback(p, c);
    return '|';

  case '+':
    c = nextc(p);
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
      if (c == '@') {
        return tUPLUS;
      }
      pushback(p, c);
      return '+';
    }
    if (c == '=') {
      yylval.id = intern_c('+');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    if (IS_BEG() || (IS_SPCARG(c) && arg_ambiguous(p))) {
      p->lstate = EXPR_BEG;
      pushback(p, c);
      if (c >= 0 && ISDIGIT(c)) {
        c = '+';
        goto start_num;
      }
      return tUPLUS;
    }
    p->lstate = EXPR_BEG;
    pushback(p, c);
    return '+';

  case '-':
    c = nextc(p);
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
      if (c == '@') {
        return tUMINUS;
      }
      pushback(p, c);
      return '-';
    }
    if (c == '=') {
      yylval.id = intern_c('-');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    if (c == '>') {
      p->lstate = EXPR_ENDFN;
      return tLAMBDA;
    }
    if (IS_BEG() || (IS_SPCARG(c) && arg_ambiguous(p))) {
      p->lstate = EXPR_BEG;
      pushback(p, c);
      if (c >= 0 && ISDIGIT(c)) {
        return tUMINUS_NUM;
      }
      return tUMINUS;
    }
    p->lstate = EXPR_BEG;
    pushback(p, c);
    return '-';

  case '.':
    p->lstate = EXPR_BEG;
    if ((c = nextc(p)) == '.') {
      if ((c = nextc(p)) == '.') {
        return tDOT3;
      }
      pushback(p, c);
      return tDOT2;
    }
    pushback(p, c);
    if (c >= 0 && ISDIGIT(c)) {
      yyerror(p, "no .<digit> floating literal anymore; put 0 before dot");
    }
    p->lstate = EXPR_DOT;
    return '.';

    start_num:
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
  {
    int is_float, seen_point, seen_e, nondigit;

    is_float = seen_point = seen_e = nondigit = 0;
    p->lstate = EXPR_END;
    newtok(p);
    if (c == '-' || c == '+') {
      tokadd(p, c);
      c = nextc(p);
    }
    if (c == '0') {
#define no_digits() do {yyerror(p,"numeric literal without digits"); return 0;} while (0)
      int start = toklen(p);
      c = nextc(p);
      if (c == 'x' || c == 'X') {
        /* hexadecimal */
        c = nextc(p);
        if (c >= 0 && ISXDIGIT(c)) {
          do {
            if (c == '_') {
              if (nondigit) break;
              nondigit = c;
              continue;
            }
            if (!ISXDIGIT(c)) break;
            nondigit = 0;
            tokadd(p, tolower(c));
          } while ((c = nextc(p)) >= 0);
        }
        pushback(p, c);
        tokfix(p);
        if (toklen(p) == start) {
          no_digits();
        }
        else if (nondigit) goto trailing_uc;
        yylval.nd = new_int(p, tok(p), 16);
        return tINTEGER;
      }
      if (c == 'b' || c == 'B') {
        /* binary */
        c = nextc(p);
        if (c == '0' || c == '1') {
          do {
            if (c == '_') {
              if (nondigit) break;
              nondigit = c;
              continue;
            }
            if (c != '0' && c != '1') break;
            nondigit = 0;
            tokadd(p, c);
          } while ((c = nextc(p)) >= 0);
        }
        pushback(p, c);
        tokfix(p);
        if (toklen(p) == start) {
          no_digits();
        }
        else if (nondigit) goto trailing_uc;
        yylval.nd = new_int(p, tok(p), 2);
        return tINTEGER;
      }
      if (c == 'd' || c == 'D') {
        /* decimal */
        c = nextc(p);
        if (c >= 0 && ISDIGIT(c)) {
          do {
            if (c == '_') {
              if (nondigit) break;
              nondigit = c;
              continue;
            }
            if (!ISDIGIT(c)) break;
            nondigit = 0;
            tokadd(p, c);
          } while ((c = nextc(p)) >= 0);
        }
        pushback(p, c);
        tokfix(p);
        if (toklen(p) == start) {
          no_digits();
        }
        else if (nondigit) goto trailing_uc;
        yylval.nd = new_int(p, tok(p), 10);
        return tINTEGER;
      }
      if (c == '_') {
        /* 0_0 */
        goto octal_number;
      }
      if (c == 'o' || c == 'O') {
        /* prefixed octal */
        c = nextc(p);
        if (c < 0 || c == '_' || !ISDIGIT(c)) {
          no_digits();
        }
      }
      if (c >= '0' && c <= '7') {
        /* octal */
        octal_number:
        do {
          if (c == '_') {
            if (nondigit) break;
            nondigit = c;
            continue;
          }
          if (c < '0' || c > '9') break;
          if (c > '7') goto invalid_octal;
          nondigit = 0;
          tokadd(p, c);
        } while ((c = nextc(p)) >= 0);

        if (toklen(p) > start) {
          pushback(p, c);
          tokfix(p);
          if (nondigit) goto trailing_uc;
          yylval.nd = new_int(p, tok(p), 8);
          return tINTEGER;
        }
        if (nondigit) {
          pushback(p, c);
          goto trailing_uc;
        }
      }
      if (c > '7' && c <= '9') {
        invalid_octal:
        yyerror(p, "Invalid octal digit");
      }
      else if (c == '.' || c == 'e' || c == 'E') {
        tokadd(p, '0');
      }
      else {
        pushback(p, c);
        yylval.nd = new_int(p, "0", 10);
        return tINTEGER;
      }
    }

    for (;;) {
      switch (c) {
      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
        nondigit = 0;
        tokadd(p, c);
        break;

      case '.':
        if (nondigit) goto trailing_uc;
        if (seen_point || seen_e) {
          goto decode_num;
        }
        else {
          int c0 = nextc(p);
          if (c0 < 0 || !ISDIGIT(c0)) {
            pushback(p, c0);
            goto decode_num;
          }
          c = c0;
        }
        tokadd(p, '.');
        tokadd(p, c);
        is_float++;
        seen_point++;
        nondigit = 0;
        break;

      case 'e':
      case 'E':
        if (nondigit) {
          pushback(p, c);
          c = nondigit;
          goto decode_num;
        }
        if (seen_e) {
          goto decode_num;
        }
        tokadd(p, c);
        seen_e++;
        is_float++;
        nondigit = c;
        c = nextc(p);
        if (c != '-' && c != '+') continue;
        tokadd(p, c);
        nondigit = c;
        break;

      case '_':       /* `_' in number just ignored */
        if (nondigit) goto decode_num;
        nondigit = c;
        break;

      default:
        goto decode_num;
      }
      c = nextc(p);
    }

    decode_num:
    pushback(p, c);
    if (nondigit) {
      trailing_uc:
      yyerror_i(p, "trailing `%c' in number", nondigit);
    }
    tokfix(p);
    if (is_float) {
      double d;
      char *endp;

      errno = 0;
      d = strtod(tok(p), &endp);
      if (d == 0 && endp == tok(p)) {
        yywarning_s(p, "corrupted float value %s", tok(p));
      }
      else if (errno == ERANGE) {
        yywarning_s(p, "float %s out of range", tok(p));
        errno = 0;
      }
      yylval.nd = new_float(p, tok(p));
      return tFLOAT;
    }
    yylval.nd = new_int(p, tok(p), 10);
    return tINTEGER;
  }

  case ')':
  case ']':
    p->paren_nest--;
  case '}':
    COND_LEXPOP();
    CMDARG_LEXPOP();
    if (c == ')')
      p->lstate = EXPR_ENDFN;
    else
      p->lstate = EXPR_ENDARG;
    return c;

  case ':':
    c = nextc(p);
    if (c == ':') {
      if (IS_BEG() || p->lstate == EXPR_CLASS || IS_SPCARG(-1)) {
        p->lstate = EXPR_BEG;
        return tCOLON3;
      }
      p->lstate = EXPR_DOT;
      return tCOLON2;
    }
    if (IS_END() || ISSPACE(c)) {
      pushback(p, c);
      p->lstate = EXPR_BEG;
      return ':';
    }
    pushback(p, c);
    p->lstate = EXPR_FNAME;
    return tSYMBEG;

  case '/':
    if (IS_BEG()) {
      p->lex_strterm = new_strterm(p, str_regexp, '/', 0);
      return tREGEXP_BEG;
    }
    if ((c = nextc(p)) == '=') {
      yylval.id = intern_c('/');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    pushback(p, c);
    if (IS_SPCARG(c)) {
      p->lex_strterm = new_strterm(p, str_regexp, '/', 0);
      return tREGEXP_BEG;
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    return '/';

  case '^':
    if ((c = nextc(p)) == '=') {
      yylval.id = intern_c('^');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    pushback(p, c);
    return '^';

  case ';':
    p->lstate = EXPR_BEG;
    return ';';

  case ',':
    p->lstate = EXPR_BEG;
    return ',';

  case '~':
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      if ((c = nextc(p)) != '@') {
        pushback(p, c);
      }
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    return '~';

  case '(':
    if (IS_BEG()) {
      c = tLPAREN;
    }
    else if (IS_SPCARG(-1)) {
      c = tLPAREN_ARG;
    }
    p->paren_nest++;
    COND_PUSH(0);
    CMDARG_PUSH(0);
    p->lstate = EXPR_BEG;
    return c;

  case '[':
    p->paren_nest++;
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
      if ((c = nextc(p)) == ']') {
        if ((c = nextc(p)) == '=') {
          return tASET;
        }
        pushback(p, c);
        return tAREF;
      }
      pushback(p, c);
      return '[';
    }
    else if (IS_BEG()) {
      c = tLBRACK;
    }
    else if (IS_ARG() && space_seen) {
      c = tLBRACK;
    }
    p->lstate = EXPR_BEG;
    COND_PUSH(0);
    CMDARG_PUSH(0);
    return c;

  case '{':
    if (p->lpar_beg && p->lpar_beg == p->paren_nest) {
      p->lstate = EXPR_BEG;
      p->lpar_beg = 0;
      p->paren_nest--;
      COND_PUSH(0);
      CMDARG_PUSH(0);
      return tLAMBEG;
    }
    if (IS_ARG() || p->lstate == EXPR_END || p->lstate == EXPR_ENDFN)
      c = '{';          /* block (primary) */
    else if (p->lstate == EXPR_ENDARG)
      c = tLBRACE_ARG;  /* block (expr) */
    else
      c = tLBRACE;      /* hash */
    COND_PUSH(0);
    CMDARG_PUSH(0);
    p->lstate = EXPR_BEG;
    return c;

  case '\\':
    c = nextc(p);
    if (c == '\n') {
      p->lineno++;
      p->column = 0;
      space_seen = 1;
      goto retry; /* skip \\n */
    }
    pushback(p, c);
    return '\\';

  case '%':
    if (IS_BEG()) {
      int term;
      int paren;

      c = nextc(p);
      quotation:
      if (c < 0 || !ISALNUM(c)) {
        term = c;
        c = 'Q';
      }
      else {
        term = nextc(p);
        if (isalnum(term)) {
          yyerror(p, "unknown type of %string");
          return 0;
        }
      }
      if (c < 0 || term < 0) {
        yyerror(p, "unterminated quoted string meets end of file");
        return 0;
      }
      paren = term;
      if (term == '(') term = ')';
      else if (term == '[') term = ']';
      else if (term == '{') term = '}';
      else if (term == '<') term = '>';
      else paren = 0;

      switch (c) {
      case 'Q':
        p->lex_strterm = new_strterm(p, str_dquote, term, paren);
        return tSTRING_BEG;

      case 'q':
        p->lex_strterm = new_strterm(p, str_squote, term, paren);
        return parse_string(p);

      case 'W':
        p->lex_strterm = new_strterm(p, str_dword, term, paren);
        return tWORDS_BEG;

      case 'w':
        p->lex_strterm = new_strterm(p, str_sword, term, paren);
        return tWORDS_BEG;

      case 'x':
        p->lex_strterm = new_strterm(p, str_xquote, term, paren);
        return tXSTRING_BEG;

      case 'r':
        p->lex_strterm = new_strterm(p, str_regexp, term, paren);
        return tREGEXP_BEG;

      case 's':
        p->lex_strterm = new_strterm(p, str_ssym, term, paren);
        return tSYMBEG;

      case 'I':
        p->lex_strterm = new_strterm(p, str_dsymbols, term, paren);
        return tSYMBOLS_BEG;

      case 'i':
        p->lex_strterm = new_strterm(p, str_ssymbols, term, paren);
        return tSYMBOLS_BEG;

      default:
        yyerror(p, "unknown type of %string");
        return 0;
      }
    }
    if ((c = nextc(p)) == '=') {
      yylval.id = intern_c('%');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    if (IS_SPCARG(c)) {
      goto quotation;
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    pushback(p, c);
    return '%';

  case '$':
    p->lstate = EXPR_END;
    token_column = newtok(p);
    c = nextc(p);
    if (c < 0) {
      yyerror(p, "incomplete global variable syntax");
      return 0;
    }
    switch (c) {
    case '_':     /* $_: last read line string */
      c = nextc(p);
      if (c >= 0 && identchar(c)) { /* if there is more after _ it is a variable */
        tokadd(p, '$');
        tokadd(p, c);
        break;
      }
      pushback(p, c);
      c = '_';
      /* fall through */
    case '~':     /* $~: match-data */
    case '*':     /* $*: argv */
    case '$':     /* $$: pid */
    case '?':     /* $?: last status */
    case '!':     /* $!: error string */
    case '@':     /* $@: error position */
    case '/':     /* $/: input record separator */
    case '\\':    /* $\: output record separator */
    case ';':     /* $;: field separator */
    case ',':     /* $,: output field separator */
    case '.':     /* $.: last read line number */
    case '=':     /* $=: ignorecase */
    case ':':     /* $:: load path */
    case '<':     /* $<: reading filename */
    case '>':     /* $>: default output handle */
    case '\"':    /* $": already loaded files */
      tokadd(p, '$');
      tokadd(p, c);
      tokfix(p);
      yylval.id = intern_cstr(tok(p));
      return tGVAR;

    case '-':
      tokadd(p, '$');
      tokadd(p, c);
      c = nextc(p);
      pushback(p, c);
      gvar:
      tokfix(p);
      yylval.id = intern_cstr(tok(p));
      return tGVAR;

    case '&':     /* $&: last match */
    case '`':     /* $`: string before last match */
    case '\'':    /* $': string after last match */
    case '+':     /* $+: string matches last pattern */
      if (last_state == EXPR_FNAME) {
        tokadd(p, '$');
        tokadd(p, c);
        goto gvar;
      }
      yylval.nd = new_back_ref(p, c);
      return tBACK_REF;

    case '1': case '2': case '3':
    case '4': case '5': case '6':
    case '7': case '8': case '9':
      do {
        tokadd(p, c);
        c = nextc(p);
      } while (c >= 0 && isdigit(c));
      pushback(p, c);
      if (last_state == EXPR_FNAME) goto gvar;
      tokfix(p);
      yylval.nd = new_nth_ref(p, atoi(tok(p)));
      return tNTH_REF;

    default:
      if (!identchar(c)) {
        pushback(p,  c);
        return '$';
      }
    case '0':
      tokadd(p, '$');
    }
    break;

    case '@':
      c = nextc(p);
      token_column = newtok(p);
      tokadd(p, '@');
      if (c == '@') {
        tokadd(p, '@');
        c = nextc(p);
      }
      if (c < 0) {
        if (p->bidx == 1) {
          yyerror(p, "incomplete instance variable syntax");
        }
        else {
          yyerror(p, "incomplete class variable syntax");
        }
        return 0;
      }
      else if (isdigit(c)) {
        if (p->bidx == 1) {
          yyerror_i(p, "`@%c' is not allowed as an instance variable name", c);
        }
        else {
          yyerror_i(p, "`@@%c' is not allowed as a class variable name", c);
        }
        return 0;
      }
      if (!identchar(c)) {
        pushback(p, c);
        return '@';
      }
      break;

    case '_':
      token_column = newtok(p);
      break;

    default:
      if (!identchar(c)) {
        yyerror_i(p,  "Invalid char `\\x%02X' in expression", c);
        goto retry;
      }

      token_column = newtok(p);
      break;
  }

  do {
    tokadd(p, c);
    c = nextc(p);
    if (c < 0) break;
  } while (identchar(c));
  if (token_column == 0 && toklen(p) == 7 && (c < 0 || c == '\n') &&
      strncmp(tok(p), "__END__", toklen(p)) == 0)
    return -1;

  switch (tok(p)[0]) {
  case '@': case '$':
    pushback(p, c);
    break;
  default:
    if ((c == '!' || c == '?') && !peek(p, '=')) {
      tokadd(p, c);
    }
    else {
      pushback(p, c);
    }
  }
  tokfix(p);
  {
    int result = 0;

    switch (tok(p)[0]) {
    case '$':
      p->lstate = EXPR_END;
      result = tGVAR;
      break;
    case '@':
      p->lstate = EXPR_END;
      if (tok(p)[1] == '@')
        result = tCVAR;
      else
        result = tIVAR;
      break;

    default:
      if (toklast(p) == '!' || toklast(p) == '?') {
        result = tFID;
      }
      else {
        if (p->lstate == EXPR_FNAME) {
          if ((c = nextc(p)) == '=' && !peek(p, '~') && !peek(p, '>') &&
              (!peek(p, '=') || (peek_n(p, '>', 1)))) {
            result = tIDENTIFIER;
            tokadd(p, c);
            tokfix(p);
          }
          else {
            pushback(p, c);
          }
        }
        if (result == 0 && ISUPPER(tok(p)[0])) {
          result = tCONSTANT;
        }
        else {
          result = tIDENTIFIER;
        }
      }

      if (IS_LABEL_POSSIBLE()) {
        if (IS_LABEL_SUFFIX(0)) {
          p->lstate = EXPR_BEG;
          nextc(p);
          tokfix(p);
          yylval.id = intern_cstr(tok(p));
          return tLABEL;
        }
      }
      if (p->lstate != EXPR_DOT) {
        const struct kwtable *kw;

        /* See if it is a reserved word.  */
        kw = mrb_reserved_word(tok(p), toklen(p));
        if (kw) {
          enum mrb_lex_state_enum state = p->lstate;
          yylval.num = p->lineno;
          p->lstate = kw->state;
          if (state == EXPR_FNAME) {
            yylval.id = intern_cstr(kw->name);
            return kw->id[0];
          }
          if (p->lstate == EXPR_BEG) {
            p->cmd_start = TRUE;
          }
          if (kw->id[0] == keyword_do) {
            if (p->lpar_beg && p->lpar_beg == p->paren_nest) {
              p->lpar_beg = 0;
              p->paren_nest--;
              return keyword_do_LAMBDA;
            }
            if (COND_P()) return keyword_do_cond;
            if (CMDARG_P() && state != EXPR_CMDARG)
              return keyword_do_block;
            if (state == EXPR_ENDARG || state == EXPR_BEG)
              return keyword_do_block;
            return keyword_do;
          }
          if (state == EXPR_BEG || state == EXPR_VALUE)
            return kw->id[0];
          else {
            if (kw->id[0] != kw->id[1])
              p->lstate = EXPR_BEG;
            return kw->id[1];
          }
        }
      }

      if (IS_BEG() || p->lstate == EXPR_DOT || IS_ARG()) {
        if (cmd_state) {
          p->lstate = EXPR_CMDARG;
        }
        else {
          p->lstate = EXPR_ARG;
        }
      }
      else if (p->lstate == EXPR_FNAME) {
        p->lstate = EXPR_ENDFN;
      }
      else {
        p->lstate = EXPR_END;
      }
    }
    {
      mrb_sym ident = intern_cstr(tok(p));

      yylval.id = ident;
#if 0
      if (last_state != EXPR_DOT && islower(tok(p)[0]) && lvar_defined(ident)) {
        p->lstate = EXPR_END;
      }
#endif
    }
    return result;
  }
}

static int
yylex(void *lval, parser_state *p)
{
  p->ylval = lval;
  return parser_yylex(p);
}

static void
parser_init_cxt(parser_state *p, mrbc_context *cxt)
{
  if (!cxt) return;
  if (cxt->filename) mrb_parser_set_filename(p, cxt->filename);
  if (cxt->lineno) p->lineno = cxt->lineno;
  if (cxt->syms) {
    int i;

    p->locals = cons(0,0);
    for (i=0; i<cxt->slen; i++) {
      local_add_f(p, cxt->syms[i]);
    }
  }
  p->capture_errors = cxt->capture_errors;
  p->no_optimize = cxt->no_optimize;
  if (cxt->partial_hook) {
    p->cxt = cxt;
  }
}

static void
parser_update_cxt(parser_state *p, mrbc_context *cxt)
{
  node *n, *n0;
  int i = 0;

  if (!cxt) return;
  if ((int)(intptr_t)p->tree->car != NODE_SCOPE) return;
  n0 = n = p->tree->cdr->car;
  while (n) {
    i++;
    n = n->cdr;
  }
  cxt->syms = (mrb_sym *)mrb_realloc(p->mrb, cxt->syms, i*sizeof(mrb_sym));
  cxt->slen = i;
  for (i=0, n=n0; n; i++,n=n->cdr) {
    cxt->syms[i] = sym(n->car);
  }
}

void mrb_codedump_all(mrb_state*, struct RProc*);
void mrb_parser_dump(mrb_state *mrb, node *tree, int offset);

MRB_API void
mrb_parser_parse(parser_state *p, mrbc_context *c)
{
  struct mrb_jmpbuf buf;
  p->jmp = &buf;

  MRB_TRY(p->jmp) {

    p->cmd_start = TRUE;
    p->in_def = p->in_single = 0;
    p->nerr = p->nwarn = 0;
    p->lex_strterm = NULL;

    parser_init_cxt(p, c);
    yyparse(p);
    if (!p->tree) {
      p->tree = new_nil(p);
    }
    parser_update_cxt(p, c);
    if (c && c->dump_result) {
      mrb_parser_dump(p->mrb, p->tree, 0);
    }

  }
  MRB_CATCH(p->jmp) {
    yyerror(p, "memory allocation error");
    p->nerr++;
    p->tree = 0;
    return;
  }
  MRB_END_EXC(p->jmp);
}

MRB_API parser_state*
mrb_parser_new(mrb_state *mrb)
{
  mrb_pool *pool;
  parser_state *p;
  static const parser_state parser_state_zero = { 0 };

  pool = mrb_pool_open(mrb);
  if (!pool) return NULL;
  p = (parser_state *)mrb_pool_alloc(pool, sizeof(parser_state));
  if (!p) return NULL;

  *p = parser_state_zero;
  p->mrb = mrb;
  p->pool = pool;

  p->s = p->send = NULL;
#ifdef ENABLE_STDIO
  p->f = NULL;
#endif

  p->cmd_start = TRUE;
  p->in_def = p->in_single = 0;

  p->capture_errors = FALSE;
  p->lineno = 1;
  p->column = 0;
#if defined(PARSER_TEST) || defined(PARSER_DEBUG)
  yydebug = 1;
#endif

  p->lex_strterm = NULL;
  p->all_heredocs = p->parsing_heredoc = NULL;
  p->lex_strterm_before_heredoc = NULL;

  p->current_filename_index = -1;
  p->filename_table = NULL;
  p->filename_table_length = 0;

  return p;
}

MRB_API void
mrb_parser_free(parser_state *p) {
  mrb_pool_close(p->pool);
}

MRB_API mrbc_context*
mrbc_context_new(mrb_state *mrb)
{
  return (mrbc_context *)mrb_calloc(mrb, 1, sizeof(mrbc_context));
}

MRB_API void
mrbc_context_free(mrb_state *mrb, mrbc_context *cxt)
{
  mrb_free(mrb, cxt->syms);
  mrb_free(mrb, cxt);
}

MRB_API const char*
mrbc_filename(mrb_state *mrb, mrbc_context *c, const char *s)
{
  if (s) {
    int len = strlen(s);
    char *p = (char *)mrb_alloca(mrb, len + 1);

    memcpy(p, s, len + 1);
    c->filename = p;
  }
  return c->filename;
}

MRB_API void
mrbc_partial_hook(mrb_state *mrb, mrbc_context *c, int (*func)(struct mrb_parser_state*), void *data)
{
  c->partial_hook = func;
  c->partial_data = data;
}

MRB_API void
mrb_parser_set_filename(struct mrb_parser_state *p, const char *f)
{
  mrb_sym sym;
  size_t i;
  mrb_sym* new_table;

  sym = mrb_intern_cstr(p->mrb, f);
  p->filename = mrb_sym2name_len(p->mrb, sym, NULL);
  p->lineno = (p->filename_table_length > 0)? 0 : 1;

  for (i = 0; i < p->filename_table_length; ++i) {
    if (p->filename_table[i] == sym) {
      p->current_filename_index = i;
      return;
    }
  }

  p->current_filename_index = p->filename_table_length++;

  new_table = (mrb_sym*)parser_palloc(p, sizeof(mrb_sym) * p->filename_table_length);
  if (p->filename_table) {
    memmove(new_table, p->filename_table, sizeof(mrb_sym) * p->filename_table_length);
  }
  p->filename_table = new_table;
  p->filename_table[p->filename_table_length - 1] = sym;
}

MRB_API char const*
mrb_parser_get_filename(struct mrb_parser_state* p, uint16_t idx) {
  if (idx >= p->filename_table_length) { return NULL; }
  else {
    return mrb_sym2name_len(p->mrb, p->filename_table[idx], NULL);
  }
}

#ifdef ENABLE_STDIO
MRB_API parser_state*
mrb_parse_file(mrb_state *mrb, FILE *f, mrbc_context *c)
{
  parser_state *p;

  p = mrb_parser_new(mrb);
  if (!p) return NULL;
  p->s = p->send = NULL;
  p->f = f;

  mrb_parser_parse(p, c);
  return p;
}
#endif

MRB_API parser_state*
mrb_parse_nstring(mrb_state *mrb, const char *s, int len, mrbc_context *c)
{
  parser_state *p;

  p = mrb_parser_new(mrb);
  if (!p) return NULL;
  p->s = s;
  p->send = s + len;

  mrb_parser_parse(p, c);
  return p;
}

MRB_API parser_state*
mrb_parse_string(mrb_state *mrb, const char *s, mrbc_context *c)
{
  return mrb_parse_nstring(mrb, s, strlen(s), c);
}

static mrb_value
load_exec(mrb_state *mrb, parser_state *p, mrbc_context *c)
{
  struct RClass *target = mrb->object_class;
  struct RProc *proc;
  mrb_value v;
  unsigned int keep = 0;

  if (!p) {
    return mrb_undef_value();
  }
  if (!p->tree || p->nerr) {
    if (p->capture_errors) {
      char buf[256];
      int n;

      n = snprintf(buf, sizeof(buf), "line %d: %s\n",
          p->error_buffer[0].lineno, p->error_buffer[0].message);
      mrb->exc = mrb_obj_ptr(mrb_exc_new(mrb, E_SYNTAX_ERROR, buf, n));
      mrb_parser_free(p);
      return mrb_undef_value();
    }
    else {
      mrb->exc = mrb_obj_ptr(mrb_exc_new_str_lit(mrb, E_SYNTAX_ERROR, "syntax error"));
      mrb_parser_free(p);
      return mrb_undef_value();
    }
  }
  proc = mrb_generate_code(mrb, p);
  mrb_parser_free(p);
  if (proc == NULL) {
    mrb->exc = mrb_obj_ptr(mrb_exc_new_str_lit(mrb, E_SCRIPT_ERROR, "codegen error"));
    return mrb_undef_value();
  }
  if (c) {
    if (c->dump_result) mrb_codedump_all(mrb, proc);
    if (c->no_exec) return mrb_obj_value(proc);
    if (c->target_class) {
      target = c->target_class;
    }
    if (c->keep_lv) {
      keep = c->slen + 1;
    }
    else {
      c->keep_lv = TRUE;
    }
  }
  proc->target_class = target;
  if (mrb->c->ci) {
    mrb->c->ci->target_class = target;
  }
  v = mrb_toplevel_run_keep(mrb, proc, keep);
  if (mrb->exc) return mrb_nil_value();
  return v;
}

#ifdef ENABLE_STDIO
MRB_API mrb_value
mrb_load_file_cxt(mrb_state *mrb, FILE *f, mrbc_context *c)
{
  return load_exec(mrb, mrb_parse_file(mrb, f, c), c);
}

MRB_API mrb_value
mrb_load_file(mrb_state *mrb, FILE *f)
{
  return mrb_load_file_cxt(mrb, f, NULL);
}
#endif

MRB_API mrb_value
mrb_load_nstring_cxt(mrb_state *mrb, const char *s, int len, mrbc_context *c)
{
  return load_exec(mrb, mrb_parse_nstring(mrb, s, len, c), c);
}

MRB_API mrb_value
mrb_load_nstring(mrb_state *mrb, const char *s, int len)
{
  return mrb_load_nstring_cxt(mrb, s, len, NULL);
}

MRB_API mrb_value
mrb_load_string_cxt(mrb_state *mrb, const char *s, mrbc_context *c)
{
  return mrb_load_nstring_cxt(mrb, s, strlen(s), c);
}

MRB_API mrb_value
mrb_load_string(mrb_state *mrb, const char *s)
{
  return mrb_load_string_cxt(mrb, s, NULL);
}

#ifdef ENABLE_STDIO

static void
dump_prefix(node *tree, int offset)
{
  printf("%05d ", tree->lineno);
  while (offset--) {
    putc(' ', stdout);
    putc(' ', stdout);
  }
}

static void
dump_recur(mrb_state *mrb, node *tree, int offset)
{
  while (tree) {
    mrb_parser_dump(mrb, tree->car, offset);
    tree = tree->cdr;
  }
}

#endif

void
mrb_parser_dump(mrb_state *mrb, node *tree, int offset)
{
#ifdef ENABLE_STDIO
  int nodetype;

  if (!tree) return;
  again:
  dump_prefix(tree, offset);
  nodetype = (int)(intptr_t)tree->car;
  tree = tree->cdr;
  switch (nodetype) {
  case NODE_BEGIN:
    printf("NODE_BEGIN:\n");
    dump_recur(mrb, tree, offset+1);
    break;

  case NODE_RESCUE:
    printf("NODE_RESCUE:\n");
    if (tree->car) {
      dump_prefix(tree, offset+1);
      printf("body:\n");
      mrb_parser_dump(mrb, tree->car, offset+2);
    }
    tree = tree->cdr;
    if (tree->car) {
      node *n2 = tree->car;

      dump_prefix(n2, offset+1);
      printf("rescue:\n");
      while (n2) {
        node *n3 = n2->car;
        if (n3->car) {
          dump_prefix(n2, offset+2);
          printf("handle classes:\n");
          dump_recur(mrb, n3->car, offset+3);
        }
        if (n3->cdr->car) {
          dump_prefix(n3, offset+2);
          printf("exc_var:\n");
          mrb_parser_dump(mrb, n3->cdr->car, offset+3);
        }
        if (n3->cdr->cdr->car) {
          dump_prefix(n3, offset+2);
          printf("rescue body:\n");
          mrb_parser_dump(mrb, n3->cdr->cdr->car, offset+3);
        }
        n2 = n2->cdr;
      }
    }
    tree = tree->cdr;
    if (tree->car) {
      dump_prefix(tree, offset+1);
      printf("else:\n");
      mrb_parser_dump(mrb, tree->car, offset+2);
    }
    break;

  case NODE_ENSURE:
    printf("NODE_ENSURE:\n");
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    dump_prefix(tree, offset+1);
    printf("ensure:\n");
    mrb_parser_dump(mrb, tree->cdr->cdr, offset+2);
    break;

  case NODE_LAMBDA:
    printf("NODE_BLOCK:\n");
    goto block;

  case NODE_BLOCK:
    block:
    printf("NODE_BLOCK:\n");
    tree = tree->cdr;
    if (tree->car) {
      node *n = tree->car;

      if (n->car) {
        dump_prefix(n, offset+1);
        printf("mandatory args:\n");
        dump_recur(mrb, n->car, offset+2);
      }
      n = n->cdr;
      if (n->car) {
        dump_prefix(n, offset+1);
        printf("optional args:\n");
        {
          node *n2 = n->car;

          while (n2) {
            dump_prefix(n2, offset+2);
            printf("%s=", mrb_sym2name(mrb, sym(n2->car->car)));
            mrb_parser_dump(mrb, n2->car->cdr, 0);
            n2 = n2->cdr;
          }
        }
      }
      n = n->cdr;
      if (n->car) {
        dump_prefix(n, offset+1);
        printf("rest=*%s\n", mrb_sym2name(mrb, sym(n->car)));
      }
      n = n->cdr;
      if (n->car) {
        dump_prefix(n, offset+1);
        printf("post mandatory args:\n");
        dump_recur(mrb, n->car, offset+2);
      }
      n = n->cdr;
      if (n) {
        dump_prefix(n, offset+1);
        printf("blk=&%s\n", mrb_sym2name(mrb, sym(n)));
      }
    }
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr->car, offset+2);
    break;

  case NODE_IF:
    printf("NODE_IF:\n");
    dump_prefix(tree, offset+1);
    printf("cond:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    dump_prefix(tree, offset+1);
    printf("then:\n");
    mrb_parser_dump(mrb, tree->cdr->car, offset+2);
    if (tree->cdr->cdr->car) {
      dump_prefix(tree, offset+1);
      printf("else:\n");
      mrb_parser_dump(mrb, tree->cdr->cdr->car, offset+2);
    }
    break;

  case NODE_AND:
    printf("NODE_AND:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    mrb_parser_dump(mrb, tree->cdr, offset+1);
    break;

  case NODE_OR:
    printf("NODE_OR:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    mrb_parser_dump(mrb, tree->cdr, offset+1);
    break;

  case NODE_CASE:
    printf("NODE_CASE:\n");
    if (tree->car) {
      mrb_parser_dump(mrb, tree->car, offset+1);
    }
    tree = tree->cdr;
    while (tree) {
      dump_prefix(tree, offset+1);
      printf("case:\n");
      dump_recur(mrb, tree->car->car, offset+2);
      dump_prefix(tree, offset+1);
      printf("body:\n");
      mrb_parser_dump(mrb, tree->car->cdr, offset+2);
      tree = tree->cdr;
    }
    break;

  case NODE_WHILE:
    printf("NODE_WHILE:\n");
    dump_prefix(tree, offset+1);
    printf("cond:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr, offset+2);
    break;

  case NODE_UNTIL:
    printf("NODE_UNTIL:\n");
    dump_prefix(tree, offset+1);
    printf("cond:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr, offset+2);
    break;

  case NODE_FOR:
    printf("NODE_FOR:\n");
    dump_prefix(tree, offset+1);
    printf("var:\n");
    {
      node *n2 = tree->car;

      if (n2->car) {
        dump_prefix(n2, offset+2);
        printf("pre:\n");
        dump_recur(mrb, n2->car, offset+3);
      }
      n2 = n2->cdr;
      if (n2) {
        if (n2->car) {
          dump_prefix(n2, offset+2);
          printf("rest:\n");
          mrb_parser_dump(mrb, n2->car, offset+3);
        }
        n2 = n2->cdr;
        if (n2) {
          if (n2->car) {
            dump_prefix(n2, offset+2);
            printf("post:\n");
            dump_recur(mrb, n2->car, offset+3);
          }
        }
      }
    }
    tree = tree->cdr;
    dump_prefix(tree, offset+1);
    printf("in:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    tree = tree->cdr;
    dump_prefix(tree, offset+1);
    printf("do:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    break;

  case NODE_SCOPE:
    printf("NODE_SCOPE:\n");
    {
      node *n2 = tree->car;
      mrb_bool first_lval = TRUE;

      if (n2 && (n2->car || n2->cdr)) {
        dump_prefix(n2, offset+1);
        printf("local variables:\n");
        dump_prefix(n2, offset+2);
        while (n2) {
          if (n2->car) {
            if (!first_lval) printf(", ");
            printf("%s", mrb_sym2name(mrb, sym(n2->car)));
            first_lval = FALSE;
          }
          n2 = n2->cdr;
        }
        printf("\n");
      }
    }
    tree = tree->cdr;
    offset++;
    goto again;

  case NODE_FCALL:
  case NODE_CALL:
    printf("NODE_CALL:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    dump_prefix(tree, offset+1);
    printf("method='%s' (%d)\n",
        mrb_sym2name(mrb, sym(tree->cdr->car)),
        (int)(intptr_t)tree->cdr->car);
    tree = tree->cdr->cdr->car;
    if (tree) {
      dump_prefix(tree, offset+1);
      printf("args:\n");
      dump_recur(mrb, tree->car, offset+2);
      if (tree->cdr) {
        dump_prefix(tree, offset+1);
        printf("block:\n");
        mrb_parser_dump(mrb, tree->cdr, offset+2);
      }
    }
    break;

  case NODE_DOT2:
    printf("NODE_DOT2:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    mrb_parser_dump(mrb, tree->cdr, offset+1);
    break;

  case NODE_DOT3:
    printf("NODE_DOT3:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    mrb_parser_dump(mrb, tree->cdr, offset+1);
    break;

  case NODE_COLON2:
    printf("NODE_COLON2:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    dump_prefix(tree, offset+1);
    printf("::%s\n", mrb_sym2name(mrb, sym(tree->cdr)));
    break;

  case NODE_COLON3:
    printf("NODE_COLON3:\n");
    dump_prefix(tree, offset+1);
    printf("::%s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_ARRAY:
    printf("NODE_ARRAY:\n");
    dump_recur(mrb, tree, offset+1);
    break;

  case NODE_HASH:
    printf("NODE_HASH:\n");
    while (tree) {
      dump_prefix(tree, offset+1);
      printf("key:\n");
      mrb_parser_dump(mrb, tree->car->car, offset+2);
      dump_prefix(tree, offset+1);
      printf("value:\n");
      mrb_parser_dump(mrb, tree->car->cdr, offset+2);
      tree = tree->cdr;
    }
    break;

  case NODE_SPLAT:
    printf("NODE_SPLAT:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_ASGN:
    printf("NODE_ASGN:\n");
    dump_prefix(tree, offset+1);
    printf("lhs:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    dump_prefix(tree, offset+1);
    printf("rhs:\n");
    mrb_parser_dump(mrb, tree->cdr, offset+2);
    break;

  case NODE_MASGN:
    printf("NODE_MASGN:\n");
    dump_prefix(tree, offset+1);
    printf("mlhs:\n");
    {
      node *n2 = tree->car;

      if (n2->car) {
        dump_prefix(tree, offset+2);
        printf("pre:\n");
        dump_recur(mrb, n2->car, offset+3);
      }
      n2 = n2->cdr;
      if (n2) {
        if (n2->car) {
          dump_prefix(n2, offset+2);
          printf("rest:\n");
          if (n2->car == (node*)-1) {
            dump_prefix(n2, offset+2);
            printf("(empty)\n");
          }
          else {
            mrb_parser_dump(mrb, n2->car, offset+3);
          }
        }
        n2 = n2->cdr;
        if (n2) {
          if (n2->car) {
            dump_prefix(n2, offset+2);
            printf("post:\n");
            dump_recur(mrb, n2->car, offset+3);
          }
        }
      }
    }
    dump_prefix(tree, offset+1);
    printf("rhs:\n");
    mrb_parser_dump(mrb, tree->cdr, offset+2);
    break;

  case NODE_OP_ASGN:
    printf("NODE_OP_ASGN:\n");
    dump_prefix(tree, offset+1);
    printf("lhs:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    tree = tree->cdr;
    dump_prefix(tree, offset+1);
    printf("op='%s' (%d)\n", mrb_sym2name(mrb, sym(tree->car)), (int)(intptr_t)tree->car);
    tree = tree->cdr;
    mrb_parser_dump(mrb, tree->car, offset+1);
    break;

  case NODE_SUPER:
    printf("NODE_SUPER:\n");
    if (tree) {
      dump_prefix(tree, offset+1);
      printf("args:\n");
      dump_recur(mrb, tree->car, offset+2);
      if (tree->cdr) {
        dump_prefix(tree, offset+1);
        printf("block:\n");
        mrb_parser_dump(mrb, tree->cdr, offset+2);
      }
    }
    break;

  case NODE_ZSUPER:
    printf("NODE_ZSUPER\n");
    break;

  case NODE_RETURN:
    printf("NODE_RETURN:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_YIELD:
    printf("NODE_YIELD:\n");
    dump_recur(mrb, tree, offset+1);
    break;

  case NODE_BREAK:
    printf("NODE_BREAK:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_NEXT:
    printf("NODE_NEXT:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_REDO:
    printf("NODE_REDO\n");
    break;

  case NODE_RETRY:
    printf("NODE_RETRY\n");
    break;

  case NODE_LVAR:
    printf("NODE_LVAR %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_GVAR:
    printf("NODE_GVAR %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_IVAR:
    printf("NODE_IVAR %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_CVAR:
    printf("NODE_CVAR %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_CONST:
    printf("NODE_CONST %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_MATCH:
    printf("NODE_MATCH:\n");
    dump_prefix(tree, offset + 1);
    printf("lhs:\n");
    mrb_parser_dump(mrb, tree->car, offset + 2);
    dump_prefix(tree, offset + 1);
    printf("rhs:\n");
    mrb_parser_dump(mrb, tree->cdr, offset + 2);
    break;

  case NODE_BACK_REF:
    printf("NODE_BACK_REF: $%c\n", (int)(intptr_t)tree);
    break;

  case NODE_NTH_REF:
    printf("NODE_NTH_REF: $%d\n", (int)(intptr_t)tree);
    break;

  case NODE_ARG:
    printf("NODE_ARG %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_BLOCK_ARG:
    printf("NODE_BLOCK_ARG:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_INT:
    printf("NODE_INT %s base %d\n", (char*)tree->car, (int)(intptr_t)tree->cdr->car);
    break;

  case NODE_FLOAT:
    printf("NODE_FLOAT %s\n", (char*)tree);
    break;

  case NODE_NEGATE:
    printf("NODE_NEGATE\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_STR:
    printf("NODE_STR \"%s\" len %d\n", (char*)tree->car, (int)(intptr_t)tree->cdr);
    break;

  case NODE_DSTR:
    printf("NODE_DSTR\n");
    dump_recur(mrb, tree, offset+1);
    break;

  case NODE_XSTR:
    printf("NODE_XSTR \"%s\" len %d\n", (char*)tree->car, (int)(intptr_t)tree->cdr);
    break;

  case NODE_DXSTR:
    printf("NODE_DXSTR\n");
    dump_recur(mrb, tree, offset+1);
    break;

  case NODE_REGX:
    printf("NODE_REGX /%s/%s\n", (char*)tree->car, (char*)tree->cdr);
    break;

  case NODE_DREGX:
    printf("NODE_DREGX\n");
    dump_recur(mrb, tree->car, offset+1);
    dump_prefix(tree, offset);
    printf("tail: %s\n", (char*)tree->cdr->cdr->car);
    dump_prefix(tree, offset);
    printf("opt: %s\n", (char*)tree->cdr->cdr->cdr);
    break;

  case NODE_SYM:
    printf("NODE_SYM :%s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_SELF:
    printf("NODE_SELF\n");
    break;

  case NODE_NIL:
    printf("NODE_NIL\n");
    break;

  case NODE_TRUE:
    printf("NODE_TRUE\n");
    break;

  case NODE_FALSE:
    printf("NODE_FALSE\n");
    break;

  case NODE_ALIAS:
    printf("NODE_ALIAS %s %s:\n",
        mrb_sym2name(mrb, sym(tree->car)),
        mrb_sym2name(mrb, sym(tree->cdr)));
    break;

  case NODE_UNDEF:
    printf("NODE_UNDEF");
    {
      node *t = tree;
      while (t) {
        printf(" %s", mrb_sym2name(mrb, sym(t->car)));
        t = t->cdr;
      }
    }
    printf(":\n");
    break;

  case NODE_CLASS:
    printf("NODE_CLASS:\n");
    if (tree->car->car == (node*)0) {
      dump_prefix(tree, offset+1);
      printf(":%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    else if (tree->car->car == (node*)1) {
      dump_prefix(tree, offset+1);
      printf("::%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    else {
      mrb_parser_dump(mrb, tree->car->car, offset+1);
      dump_prefix(tree, offset+1);
      printf("::%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    if (tree->cdr->car) {
      dump_prefix(tree, offset+1);
      printf("super:\n");
      mrb_parser_dump(mrb, tree->cdr->car, offset+2);
    }
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr->cdr->car->cdr, offset+2);
    break;

  case NODE_MODULE:
    printf("NODE_MODULE:\n");
    if (tree->car->car == (node*)0) {
      dump_prefix(tree, offset+1);
      printf(":%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    else if (tree->car->car == (node*)1) {
      dump_prefix(tree, offset+1);
      printf("::%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    else {
      mrb_parser_dump(mrb, tree->car->car, offset+1);
      dump_prefix(tree, offset+1);
      printf("::%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr->car->cdr, offset+2);
    break;

  case NODE_SCLASS:
    printf("NODE_SCLASS:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr->car->cdr, offset+2);
    break;

  case NODE_DEF:
    printf("NODE_DEF:\n");
    dump_prefix(tree, offset+1);
    printf("%s\n", mrb_sym2name(mrb, sym(tree->car)));
    tree = tree->cdr;
    {
      node *n2 = tree->car;
      mrb_bool first_lval = TRUE;

      if (n2 && (n2->car || n2->cdr)) {
        dump_prefix(n2, offset+1);
        printf("local variables:\n");
        dump_prefix(n2, offset+2);
        while (n2) {
          if (n2->car) {
            if (!first_lval) printf(", ");
            printf("%s", mrb_sym2name(mrb, sym(n2->car)));
            first_lval = FALSE;
          }
          n2 = n2->cdr;
        }
        printf("\n");
      }
    }
    tree = tree->cdr;
    if (tree->car) {
      node *n = tree->car;

      if (n->car) {
        dump_prefix(n, offset+1);
        printf("mandatory args:\n");
        dump_recur(mrb, n->car, offset+2);
      }
      n = n->cdr;
      if (n->car) {
        dump_prefix(n, offset+1);
        printf("optional args:\n");
        {
          node *n2 = n->car;

          while (n2) {
            dump_prefix(n2, offset+2);
            printf("%s=", mrb_sym2name(mrb, sym(n2->car->car)));
            mrb_parser_dump(mrb, n2->car->cdr, 0);
            n2 = n2->cdr;
          }
        }
      }
      n = n->cdr;
      if (n->car) {
        dump_prefix(n, offset+1);
        printf("rest=*%s\n", mrb_sym2name(mrb, sym(n->car)));
      }
      n = n->cdr;
      if (n->car) {
        dump_prefix(n, offset+1);
        printf("post mandatory args:\n");
        dump_recur(mrb, n->car, offset+2);
      }
      n = n->cdr;
      if (n) {
        dump_prefix(n, offset+1);
        printf("blk=&%s\n", mrb_sym2name(mrb, sym(n)));
      }
    }
    mrb_parser_dump(mrb, tree->cdr->car, offset+1);
    break;

  case NODE_SDEF:
    printf("NODE_SDEF:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    tree = tree->cdr;
    dump_prefix(tree, offset+1);
    printf(":%s\n", mrb_sym2name(mrb, sym(tree->car)));
    tree = tree->cdr->cdr;
    if (tree->car) {
      node *n = tree->car;

      if (n->car) {
        dump_prefix(n, offset+1);
        printf("mandatory args:\n");
        dump_recur(mrb, n->car, offset+2);
      }
      n = n->cdr;
      if (n->car) {
        dump_prefix(n, offset+1);
        printf("optional args:\n");
        {
          node *n2 = n->car;

          while (n2) {
            dump_prefix(n2, offset+2);
            printf("%s=", mrb_sym2name(mrb, sym(n2->car->car)));
            mrb_parser_dump(mrb, n2->car->cdr, 0);
            n2 = n2->cdr;
          }
        }
      }
      n = n->cdr;
      if (n->car) {
        dump_prefix(n, offset+1);
        printf("rest=*%s\n", mrb_sym2name(mrb, sym(n->car)));
      }
      n = n->cdr;
      if (n->car) {
        dump_prefix(n, offset+1);
        printf("post mandatory args:\n");
        dump_recur(mrb, n->car, offset+2);
      }
      n = n->cdr;
      if (n) {
        dump_prefix(n, offset+1);
        printf("blk=&%s\n", mrb_sym2name(mrb, sym(n)));
      }
    }
    tree = tree->cdr;
    mrb_parser_dump(mrb, tree->car, offset+1);
    break;

  case NODE_POSTEXE:
    printf("NODE_POSTEXE:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_HEREDOC:
    printf("NODE_HEREDOC:\n");
    mrb_parser_dump(mrb, ((parser_heredoc_info*)tree)->doc, offset+1);
    break;

  default:
    printf("node type: %d (0x%x)\n", nodetype, (unsigned)nodetype);
    break;
  }
#endif
}

