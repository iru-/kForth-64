// fbc.h
//
//  Forth Byte Codes (FBC) for kForth
//
//  Copyright (c) 1996--2020 Krishna Myneni,
//    <krishna.myneni@ccreweb.org>
//
//  This software is provided under the terms of the GNU
//  Affero General Public License (AGPL), v3.0 or later.
//

#ifndef __FORTHBYTECODES_H__
#define __FORTHBYTECODES_H__

#define OP_FALSE                  0
#define OP_TRUE                   1
#define OP_CELLS                  2
#define OP_CELLPLUS               3
#define OP_DFLOATS                4
#define OP_DFLOATPLUS             5
#define OP_CASE                   6
#define OP_ENDCASE                7
#define OP_OF                     8
#define OP_ENDOF                  9
#define OP_OPEN                  10
#define OP_LSEEK                 11
#define OP_CLOSE                 12
#define OP_READ                  13
#define OP_WRITE                 14
#define OP_IOCTL                 15
#define OP_USLEEP                16
#define OP_MS                    17
#define OP_MSFETCH               18
#define OP_SYSCALL               19
#define OP_FILL                  20
#define OP_CMOVE                 21
#define OP_CMOVEFROM             22
#define OP_DOTPAREN              23
#define OP_BRACKETSHARP          24
#define OP_EXECUTE_BC            25

#define OP_SHARPBRACKET          27
#define OP_SHARPS                28
#define OP_SQUOTE                29
#define OP_CR                    30
#define OP_BL                    31
#define OP_SPACES                32
#define OP_STORE                 33
#define OP_CQUOTE                34
#define OP_SHARP                 35
#define OP_SIGN                  36
#define OP_MOD                   37
#define OP_AND                   38
#define OP_TICK                  39
#define OP_LPAREN                40
#define OP_HOLD                  41
#define OP_MUL                   42
#define OP_ADD                   43

#define OP_SUB                   45
#define OP_DOT                   46
#define OP_DIV                   47
#define OP_DABS                  48
#define OP_DNEGATE               49
#define OP_UMSTAR                50
#define OP_UMSLASHMOD            51
#define OP_MSTAR                 52
#define OP_MPLUS                 53
#define OP_MSLASH                54
#define OP_MSTARSLASH            55
#define OP_FMSLASHMOD            56
#define OP_SMSLASHREM            57
#define OP_COLON                 58
#define OP_SEMICOLON             59
#define OP_LT                    60
#define OP_EQ                    61	
#define OP_GT                    62	
#define OP_QUESTION              63
#define OP_FETCH                 64
#define OP_ADDR                  65
#define OP_BASE                  66
#define OP_CALL                  67
#define OP_DEFINITION            68
#define OP_ERASE                 69
#define OP_FVAL                  70
#define OP_CALLADDR              71
#define OP_TOBODY                72
#define OP_IVAL                  73
#define OP_EVALUATE              74
#define OP_KEY                   75
#define OP_LSHIFT                76
#define OP_SLASHMOD              77
#define OP_PTR                   78
#define OP_DOTR                  79
#define OP_DDOT                  80
#define OP_KEYQUERY              81
#define OP_RSHIFT                82
#define OP_DOTS                  83
#define OP_ACCEPT                84
#define OP_CHAR                  85
#define OP_BRACKETCHAR           86
#define OP_WORD                  87
#define OP_STARSLASH             88
#define OP_STARSLASHMOD          89
#define OP_UDOTR                 90
#define OP_LBRACKET              91
#define OP_BACKSLASH             92
#define OP_RBRACKET              93
#define OP_XOR                   94
#define OP_LITERAL               95
#define OP_QUERYALLOT            96
#define OP_ALLOT                 97
#define OP_BINARY                98
#define OP_COUNT                 99
#define OP_DECIMAL              100
#define OP_EMIT                 101
#define OP_FDOT                 102
#define OP_COLD                 103
#define OP_HEX                  104
#define OP_I                    105
#define OP_J                    106
#define OP_BRACKETTICK          107
#define OP_FVARIABLE            108
#define OP_2STORE		109
#define OP_FIND                 110
#define OP_CONSTANT             111
#define OP_IMMEDIATE            112
#define OP_FCONSTANT            113
#define OP_CREATE               114
#define OP_DOTQUOTE             115
#define OP_TYPE                 116
#define OP_UDOT                 117
#define OP_VARIABLE             118
#define OP_WORDS                119
#define OP_DOES                 120
#define OP_2VAL			121
#define OP_2FETCH		122
#define OP_SEARCH               123
#define OP_OR                   124
#define OP_COMPARE              125
#define OP_NOT                  126
#define OP_MOVE                 127
#define OP_FSIN                 128
#define OP_FCOS                 129
#define OP_FTAN                 130
#define OP_FASIN                131
#define OP_FACOS                132
#define OP_FATAN                133
#define OP_FEXP                 134
#define OP_FLN                  135
#define OP_FLOG                 136
#define OP_FATAN2               137
#define OP_FTRUNC               138
#define OP_FTRUNCTOS            139
#define OP_FMIN                 140
#define OP_FMAX                 141
#define OP_FLOOR                142
#define OP_FROUND               143
#define OP_DLT                  144
#define OP_DZEROEQ              145
#define OP_DEQ                  146
#define OP_TWOPUSH              147
#define OP_TWOPOP               148
#define OP_TWORFETCH            149
#define OP_STOD                 150
#define OP_STOF                 151
#define OP_DTOF                 152
#define OP_FROUNDTOS            153
#define OP_FTOD                 154
#define OP_DEGTORAD             155
#define OP_RADTODEG             156
#define OP_DPLUS                157
#define OP_DMINUS               158
#define OP_DULT                 159
#define OP_INC                  160
#define OP_DEC                  161
#define OP_ABS                  162
#define OP_NEG                  163
#define OP_MIN                  164
#define OP_MAX                  165
#define OP_TWOSTAR              166
#define OP_TWODIV               167
#define OP_TWOPLUS              168
#define OP_TWOMINUS             169
#define OP_CFETCH               170
#define OP_CSTORE               171
#define OP_SWFETCH              172
#define OP_WSTORE               173
#define OP_DFFETCH              174
#define OP_DFSTORE              175
#define OP_SFFETCH              176
#define OP_SFSTORE              177
#define OP_SPFETCH              178
#define OP_PLUSSTORE            179
#define OP_FADD                 180
#define OP_FSUB                 181
#define OP_FMUL                 182
#define OP_FDIV                 183
#define OP_FABS                 184
#define OP_FNEG                 185
#define OP_FPOW                 186
#define OP_FSQRT                187
#define OP_SPSTORE              188
#define OP_RPSTORE              189
#define OP_FEQ                  190
#define OP_FNE                  191
#define OP_FLT                  192
#define OP_FGT                  193
#define OP_FLE                  194
#define OP_FGE                  195
#define OP_FZEROEQ              196
#define OP_FZEROLT              197
#define OP_FZEROGT              198
#define OP_FPROXIMATE           199
#define OP_DROP                 200
#define OP_DUP                  201
#define OP_SWAP                 202
#define OP_OVER                 203
#define OP_ROT                  204
#define OP_MINUSROT             205
#define OP_NIP                  206
#define OP_TUCK                 207
#define OP_PICK                 208
#define OP_ROLL                 209
#define OP_2DROP                210
#define OP_2DUP                 211
#define OP_2SWAP                212
#define OP_2OVER                213
#define OP_2ROT                 214
#define OP_DEPTH                215
#define OP_QUERYDUP             216
#define OP_IF                   217
#define OP_ELSE                 218
#define OP_THEN                 219
#define OP_PUSH                 220
#define OP_POP                  221
#define OP_PUSHIP               222
#define OP_RFETCH               223
#define OP_RPFETCH              224
#define OP_AFETCH               225
#define OP_DO                   226
#define OP_LEAVE                227
#define OP_QUERYDO              228
#define OP_ABORTQUOTE           229
#define OP_JZ                   230
#define OP_JNZ                  231
#define OP_JMP                  232
#define OP_RTLOOP               233
#define OP_RTPLUSLOOP           234
#define OP_RTUNLOOP             235
#define OP_EXECUTE              236
#define OP_RECURSE              237
#define OP_RET                  238
#define OP_ABORT                239
#define OP_QUIT                 240
#define OP_GE                   241
#define OP_LE                   242
#define OP_NE                   243
#define OP_ZEROEQ               244
#define OP_ZERONE               245
#define OP_ZEROLT               246
#define OP_ZEROGT               247
#define OP_ULT                  248
#define OP_UGT                  249
#define OP_BEGIN                250
#define OP_WHILE                251
#define OP_REPEAT               252
#define OP_UNTIL                253
#define OP_AGAIN                254
#define OP_BYE                  255
#define OP_UTMSLASH             256
#define OP_UTSSLASHMOD          257
#define OP_STSSLASHREM          258
#define OP_UDMSTAR              259
#define OP_INCLUDED             260
#define OP_INCLUDE              261
#define OP_SOURCE               262
#define OP_REFILL               263
#define OP_STATE                264
#define OP_ALLOCATE             265
#define OP_FREE                 266
#define OP_RESIZE		267
#define OP_CPUTEST              268
#define OP_DSSTAR               269
#define OP_COMPILECOMMA         270
#define OP_COMPILENAME          271
#define OP_POSTPONE             272
#define OP_NONDEFERRED          273
#define OP_FORGET               274
#define OP_FORTHSIGNAL          275
#define OP_RAISE                276
#define OP_SETITIMER            277
#define OP_GETITIMER            278
#define OP_US2FETCH   		279
#define OP_TOFLOAT              280
#define OP_FSINCOS              281
#define OP_FACOSH               282
#define OP_FASINH               283
#define OP_FATANH               284
#define OP_FCOSH                285
#define OP_FSINH                286
#define OP_FTANH                287
#define OP_FALOG                288
#define OP_DZEROLT              289
#define OP_DMAX                 290
#define OP_DMIN                 291
#define OP_DTWOSTAR             292
#define OP_DTWODIV              293
#define OP_UDDOT		294
#define OP_WITHIN               295
#define OP_2LITERAL             296
#define OP_TONUMBER             297
#define OP_NUMBERQUERY          298
#define OP_SLITERAL             299

#define OP_FLITERAL		300
#define OP_2VARIABLE		301
#define OP_2CONSTANT		302

#define OP_TOFILE               304
#define OP_CONSOLE              305
#define OP_LOOP                 306
#define OP_PLUSLOOP             307
#define OP_UNLOOP               308

#define OP_SPACE                310
#define OP_BLANK                311
#define OP_SLASHSTRING          312
#define OP_TRAILING             313
#define OP_PARSE                314
#define OP_PARSENAME            315
#define OP_DNE			316
#define OP_DGT			317
#define OP_DLE			318
#define OP_DGE			319
#define OP_DLOPEN               320
#define OP_DLERROR              321
#define OP_DLSYM                322
#define OP_DLCLOSE              323
#define OP_US                   324
#define OP_ALIAS                325
#define OP_SYSTEM               326
#define OP_CHDIR                327
#define OP_TIMEANDDATE          328

#define OP_WORDLIST             330
#define OP_FORTHWORDLIST        331
#define OP_GETCURRENT           332
#define OP_SETCURRENT           333
#define OP_GETORDER             334
#define OP_SETORDER             335
#define OP_SEARCHWORDLIST       336
#define OP_DEFINITIONS	        337
#define OP_VOCABULARY           338

#define OP_ONLY                 340                 
#define OP_ALSO                 341
#define OP_ORDER                342
#define OP_PREVIOUS             343
#define OP_FORTH                344
#define OP_ASSEMBLER            345
#define OP_TRAVERSE_WORDLIST	346
#define OP_NAME2STRING		347
#define OP_NAME2INTERPRET	348
#define OP_NAME2COMPILE		349

#define OP_DEFINED              350
#define OP_UNDEFINED            351
#define OP_BRACKET_IF           352
#define OP_BRACKET_ELSE         353
#define OP_BRACKET_THEN         354
#define OP_MYNAME               355
#define OP_CATCH                356
#define OP_THROW                357

#define OP_PRECISION            360
#define OP_SET_PRECISION        361
#define OP_REPRESENT            362
#define OP_FSDOT                363
#define OP_FEDOT                364
#define OP_FPICK                365
#define OP_FEXPM1 		366
#define OP_FLNP1		367
#define OP_UDDOTR		368
#define OP_DDOTR		369

#define OP_F2DROP               370
#define OP_F2DUP                371
#define OP_ZSWAP                372
#define OP_ZOVER                373
#define OP_ZFETCH               374
#define OP_ZSTORE               375
#define OP_ZPLUS                376
#define OP_ZMINUS               377
#define OP_ZMUL                 378
#define OP_ZDIV                 379
#define OP_ZABS                 380

#define OP_XSIZE                390
#define OP_XCSIZE               391
#define OP_XCHARPLUS            392
#define OP_XCFETCHPLUS          393  
#define OP_XCSTOREPLUS          394
#define OP_XCSTOREPLUSQUERY     395

#define OP_BOOL_NOT             400
#define OP_BOOL_AND             401
#define OP_BOOL_OR              402
#define OP_BOOL_XOR             403
#define OP_BOOLEAN_QUERY        404
#define OP_UWFETCH              405
#define OP_ULFETCH              406
#define OP_SLFETCH              407
#define OP_LSTORE               408

#define OP_DIV_FLOORED          410
#define OP_MOD_FLOORED          411
#define OP_SLASHMOD_FLOORED     412
#define OP_STARSLASH_FLOORED    413
#define OP_STARSLASHMOD_FLOORED 414
#define OP_MSLASH_FLOORED       415
#define OP_MSTARSLASH_FLOORED   416


#endif
