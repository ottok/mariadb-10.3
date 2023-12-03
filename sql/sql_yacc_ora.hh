/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_ORA_HH_INCLUDED
# define YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_ORA_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ORAdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ABORT_SYM = 258,               /* ABORT_SYM  */
    ACCESSIBLE_SYM = 259,          /* ACCESSIBLE_SYM  */
    ADD = 260,                     /* ADD  */
    ALL = 261,                     /* ALL  */
    ALTER = 262,                   /* ALTER  */
    ANALYZE_SYM = 263,             /* ANALYZE_SYM  */
    AND_AND_SYM = 264,             /* AND_AND_SYM  */
    AND_SYM = 265,                 /* AND_SYM  */
    AS = 266,                      /* AS  */
    ASC = 267,                     /* ASC  */
    ASENSITIVE_SYM = 268,          /* ASENSITIVE_SYM  */
    BEFORE_SYM = 269,              /* BEFORE_SYM  */
    BETWEEN_SYM = 270,             /* BETWEEN_SYM  */
    BIGINT = 271,                  /* BIGINT  */
    BINARY = 272,                  /* BINARY  */
    BIN_NUM = 273,                 /* BIN_NUM  */
    BIT_AND = 274,                 /* BIT_AND  */
    BIT_OR = 275,                  /* BIT_OR  */
    BIT_XOR = 276,                 /* BIT_XOR  */
    BLOB_MARIADB_SYM = 277,        /* BLOB_MARIADB_SYM  */
    BLOB_ORACLE_SYM = 278,         /* BLOB_ORACLE_SYM  */
    BODY_ORACLE_SYM = 279,         /* BODY_ORACLE_SYM  */
    BOTH = 280,                    /* BOTH  */
    BY = 281,                      /* BY  */
    CALL_SYM = 282,                /* CALL_SYM  */
    CASCADE = 283,                 /* CASCADE  */
    CASE_SYM = 284,                /* CASE_SYM  */
    CAST_SYM = 285,                /* CAST_SYM  */
    CHANGE = 286,                  /* CHANGE  */
    CHAR_SYM = 287,                /* CHAR_SYM  */
    CHECK_SYM = 288,               /* CHECK_SYM  */
    COLLATE_SYM = 289,             /* COLLATE_SYM  */
    CONDITION_SYM = 290,           /* CONDITION_SYM  */
    CONSTRAINT = 291,              /* CONSTRAINT  */
    CONTINUE_MARIADB_SYM = 292,    /* CONTINUE_MARIADB_SYM  */
    CONTINUE_ORACLE_SYM = 293,     /* CONTINUE_ORACLE_SYM  */
    CONVERT_SYM = 294,             /* CONVERT_SYM  */
    COUNT_SYM = 295,               /* COUNT_SYM  */
    CREATE = 296,                  /* CREATE  */
    CROSS = 297,                   /* CROSS  */
    CUME_DIST_SYM = 298,           /* CUME_DIST_SYM  */
    CURDATE = 299,                 /* CURDATE  */
    CURRENT_USER = 300,            /* CURRENT_USER  */
    CURRENT_ROLE = 301,            /* CURRENT_ROLE  */
    CURSOR_SYM = 302,              /* CURSOR_SYM  */
    CURTIME = 303,                 /* CURTIME  */
    DATABASE = 304,                /* DATABASE  */
    DATABASES = 305,               /* DATABASES  */
    DATE_ADD_INTERVAL = 306,       /* DATE_ADD_INTERVAL  */
    DATE_SUB_INTERVAL = 307,       /* DATE_SUB_INTERVAL  */
    DAY_HOUR_SYM = 308,            /* DAY_HOUR_SYM  */
    DAY_MICROSECOND_SYM = 309,     /* DAY_MICROSECOND_SYM  */
    DAY_MINUTE_SYM = 310,          /* DAY_MINUTE_SYM  */
    DAY_SECOND_SYM = 311,          /* DAY_SECOND_SYM  */
    DECIMAL_NUM = 312,             /* DECIMAL_NUM  */
    DECIMAL_SYM = 313,             /* DECIMAL_SYM  */
    DECLARE_MARIADB_SYM = 314,     /* DECLARE_MARIADB_SYM  */
    DECLARE_ORACLE_SYM = 315,      /* DECLARE_ORACLE_SYM  */
    DEFAULT = 316,                 /* DEFAULT  */
    DELETE_DOMAIN_ID_SYM = 317,    /* DELETE_DOMAIN_ID_SYM  */
    DELETE_SYM = 318,              /* DELETE_SYM  */
    DENSE_RANK_SYM = 319,          /* DENSE_RANK_SYM  */
    DESC = 320,                    /* DESC  */
    DESCRIBE = 321,                /* DESCRIBE  */
    DETERMINISTIC_SYM = 322,       /* DETERMINISTIC_SYM  */
    DISTINCT = 323,                /* DISTINCT  */
    DIV_SYM = 324,                 /* DIV_SYM  */
    DOUBLE_SYM = 325,              /* DOUBLE_SYM  */
    DO_DOMAIN_IDS_SYM = 326,       /* DO_DOMAIN_IDS_SYM  */
    DOT_DOT_SYM = 327,             /* DOT_DOT_SYM  */
    DROP = 328,                    /* DROP  */
    DUAL_SYM = 329,                /* DUAL_SYM  */
    EACH_SYM = 330,                /* EACH_SYM  */
    ELSE = 331,                    /* ELSE  */
    ELSEIF_MARIADB_SYM = 332,      /* ELSEIF_MARIADB_SYM  */
    ELSIF_ORACLE_SYM = 333,        /* ELSIF_ORACLE_SYM  */
    ENCLOSED = 334,                /* ENCLOSED  */
    END_OF_INPUT = 335,            /* END_OF_INPUT  */
    EQUAL_SYM = 336,               /* EQUAL_SYM  */
    ESCAPED = 337,                 /* ESCAPED  */
    EXCEPT_SYM = 338,              /* EXCEPT_SYM  */
    EXISTS = 339,                  /* EXISTS  */
    EXTRACT_SYM = 340,             /* EXTRACT_SYM  */
    FALSE_SYM = 341,               /* FALSE_SYM  */
    FETCH_SYM = 342,               /* FETCH_SYM  */
    FIRST_VALUE_SYM = 343,         /* FIRST_VALUE_SYM  */
    FLOAT_NUM = 344,               /* FLOAT_NUM  */
    FLOAT_SYM = 345,               /* FLOAT_SYM  */
    FORCE_LOOKAHEAD = 346,         /* FORCE_LOOKAHEAD  */
    FOREIGN = 347,                 /* FOREIGN  */
    FOR_SYM = 348,                 /* FOR_SYM  */
    FOR_SYSTEM_TIME_SYM = 349,     /* FOR_SYSTEM_TIME_SYM  */
    FROM = 350,                    /* FROM  */
    FULLTEXT_SYM = 351,            /* FULLTEXT_SYM  */
    GE = 352,                      /* GE  */
    GOTO_ORACLE_SYM = 353,         /* GOTO_ORACLE_SYM  */
    GRANT = 354,                   /* GRANT  */
    GROUP_SYM = 355,               /* GROUP_SYM  */
    GROUP_CONCAT_SYM = 356,        /* GROUP_CONCAT_SYM  */
    LAG_SYM = 357,                 /* LAG_SYM  */
    LEAD_SYM = 358,                /* LEAD_SYM  */
    HAVING = 359,                  /* HAVING  */
    HEX_NUM = 360,                 /* HEX_NUM  */
    HEX_STRING = 361,              /* HEX_STRING  */
    HOUR_MICROSECOND_SYM = 362,    /* HOUR_MICROSECOND_SYM  */
    HOUR_MINUTE_SYM = 363,         /* HOUR_MINUTE_SYM  */
    HOUR_SECOND_SYM = 364,         /* HOUR_SECOND_SYM  */
    IDENT = 365,                   /* IDENT  */
    IDENT_QUOTED = 366,            /* IDENT_QUOTED  */
    IF_SYM = 367,                  /* IF_SYM  */
    IGNORE_DOMAIN_IDS_SYM = 368,   /* IGNORE_DOMAIN_IDS_SYM  */
    IGNORE_SYM = 369,              /* IGNORE_SYM  */
    INDEX_SYM = 370,               /* INDEX_SYM  */
    INFILE = 371,                  /* INFILE  */
    INNER_SYM = 372,               /* INNER_SYM  */
    INOUT_SYM = 373,               /* INOUT_SYM  */
    INSENSITIVE_SYM = 374,         /* INSENSITIVE_SYM  */
    INSERT = 375,                  /* INSERT  */
    INTERSECT_SYM = 376,           /* INTERSECT_SYM  */
    INTERVAL_SYM = 377,            /* INTERVAL_SYM  */
    INTO = 378,                    /* INTO  */
    INT_SYM = 379,                 /* INT_SYM  */
    IN_SYM = 380,                  /* IN_SYM  */
    IS = 381,                      /* IS  */
    ITERATE_SYM = 382,             /* ITERATE_SYM  */
    JOIN_SYM = 383,                /* JOIN_SYM  */
    KEYS = 384,                    /* KEYS  */
    KEY_SYM = 385,                 /* KEY_SYM  */
    KILL_SYM = 386,                /* KILL_SYM  */
    LE = 387,                      /* LE  */
    LEADING = 388,                 /* LEADING  */
    LEAVE_SYM = 389,               /* LEAVE_SYM  */
    LEFT = 390,                    /* LEFT  */
    LEX_HOSTNAME = 391,            /* LEX_HOSTNAME  */
    LIKE = 392,                    /* LIKE  */
    LIMIT = 393,                   /* LIMIT  */
    LINEAR_SYM = 394,              /* LINEAR_SYM  */
    LINES = 395,                   /* LINES  */
    LOAD = 396,                    /* LOAD  */
    LOCATOR_SYM = 397,             /* LOCATOR_SYM  */
    LOCK_SYM = 398,                /* LOCK_SYM  */
    LONGBLOB = 399,                /* LONGBLOB  */
    LONGTEXT = 400,                /* LONGTEXT  */
    LONG_NUM = 401,                /* LONG_NUM  */
    LONG_SYM = 402,                /* LONG_SYM  */
    LOOP_SYM = 403,                /* LOOP_SYM  */
    LOW_PRIORITY = 404,            /* LOW_PRIORITY  */
    MASTER_SSL_VERIFY_SERVER_CERT_SYM = 405, /* MASTER_SSL_VERIFY_SERVER_CERT_SYM  */
    MATCH = 406,                   /* MATCH  */
    MAX_SYM = 407,                 /* MAX_SYM  */
    MAXVALUE_SYM = 408,            /* MAXVALUE_SYM  */
    MEDIAN_SYM = 409,              /* MEDIAN_SYM  */
    MEDIUMBLOB = 410,              /* MEDIUMBLOB  */
    MEDIUMINT = 411,               /* MEDIUMINT  */
    MEDIUMTEXT = 412,              /* MEDIUMTEXT  */
    MINUTE_MICROSECOND_SYM = 413,  /* MINUTE_MICROSECOND_SYM  */
    MINUTE_SECOND_SYM = 414,       /* MINUTE_SECOND_SYM  */
    MIN_SYM = 415,                 /* MIN_SYM  */
    MODIFIES_SYM = 416,            /* MODIFIES_SYM  */
    MOD_SYM = 417,                 /* MOD_SYM  */
    MYSQL_CONCAT_SYM = 418,        /* MYSQL_CONCAT_SYM  */
    NATURAL = 419,                 /* NATURAL  */
    NCHAR_STRING = 420,            /* NCHAR_STRING  */
    NE = 421,                      /* NE  */
    NEG = 422,                     /* NEG  */
    NOT2_SYM = 423,                /* NOT2_SYM  */
    NOT_SYM = 424,                 /* NOT_SYM  */
    NOW_SYM = 425,                 /* NOW_SYM  */
    NO_WRITE_TO_BINLOG = 426,      /* NO_WRITE_TO_BINLOG  */
    NTILE_SYM = 427,               /* NTILE_SYM  */
    NULL_SYM = 428,                /* NULL_SYM  */
    NUM = 429,                     /* NUM  */
    NUMERIC_SYM = 430,             /* NUMERIC_SYM  */
    NTH_VALUE_SYM = 431,           /* NTH_VALUE_SYM  */
    ON = 432,                      /* ON  */
    OPTIMIZE = 433,                /* OPTIMIZE  */
    OPTIONALLY = 434,              /* OPTIONALLY  */
    ORACLE_CONCAT_SYM = 435,       /* ORACLE_CONCAT_SYM  */
    OR2_SYM = 436,                 /* OR2_SYM  */
    ORDER_SYM = 437,               /* ORDER_SYM  */
    OR_SYM = 438,                  /* OR_SYM  */
    OTHERS_ORACLE_SYM = 439,       /* OTHERS_ORACLE_SYM  */
    OUTER = 440,                   /* OUTER  */
    OUTFILE = 441,                 /* OUTFILE  */
    OUT_SYM = 442,                 /* OUT_SYM  */
    OVER_SYM = 443,                /* OVER_SYM  */
    PACKAGE_ORACLE_SYM = 444,      /* PACKAGE_ORACLE_SYM  */
    PAGE_CHECKSUM_SYM = 445,       /* PAGE_CHECKSUM_SYM  */
    PARAM_MARKER = 446,            /* PARAM_MARKER  */
    PARSE_VCOL_EXPR_SYM = 447,     /* PARSE_VCOL_EXPR_SYM  */
    PARTITION_SYM = 448,           /* PARTITION_SYM  */
    PERCENT_ORACLE_SYM = 449,      /* PERCENT_ORACLE_SYM  */
    PERCENT_RANK_SYM = 450,        /* PERCENT_RANK_SYM  */
    PERCENTILE_CONT_SYM = 451,     /* PERCENTILE_CONT_SYM  */
    PERCENTILE_DISC_SYM = 452,     /* PERCENTILE_DISC_SYM  */
    POSITION_SYM = 453,            /* POSITION_SYM  */
    PRECISION = 454,               /* PRECISION  */
    PRIMARY_SYM = 455,             /* PRIMARY_SYM  */
    PROCEDURE_SYM = 456,           /* PROCEDURE_SYM  */
    PURGE = 457,                   /* PURGE  */
    RAISE_ORACLE_SYM = 458,        /* RAISE_ORACLE_SYM  */
    RANGE_SYM = 459,               /* RANGE_SYM  */
    RANK_SYM = 460,                /* RANK_SYM  */
    READS_SYM = 461,               /* READS_SYM  */
    READ_SYM = 462,                /* READ_SYM  */
    READ_WRITE_SYM = 463,          /* READ_WRITE_SYM  */
    REAL = 464,                    /* REAL  */
    RECURSIVE_SYM = 465,           /* RECURSIVE_SYM  */
    REF_SYSTEM_ID_SYM = 466,       /* REF_SYSTEM_ID_SYM  */
    REFERENCES = 467,              /* REFERENCES  */
    REGEXP = 468,                  /* REGEXP  */
    RELEASE_SYM = 469,             /* RELEASE_SYM  */
    RENAME = 470,                  /* RENAME  */
    REPEAT_SYM = 471,              /* REPEAT_SYM  */
    REPLACE = 472,                 /* REPLACE  */
    REQUIRE_SYM = 473,             /* REQUIRE_SYM  */
    RESIGNAL_SYM = 474,            /* RESIGNAL_SYM  */
    RESTRICT = 475,                /* RESTRICT  */
    RETURNING_SYM = 476,           /* RETURNING_SYM  */
    RETURN_MARIADB_SYM = 477,      /* RETURN_MARIADB_SYM  */
    RETURN_ORACLE_SYM = 478,       /* RETURN_ORACLE_SYM  */
    REVOKE = 479,                  /* REVOKE  */
    RIGHT = 480,                   /* RIGHT  */
    ROWS_SYM = 481,                /* ROWS_SYM  */
    ROWTYPE_ORACLE_SYM = 482,      /* ROWTYPE_ORACLE_SYM  */
    ROW_NUMBER_SYM = 483,          /* ROW_NUMBER_SYM  */
    SECOND_MICROSECOND_SYM = 484,  /* SECOND_MICROSECOND_SYM  */
    SELECT_SYM = 485,              /* SELECT_SYM  */
    SENSITIVE_SYM = 486,           /* SENSITIVE_SYM  */
    SEPARATOR_SYM = 487,           /* SEPARATOR_SYM  */
    SERVER_OPTIONS = 488,          /* SERVER_OPTIONS  */
    SET = 489,                     /* SET  */
    SET_VAR = 490,                 /* SET_VAR  */
    SHIFT_LEFT = 491,              /* SHIFT_LEFT  */
    SHIFT_RIGHT = 492,             /* SHIFT_RIGHT  */
    SHOW = 493,                    /* SHOW  */
    SIGNAL_SYM = 494,              /* SIGNAL_SYM  */
    SMALLINT = 495,                /* SMALLINT  */
    SPATIAL_SYM = 496,             /* SPATIAL_SYM  */
    SPECIFIC_SYM = 497,            /* SPECIFIC_SYM  */
    SQLEXCEPTION_SYM = 498,        /* SQLEXCEPTION_SYM  */
    SQLSTATE_SYM = 499,            /* SQLSTATE_SYM  */
    SQLWARNING_SYM = 500,          /* SQLWARNING_SYM  */
    SQL_BIG_RESULT = 501,          /* SQL_BIG_RESULT  */
    SQL_SMALL_RESULT = 502,        /* SQL_SMALL_RESULT  */
    SQL_SYM = 503,                 /* SQL_SYM  */
    SSL_SYM = 504,                 /* SSL_SYM  */
    STARTING = 505,                /* STARTING  */
    STATS_AUTO_RECALC_SYM = 506,   /* STATS_AUTO_RECALC_SYM  */
    STATS_PERSISTENT_SYM = 507,    /* STATS_PERSISTENT_SYM  */
    STATS_SAMPLE_PAGES_SYM = 508,  /* STATS_SAMPLE_PAGES_SYM  */
    STDDEV_SAMP_SYM = 509,         /* STDDEV_SAMP_SYM  */
    STD_SYM = 510,                 /* STD_SYM  */
    STRAIGHT_JOIN = 511,           /* STRAIGHT_JOIN  */
    SUBSTRING = 512,               /* SUBSTRING  */
    SUM_SYM = 513,                 /* SUM_SYM  */
    SYSDATE = 514,                 /* SYSDATE  */
    TABLE_REF_PRIORITY = 515,      /* TABLE_REF_PRIORITY  */
    TABLE_SYM = 516,               /* TABLE_SYM  */
    TERMINATED = 517,              /* TERMINATED  */
    TEXT_STRING = 518,             /* TEXT_STRING  */
    THEN_SYM = 519,                /* THEN_SYM  */
    TINYBLOB = 520,                /* TINYBLOB  */
    TINYINT = 521,                 /* TINYINT  */
    TINYTEXT = 522,                /* TINYTEXT  */
    TO_SYM = 523,                  /* TO_SYM  */
    TRAILING = 524,                /* TRAILING  */
    TRIGGER_SYM = 525,             /* TRIGGER_SYM  */
    TRIM = 526,                    /* TRIM  */
    TRUE_SYM = 527,                /* TRUE_SYM  */
    ULONGLONG_NUM = 528,           /* ULONGLONG_NUM  */
    UNDERSCORE_CHARSET = 529,      /* UNDERSCORE_CHARSET  */
    UNDO_SYM = 530,                /* UNDO_SYM  */
    UNION_SYM = 531,               /* UNION_SYM  */
    UNIQUE_SYM = 532,              /* UNIQUE_SYM  */
    UNLOCK_SYM = 533,              /* UNLOCK_SYM  */
    UNSIGNED = 534,                /* UNSIGNED  */
    UPDATE_SYM = 535,              /* UPDATE_SYM  */
    USAGE = 536,                   /* USAGE  */
    USE_SYM = 537,                 /* USE_SYM  */
    USING = 538,                   /* USING  */
    UTC_DATE_SYM = 539,            /* UTC_DATE_SYM  */
    UTC_TIMESTAMP_SYM = 540,       /* UTC_TIMESTAMP_SYM  */
    UTC_TIME_SYM = 541,            /* UTC_TIME_SYM  */
    VALUES = 542,                  /* VALUES  */
    VALUES_IN_SYM = 543,           /* VALUES_IN_SYM  */
    VALUES_LESS_SYM = 544,         /* VALUES_LESS_SYM  */
    VARBINARY = 545,               /* VARBINARY  */
    VARCHAR = 546,                 /* VARCHAR  */
    VARIANCE_SYM = 547,            /* VARIANCE_SYM  */
    VARYING = 548,                 /* VARYING  */
    VAR_SAMP_SYM = 549,            /* VAR_SAMP_SYM  */
    WHEN_SYM = 550,                /* WHEN_SYM  */
    WHERE = 551,                   /* WHERE  */
    WHILE_SYM = 552,               /* WHILE_SYM  */
    WITH = 553,                    /* WITH  */
    WITH_CUBE_SYM = 554,           /* WITH_CUBE_SYM  */
    WITH_ROLLUP_SYM = 555,         /* WITH_ROLLUP_SYM  */
    WITH_SYSTEM_SYM = 556,         /* WITH_SYSTEM_SYM  */
    XOR = 557,                     /* XOR  */
    YEAR_MONTH_SYM = 558,          /* YEAR_MONTH_SYM  */
    ZEROFILL = 559,                /* ZEROFILL  */
    IMPOSSIBLE_ACTION = 560,       /* IMPOSSIBLE_ACTION  */
    BODY_MARIADB_SYM = 561,        /* BODY_MARIADB_SYM  */
    ELSEIF_ORACLE_SYM = 562,       /* ELSEIF_ORACLE_SYM  */
    ELSIF_MARIADB_SYM = 563,       /* ELSIF_MARIADB_SYM  */
    EXCEPTION_ORACLE_SYM = 564,    /* EXCEPTION_ORACLE_SYM  */
    GOTO_MARIADB_SYM = 565,        /* GOTO_MARIADB_SYM  */
    OTHERS_MARIADB_SYM = 566,      /* OTHERS_MARIADB_SYM  */
    PACKAGE_MARIADB_SYM = 567,     /* PACKAGE_MARIADB_SYM  */
    RAISE_MARIADB_SYM = 568,       /* RAISE_MARIADB_SYM  */
    ROWTYPE_MARIADB_SYM = 569,     /* ROWTYPE_MARIADB_SYM  */
    ACTION = 570,                  /* ACTION  */
    ADMIN_SYM = 571,               /* ADMIN_SYM  */
    ADDDATE_SYM = 572,             /* ADDDATE_SYM  */
    AFTER_SYM = 573,               /* AFTER_SYM  */
    AGAINST = 574,                 /* AGAINST  */
    AGGREGATE_SYM = 575,           /* AGGREGATE_SYM  */
    ALGORITHM_SYM = 576,           /* ALGORITHM_SYM  */
    ALWAYS_SYM = 577,              /* ALWAYS_SYM  */
    ANY_SYM = 578,                 /* ANY_SYM  */
    ASCII_SYM = 579,               /* ASCII_SYM  */
    AT_SYM = 580,                  /* AT_SYM  */
    ATOMIC_SYM = 581,              /* ATOMIC_SYM  */
    AUTHORS_SYM = 582,             /* AUTHORS_SYM  */
    AUTOEXTEND_SIZE_SYM = 583,     /* AUTOEXTEND_SIZE_SYM  */
    AUTO_INC = 584,                /* AUTO_INC  */
    AUTO_SYM = 585,                /* AUTO_SYM  */
    AVG_ROW_LENGTH = 586,          /* AVG_ROW_LENGTH  */
    AVG_SYM = 587,                 /* AVG_SYM  */
    BACKUP_SYM = 588,              /* BACKUP_SYM  */
    BEGIN_MARIADB_SYM = 589,       /* BEGIN_MARIADB_SYM  */
    BEGIN_ORACLE_SYM = 590,        /* BEGIN_ORACLE_SYM  */
    BINLOG_SYM = 591,              /* BINLOG_SYM  */
    BIT_SYM = 592,                 /* BIT_SYM  */
    BLOCK_SYM = 593,               /* BLOCK_SYM  */
    BOOL_SYM = 594,                /* BOOL_SYM  */
    BOOLEAN_SYM = 595,             /* BOOLEAN_SYM  */
    BTREE_SYM = 596,               /* BTREE_SYM  */
    BYTE_SYM = 597,                /* BYTE_SYM  */
    CACHE_SYM = 598,               /* CACHE_SYM  */
    CASCADED = 599,                /* CASCADED  */
    CATALOG_NAME_SYM = 600,        /* CATALOG_NAME_SYM  */
    CHAIN_SYM = 601,               /* CHAIN_SYM  */
    CHANGED = 602,                 /* CHANGED  */
    CHARSET = 603,                 /* CHARSET  */
    CHECKPOINT_SYM = 604,          /* CHECKPOINT_SYM  */
    CHECKSUM_SYM = 605,            /* CHECKSUM_SYM  */
    CIPHER_SYM = 606,              /* CIPHER_SYM  */
    CLASS_ORIGIN_SYM = 607,        /* CLASS_ORIGIN_SYM  */
    CLIENT_SYM = 608,              /* CLIENT_SYM  */
    CLOB_MARIADB_SYM = 609,        /* CLOB_MARIADB_SYM  */
    CLOB_ORACLE_SYM = 610,         /* CLOB_ORACLE_SYM  */
    CLOSE_SYM = 611,               /* CLOSE_SYM  */
    COALESCE = 612,                /* COALESCE  */
    CODE_SYM = 613,                /* CODE_SYM  */
    COLLATION_SYM = 614,           /* COLLATION_SYM  */
    COLON_ORACLE_SYM = 615,        /* COLON_ORACLE_SYM  */
    COLUMNS = 616,                 /* COLUMNS  */
    COLUMN_ADD_SYM = 617,          /* COLUMN_ADD_SYM  */
    COLUMN_CHECK_SYM = 618,        /* COLUMN_CHECK_SYM  */
    COLUMN_CREATE_SYM = 619,       /* COLUMN_CREATE_SYM  */
    COLUMN_DELETE_SYM = 620,       /* COLUMN_DELETE_SYM  */
    COLUMN_GET_SYM = 621,          /* COLUMN_GET_SYM  */
    COLUMN_SYM = 622,              /* COLUMN_SYM  */
    COLUMN_NAME_SYM = 623,         /* COLUMN_NAME_SYM  */
    COMMENT_SYM = 624,             /* COMMENT_SYM  */
    COMMITTED_SYM = 625,           /* COMMITTED_SYM  */
    COMMIT_SYM = 626,              /* COMMIT_SYM  */
    COMPACT_SYM = 627,             /* COMPACT_SYM  */
    COMPLETION_SYM = 628,          /* COMPLETION_SYM  */
    COMPRESSED_SYM = 629,          /* COMPRESSED_SYM  */
    CONCURRENT = 630,              /* CONCURRENT  */
    CONNECTION_SYM = 631,          /* CONNECTION_SYM  */
    CONSISTENT_SYM = 632,          /* CONSISTENT_SYM  */
    CONSTRAINT_CATALOG_SYM = 633,  /* CONSTRAINT_CATALOG_SYM  */
    CONSTRAINT_NAME_SYM = 634,     /* CONSTRAINT_NAME_SYM  */
    CONSTRAINT_SCHEMA_SYM = 635,   /* CONSTRAINT_SCHEMA_SYM  */
    CONTAINS_SYM = 636,            /* CONTAINS_SYM  */
    CONTEXT_SYM = 637,             /* CONTEXT_SYM  */
    CONTRIBUTORS_SYM = 638,        /* CONTRIBUTORS_SYM  */
    CPU_SYM = 639,                 /* CPU_SYM  */
    CUBE_SYM = 640,                /* CUBE_SYM  */
    CURRENT_SYM = 641,             /* CURRENT_SYM  */
    CURRENT_POS_SYM = 642,         /* CURRENT_POS_SYM  */
    CURSOR_NAME_SYM = 643,         /* CURSOR_NAME_SYM  */
    CYCLE_SYM = 644,               /* CYCLE_SYM  */
    DATAFILE_SYM = 645,            /* DATAFILE_SYM  */
    DATA_SYM = 646,                /* DATA_SYM  */
    DATETIME = 647,                /* DATETIME  */
    DATE_FORMAT_SYM = 648,         /* DATE_FORMAT_SYM  */
    DATE_SYM = 649,                /* DATE_SYM  */
    DAY_SYM = 650,                 /* DAY_SYM  */
    DEALLOCATE_SYM = 651,          /* DEALLOCATE_SYM  */
    DECODE_MARIADB_SYM = 652,      /* DECODE_MARIADB_SYM  */
    DECODE_ORACLE_SYM = 653,       /* DECODE_ORACLE_SYM  */
    DEFINER_SYM = 654,             /* DEFINER_SYM  */
    DELAYED_SYM = 655,             /* DELAYED_SYM  */
    DELAY_KEY_WRITE_SYM = 656,     /* DELAY_KEY_WRITE_SYM  */
    DES_KEY_FILE = 657,            /* DES_KEY_FILE  */
    DIAGNOSTICS_SYM = 658,         /* DIAGNOSTICS_SYM  */
    DIRECTORY_SYM = 659,           /* DIRECTORY_SYM  */
    DISABLE_SYM = 660,             /* DISABLE_SYM  */
    DISCARD = 661,                 /* DISCARD  */
    DISK_SYM = 662,                /* DISK_SYM  */
    DO_SYM = 663,                  /* DO_SYM  */
    DUMPFILE = 664,                /* DUMPFILE  */
    DUPLICATE_SYM = 665,           /* DUPLICATE_SYM  */
    DYNAMIC_SYM = 666,             /* DYNAMIC_SYM  */
    ENABLE_SYM = 667,              /* ENABLE_SYM  */
    END = 668,                     /* END  */
    ENDS_SYM = 669,                /* ENDS_SYM  */
    ENGINES_SYM = 670,             /* ENGINES_SYM  */
    ENGINE_SYM = 671,              /* ENGINE_SYM  */
    ENUM = 672,                    /* ENUM  */
    ERROR_SYM = 673,               /* ERROR_SYM  */
    ERRORS = 674,                  /* ERRORS  */
    ESCAPE_SYM = 675,              /* ESCAPE_SYM  */
    EVENTS_SYM = 676,              /* EVENTS_SYM  */
    EVENT_SYM = 677,               /* EVENT_SYM  */
    EVERY_SYM = 678,               /* EVERY_SYM  */
    EXCHANGE_SYM = 679,            /* EXCHANGE_SYM  */
    EXAMINED_SYM = 680,            /* EXAMINED_SYM  */
    EXCLUDE_SYM = 681,             /* EXCLUDE_SYM  */
    EXECUTE_SYM = 682,             /* EXECUTE_SYM  */
    EXCEPTION_MARIADB_SYM = 683,   /* EXCEPTION_MARIADB_SYM  */
    EXIT_MARIADB_SYM = 684,        /* EXIT_MARIADB_SYM  */
    EXIT_ORACLE_SYM = 685,         /* EXIT_ORACLE_SYM  */
    EXPANSION_SYM = 686,           /* EXPANSION_SYM  */
    EXPORT_SYM = 687,              /* EXPORT_SYM  */
    EXTENDED_SYM = 688,            /* EXTENDED_SYM  */
    EXTENT_SIZE_SYM = 689,         /* EXTENT_SIZE_SYM  */
    FAST_SYM = 690,                /* FAST_SYM  */
    FAULTS_SYM = 691,              /* FAULTS_SYM  */
    FILE_SYM = 692,                /* FILE_SYM  */
    FIRST_SYM = 693,               /* FIRST_SYM  */
    FIXED_SYM = 694,               /* FIXED_SYM  */
    FLUSH_SYM = 695,               /* FLUSH_SYM  */
    FOLLOWS_SYM = 696,             /* FOLLOWS_SYM  */
    FOLLOWING_SYM = 697,           /* FOLLOWING_SYM  */
    FORCE_SYM = 698,               /* FORCE_SYM  */
    FORMAT_SYM = 699,              /* FORMAT_SYM  */
    FOUND_SYM = 700,               /* FOUND_SYM  */
    FULL = 701,                    /* FULL  */
    FUNCTION_SYM = 702,            /* FUNCTION_SYM  */
    GENERAL = 703,                 /* GENERAL  */
    GENERATED_SYM = 704,           /* GENERATED_SYM  */
    GEOMETRYCOLLECTION = 705,      /* GEOMETRYCOLLECTION  */
    GEOMETRY_SYM = 706,            /* GEOMETRY_SYM  */
    GET_FORMAT = 707,              /* GET_FORMAT  */
    GET_SYM = 708,                 /* GET_SYM  */
    GLOBAL_SYM = 709,              /* GLOBAL_SYM  */
    GRANTS = 710,                  /* GRANTS  */
    HANDLER_SYM = 711,             /* HANDLER_SYM  */
    HARD_SYM = 712,                /* HARD_SYM  */
    HASH_SYM = 713,                /* HASH_SYM  */
    HELP_SYM = 714,                /* HELP_SYM  */
    HIGH_PRIORITY = 715,           /* HIGH_PRIORITY  */
    HISTORY_SYM = 716,             /* HISTORY_SYM  */
    HOST_SYM = 717,                /* HOST_SYM  */
    HOSTS_SYM = 718,               /* HOSTS_SYM  */
    HOUR_SYM = 719,                /* HOUR_SYM  */
    ID_SYM = 720,                  /* ID_SYM  */
    IDENTIFIED_SYM = 721,          /* IDENTIFIED_SYM  */
    IGNORE_SERVER_IDS_SYM = 722,   /* IGNORE_SERVER_IDS_SYM  */
    IMMEDIATE_SYM = 723,           /* IMMEDIATE_SYM  */
    IMPORT = 724,                  /* IMPORT  */
    INCREMENT_SYM = 725,           /* INCREMENT_SYM  */
    INDEXES = 726,                 /* INDEXES  */
    INITIAL_SIZE_SYM = 727,        /* INITIAL_SIZE_SYM  */
    INSERT_METHOD = 728,           /* INSERT_METHOD  */
    INSTALL_SYM = 729,             /* INSTALL_SYM  */
    INVOKER_SYM = 730,             /* INVOKER_SYM  */
    IO_SYM = 731,                  /* IO_SYM  */
    IPC_SYM = 732,                 /* IPC_SYM  */
    ISOLATION = 733,               /* ISOLATION  */
    ISOPEN_SYM = 734,              /* ISOPEN_SYM  */
    ISSUER_SYM = 735,              /* ISSUER_SYM  */
    INVISIBLE_SYM = 736,           /* INVISIBLE_SYM  */
    JSON_SYM = 737,                /* JSON_SYM  */
    KEY_BLOCK_SIZE = 738,          /* KEY_BLOCK_SIZE  */
    LANGUAGE_SYM = 739,            /* LANGUAGE_SYM  */
    LAST_SYM = 740,                /* LAST_SYM  */
    LAST_VALUE = 741,              /* LAST_VALUE  */
    LASTVAL_SYM = 742,             /* LASTVAL_SYM  */
    LEAVES = 743,                  /* LEAVES  */
    LESS_SYM = 744,                /* LESS_SYM  */
    LEVEL_SYM = 745,               /* LEVEL_SYM  */
    LINESTRING = 746,              /* LINESTRING  */
    LIST_SYM = 747,                /* LIST_SYM  */
    LOCAL_SYM = 748,               /* LOCAL_SYM  */
    LOCKS_SYM = 749,               /* LOCKS_SYM  */
    LOGFILE_SYM = 750,             /* LOGFILE_SYM  */
    LOGS_SYM = 751,                /* LOGS_SYM  */
    MASTER_CONNECT_RETRY_SYM = 752, /* MASTER_CONNECT_RETRY_SYM  */
    MASTER_DELAY_SYM = 753,        /* MASTER_DELAY_SYM  */
    MASTER_GTID_POS_SYM = 754,     /* MASTER_GTID_POS_SYM  */
    MASTER_HOST_SYM = 755,         /* MASTER_HOST_SYM  */
    MASTER_LOG_FILE_SYM = 756,     /* MASTER_LOG_FILE_SYM  */
    MASTER_LOG_POS_SYM = 757,      /* MASTER_LOG_POS_SYM  */
    MASTER_PASSWORD_SYM = 758,     /* MASTER_PASSWORD_SYM  */
    MASTER_PORT_SYM = 759,         /* MASTER_PORT_SYM  */
    MASTER_SERVER_ID_SYM = 760,    /* MASTER_SERVER_ID_SYM  */
    MASTER_SSL_CAPATH_SYM = 761,   /* MASTER_SSL_CAPATH_SYM  */
    MASTER_SSL_CA_SYM = 762,       /* MASTER_SSL_CA_SYM  */
    MASTER_SSL_CERT_SYM = 763,     /* MASTER_SSL_CERT_SYM  */
    MASTER_SSL_CIPHER_SYM = 764,   /* MASTER_SSL_CIPHER_SYM  */
    MASTER_SSL_CRL_SYM = 765,      /* MASTER_SSL_CRL_SYM  */
    MASTER_SSL_CRLPATH_SYM = 766,  /* MASTER_SSL_CRLPATH_SYM  */
    MASTER_SSL_KEY_SYM = 767,      /* MASTER_SSL_KEY_SYM  */
    MASTER_SSL_SYM = 768,          /* MASTER_SSL_SYM  */
    MASTER_SYM = 769,              /* MASTER_SYM  */
    MASTER_USER_SYM = 770,         /* MASTER_USER_SYM  */
    MASTER_USE_GTID_SYM = 771,     /* MASTER_USE_GTID_SYM  */
    MASTER_HEARTBEAT_PERIOD_SYM = 772, /* MASTER_HEARTBEAT_PERIOD_SYM  */
    MAX_CONNECTIONS_PER_HOUR = 773, /* MAX_CONNECTIONS_PER_HOUR  */
    MAX_QUERIES_PER_HOUR = 774,    /* MAX_QUERIES_PER_HOUR  */
    MAX_ROWS = 775,                /* MAX_ROWS  */
    MAX_SIZE_SYM = 776,            /* MAX_SIZE_SYM  */
    MAX_UPDATES_PER_HOUR = 777,    /* MAX_UPDATES_PER_HOUR  */
    MAX_STATEMENT_TIME_SYM = 778,  /* MAX_STATEMENT_TIME_SYM  */
    MAX_USER_CONNECTIONS_SYM = 779, /* MAX_USER_CONNECTIONS_SYM  */
    MEDIUM_SYM = 780,              /* MEDIUM_SYM  */
    MEMORY_SYM = 781,              /* MEMORY_SYM  */
    MERGE_SYM = 782,               /* MERGE_SYM  */
    MESSAGE_TEXT_SYM = 783,        /* MESSAGE_TEXT_SYM  */
    MICROSECOND_SYM = 784,         /* MICROSECOND_SYM  */
    MIGRATE_SYM = 785,             /* MIGRATE_SYM  */
    MINUTE_SYM = 786,              /* MINUTE_SYM  */
    MINVALUE_SYM = 787,            /* MINVALUE_SYM  */
    MIN_ROWS = 788,                /* MIN_ROWS  */
    MODE_SYM = 789,                /* MODE_SYM  */
    MODIFY_SYM = 790,              /* MODIFY_SYM  */
    MONTH_SYM = 791,               /* MONTH_SYM  */
    MULTILINESTRING = 792,         /* MULTILINESTRING  */
    MULTIPOINT = 793,              /* MULTIPOINT  */
    MULTIPOLYGON = 794,            /* MULTIPOLYGON  */
    MUTEX_SYM = 795,               /* MUTEX_SYM  */
    MYSQL_SYM = 796,               /* MYSQL_SYM  */
    MYSQL_ERRNO_SYM = 797,         /* MYSQL_ERRNO_SYM  */
    NAMES_SYM = 798,               /* NAMES_SYM  */
    NAME_SYM = 799,                /* NAME_SYM  */
    NATIONAL_SYM = 800,            /* NATIONAL_SYM  */
    NCHAR_SYM = 801,               /* NCHAR_SYM  */
    NEW_SYM = 802,                 /* NEW_SYM  */
    NEXT_SYM = 803,                /* NEXT_SYM  */
    NEXTVAL_SYM = 804,             /* NEXTVAL_SYM  */
    NOCACHE_SYM = 805,             /* NOCACHE_SYM  */
    NOCYCLE_SYM = 806,             /* NOCYCLE_SYM  */
    NODEGROUP_SYM = 807,           /* NODEGROUP_SYM  */
    NONE_SYM = 808,                /* NONE_SYM  */
    NOTFOUND_SYM = 809,            /* NOTFOUND_SYM  */
    NO_SYM = 810,                  /* NO_SYM  */
    NOMAXVALUE_SYM = 811,          /* NOMAXVALUE_SYM  */
    NOMINVALUE_SYM = 812,          /* NOMINVALUE_SYM  */
    NO_WAIT_SYM = 813,             /* NO_WAIT_SYM  */
    NOWAIT_SYM = 814,              /* NOWAIT_SYM  */
    NUMBER_MARIADB_SYM = 815,      /* NUMBER_MARIADB_SYM  */
    NUMBER_ORACLE_SYM = 816,       /* NUMBER_ORACLE_SYM  */
    NVARCHAR_SYM = 817,            /* NVARCHAR_SYM  */
    OF_SYM = 818,                  /* OF_SYM  */
    OFFSET_SYM = 819,              /* OFFSET_SYM  */
    OLD_PASSWORD_SYM = 820,        /* OLD_PASSWORD_SYM  */
    ONE_SYM = 821,                 /* ONE_SYM  */
    ONLY_SYM = 822,                /* ONLY_SYM  */
    ONLINE_SYM = 823,              /* ONLINE_SYM  */
    OPEN_SYM = 824,                /* OPEN_SYM  */
    OPTIONS_SYM = 825,             /* OPTIONS_SYM  */
    OPTION = 826,                  /* OPTION  */
    OWNER_SYM = 827,               /* OWNER_SYM  */
    PACK_KEYS_SYM = 828,           /* PACK_KEYS_SYM  */
    PAGE_SYM = 829,                /* PAGE_SYM  */
    PARSER_SYM = 830,              /* PARSER_SYM  */
    PARTIAL = 831,                 /* PARTIAL  */
    PARTITIONS_SYM = 832,          /* PARTITIONS_SYM  */
    PARTITIONING_SYM = 833,        /* PARTITIONING_SYM  */
    PASSWORD_SYM = 834,            /* PASSWORD_SYM  */
    PERIOD_SYM = 835,              /* PERIOD_SYM  */
    PERSISTENT_SYM = 836,          /* PERSISTENT_SYM  */
    PHASE_SYM = 837,               /* PHASE_SYM  */
    PLUGINS_SYM = 838,             /* PLUGINS_SYM  */
    PLUGIN_SYM = 839,              /* PLUGIN_SYM  */
    POINT_SYM = 840,               /* POINT_SYM  */
    POLYGON = 841,                 /* POLYGON  */
    PORT_SYM = 842,                /* PORT_SYM  */
    PRECEDES_SYM = 843,            /* PRECEDES_SYM  */
    PRECEDING_SYM = 844,           /* PRECEDING_SYM  */
    PREPARE_SYM = 845,             /* PREPARE_SYM  */
    PRESERVE_SYM = 846,            /* PRESERVE_SYM  */
    PREV_SYM = 847,                /* PREV_SYM  */
    PREVIOUS_SYM = 848,            /* PREVIOUS_SYM  */
    PRIVILEGES = 849,              /* PRIVILEGES  */
    PROCESS = 850,                 /* PROCESS  */
    PROCESSLIST_SYM = 851,         /* PROCESSLIST_SYM  */
    PROFILE_SYM = 852,             /* PROFILE_SYM  */
    PROFILES_SYM = 853,            /* PROFILES_SYM  */
    PROXY_SYM = 854,               /* PROXY_SYM  */
    QUARTER_SYM = 855,             /* QUARTER_SYM  */
    QUERY_SYM = 856,               /* QUERY_SYM  */
    QUICK = 857,                   /* QUICK  */
    RAW_MARIADB_SYM = 858,         /* RAW_MARIADB_SYM  */
    RAW_ORACLE_SYM = 859,          /* RAW_ORACLE_SYM  */
    READ_ONLY_SYM = 860,           /* READ_ONLY_SYM  */
    REBUILD_SYM = 861,             /* REBUILD_SYM  */
    RECOVER_SYM = 862,             /* RECOVER_SYM  */
    REDOFILE_SYM = 863,            /* REDOFILE_SYM  */
    REDO_BUFFER_SIZE_SYM = 864,    /* REDO_BUFFER_SIZE_SYM  */
    REDUNDANT_SYM = 865,           /* REDUNDANT_SYM  */
    RELAY = 866,                   /* RELAY  */
    RELAYLOG_SYM = 867,            /* RELAYLOG_SYM  */
    RELAY_LOG_FILE_SYM = 868,      /* RELAY_LOG_FILE_SYM  */
    RELAY_LOG_POS_SYM = 869,       /* RELAY_LOG_POS_SYM  */
    RELAY_THREAD = 870,            /* RELAY_THREAD  */
    RELOAD = 871,                  /* RELOAD  */
    REMOVE_SYM = 872,              /* REMOVE_SYM  */
    REORGANIZE_SYM = 873,          /* REORGANIZE_SYM  */
    REPAIR = 874,                  /* REPAIR  */
    REPEATABLE_SYM = 875,          /* REPEATABLE_SYM  */
    REPLICATION = 876,             /* REPLICATION  */
    RESET_SYM = 877,               /* RESET_SYM  */
    RESTART_SYM = 878,             /* RESTART_SYM  */
    RESOURCES = 879,               /* RESOURCES  */
    RESTORE_SYM = 880,             /* RESTORE_SYM  */
    RESUME_SYM = 881,              /* RESUME_SYM  */
    RETURNED_SQLSTATE_SYM = 882,   /* RETURNED_SQLSTATE_SYM  */
    RETURNS_SYM = 883,             /* RETURNS_SYM  */
    REUSE_SYM = 884,               /* REUSE_SYM  */
    REVERSE_SYM = 885,             /* REVERSE_SYM  */
    ROLE_SYM = 886,                /* ROLE_SYM  */
    ROLLBACK_SYM = 887,            /* ROLLBACK_SYM  */
    ROLLUP_SYM = 888,              /* ROLLUP_SYM  */
    ROUTINE_SYM = 889,             /* ROUTINE_SYM  */
    ROWCOUNT_SYM = 890,            /* ROWCOUNT_SYM  */
    ROW_SYM = 891,                 /* ROW_SYM  */
    ROW_COUNT_SYM = 892,           /* ROW_COUNT_SYM  */
    ROW_FORMAT_SYM = 893,          /* ROW_FORMAT_SYM  */
    RTREE_SYM = 894,               /* RTREE_SYM  */
    SAVEPOINT_SYM = 895,           /* SAVEPOINT_SYM  */
    SCHEDULE_SYM = 896,            /* SCHEDULE_SYM  */
    SCHEMA_NAME_SYM = 897,         /* SCHEMA_NAME_SYM  */
    SECOND_SYM = 898,              /* SECOND_SYM  */
    SECURITY_SYM = 899,            /* SECURITY_SYM  */
    SEQUENCE_SYM = 900,            /* SEQUENCE_SYM  */
    SERIALIZABLE_SYM = 901,        /* SERIALIZABLE_SYM  */
    SERIAL_SYM = 902,              /* SERIAL_SYM  */
    SESSION_SYM = 903,             /* SESSION_SYM  */
    SERVER_SYM = 904,              /* SERVER_SYM  */
    SETVAL_SYM = 905,              /* SETVAL_SYM  */
    SHARE_SYM = 906,               /* SHARE_SYM  */
    SHUTDOWN = 907,                /* SHUTDOWN  */
    SIGNED_SYM = 908,              /* SIGNED_SYM  */
    SIMPLE_SYM = 909,              /* SIMPLE_SYM  */
    SLAVE = 910,                   /* SLAVE  */
    SLAVES = 911,                  /* SLAVES  */
    SLAVE_POS_SYM = 912,           /* SLAVE_POS_SYM  */
    SLOW = 913,                    /* SLOW  */
    SNAPSHOT_SYM = 914,            /* SNAPSHOT_SYM  */
    SOCKET_SYM = 915,              /* SOCKET_SYM  */
    SOFT_SYM = 916,                /* SOFT_SYM  */
    SONAME_SYM = 917,              /* SONAME_SYM  */
    SOUNDS_SYM = 918,              /* SOUNDS_SYM  */
    SOURCE_SYM = 919,              /* SOURCE_SYM  */
    SQL_BUFFER_RESULT = 920,       /* SQL_BUFFER_RESULT  */
    SQL_CACHE_SYM = 921,           /* SQL_CACHE_SYM  */
    SQL_CALC_FOUND_ROWS = 922,     /* SQL_CALC_FOUND_ROWS  */
    SQL_NO_CACHE_SYM = 923,        /* SQL_NO_CACHE_SYM  */
    SQL_THREAD = 924,              /* SQL_THREAD  */
    STARTS_SYM = 925,              /* STARTS_SYM  */
    START_SYM = 926,               /* START_SYM  */
    STATEMENT_SYM = 927,           /* STATEMENT_SYM  */
    STATUS_SYM = 928,              /* STATUS_SYM  */
    STOP_SYM = 929,                /* STOP_SYM  */
    STORAGE_SYM = 930,             /* STORAGE_SYM  */
    STORED_SYM = 931,              /* STORED_SYM  */
    STRING_SYM = 932,              /* STRING_SYM  */
    SUBCLASS_ORIGIN_SYM = 933,     /* SUBCLASS_ORIGIN_SYM  */
    SUBDATE_SYM = 934,             /* SUBDATE_SYM  */
    SUBJECT_SYM = 935,             /* SUBJECT_SYM  */
    SUBPARTITIONS_SYM = 936,       /* SUBPARTITIONS_SYM  */
    SUBPARTITION_SYM = 937,        /* SUBPARTITION_SYM  */
    SUPER_SYM = 938,               /* SUPER_SYM  */
    SUSPEND_SYM = 939,             /* SUSPEND_SYM  */
    SWAPS_SYM = 940,               /* SWAPS_SYM  */
    SWITCHES_SYM = 941,            /* SWITCHES_SYM  */
    SYSTEM = 942,                  /* SYSTEM  */
    SYSTEM_TIME_SYM = 943,         /* SYSTEM_TIME_SYM  */
    TABLES = 944,                  /* TABLES  */
    TABLESPACE = 945,              /* TABLESPACE  */
    TABLE_CHECKSUM_SYM = 946,      /* TABLE_CHECKSUM_SYM  */
    TABLE_NAME_SYM = 947,          /* TABLE_NAME_SYM  */
    TEMPORARY = 948,               /* TEMPORARY  */
    TEMPTABLE_SYM = 949,           /* TEMPTABLE_SYM  */
    TEXT_SYM = 950,                /* TEXT_SYM  */
    THAN_SYM = 951,                /* THAN_SYM  */
    TIES_SYM = 952,                /* TIES_SYM  */
    TIMESTAMP = 953,               /* TIMESTAMP  */
    TIMESTAMP_ADD = 954,           /* TIMESTAMP_ADD  */
    TIMESTAMP_DIFF = 955,          /* TIMESTAMP_DIFF  */
    TIME_SYM = 956,                /* TIME_SYM  */
    TRANSACTION_SYM = 957,         /* TRANSACTION_SYM  */
    TRANSACTIONAL_SYM = 958,       /* TRANSACTIONAL_SYM  */
    TRIGGERS_SYM = 959,            /* TRIGGERS_SYM  */
    TRIM_ORACLE = 960,             /* TRIM_ORACLE  */
    TRUNCATE_SYM = 961,            /* TRUNCATE_SYM  */
    TYPES_SYM = 962,               /* TYPES_SYM  */
    TYPE_SYM = 963,                /* TYPE_SYM  */
    UDF_RETURNS_SYM = 964,         /* UDF_RETURNS_SYM  */
    UNBOUNDED_SYM = 965,           /* UNBOUNDED_SYM  */
    UNCOMMITTED_SYM = 966,         /* UNCOMMITTED_SYM  */
    UNDEFINED_SYM = 967,           /* UNDEFINED_SYM  */
    UNDOFILE_SYM = 968,            /* UNDOFILE_SYM  */
    UNDO_BUFFER_SIZE_SYM = 969,    /* UNDO_BUFFER_SIZE_SYM  */
    UNICODE_SYM = 970,             /* UNICODE_SYM  */
    UNINSTALL_SYM = 971,           /* UNINSTALL_SYM  */
    UNKNOWN_SYM = 972,             /* UNKNOWN_SYM  */
    UNTIL_SYM = 973,               /* UNTIL_SYM  */
    UPGRADE_SYM = 974,             /* UPGRADE_SYM  */
    USER_SYM = 975,                /* USER_SYM  */
    USE_FRM = 976,                 /* USE_FRM  */
    VALUE_SYM = 977,               /* VALUE_SYM  */
    VARCHAR2_MARIADB_SYM = 978,    /* VARCHAR2_MARIADB_SYM  */
    VARCHAR2_ORACLE_SYM = 979,     /* VARCHAR2_ORACLE_SYM  */
    VARIABLES = 980,               /* VARIABLES  */
    VERSIONING_SYM = 981,          /* VERSIONING_SYM  */
    VIA_SYM = 982,                 /* VIA_SYM  */
    VIEW_SYM = 983,                /* VIEW_SYM  */
    VIRTUAL_SYM = 984,             /* VIRTUAL_SYM  */
    WAIT_SYM = 985,                /* WAIT_SYM  */
    WARNINGS = 986,                /* WARNINGS  */
    WEEK_SYM = 987,                /* WEEK_SYM  */
    WEIGHT_STRING_SYM = 988,       /* WEIGHT_STRING_SYM  */
    WINDOW_SYM = 989,              /* WINDOW_SYM  */
    WITHIN = 990,                  /* WITHIN  */
    WITHOUT = 991,                 /* WITHOUT  */
    WORK_SYM = 992,                /* WORK_SYM  */
    WRAPPER_SYM = 993,             /* WRAPPER_SYM  */
    WRITE_SYM = 994,               /* WRITE_SYM  */
    X509_SYM = 995,                /* X509_SYM  */
    XA_SYM = 996,                  /* XA_SYM  */
    XML_SYM = 997,                 /* XML_SYM  */
    YEAR_SYM = 998,                /* YEAR_SYM  */
    CONDITIONLESS_JOIN = 999,      /* CONDITIONLESS_JOIN  */
    ON_SYM = 1000,                 /* ON_SYM  */
    PREC_BELOW_NOT = 1001,         /* PREC_BELOW_NOT  */
    PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE = 1002, /* PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE  */
    USER = 1003,                   /* USER  */
    PREC_BELOW_CONTRACTION_TOKEN2 = 1004 /* PREC_BELOW_CONTRACTION_TOKEN2  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 176 "/home/buildbot/git/sql/sql_yacc_ora.yy"

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  uint sp_instr_addr;

  /* structs */
  LEX_CSTRING lex_str;
  Lex_ident_cli_st kwd;
  Lex_ident_cli_st ident_cli;
  Lex_ident_sys_st ident_sys;
  Lex_string_with_metadata_st lex_string_with_metadata;
  Lex_spblock_st spblock;
  Lex_spblock_handlers_st spblock_handlers;
  Lex_length_and_dec_st Lex_length_and_dec;
  Lex_cast_type_st Lex_cast_type;
  Lex_field_type_st Lex_field_type;
  Lex_dyncol_type_st Lex_dyncol_type;
  Lex_for_loop_st for_loop;
  Lex_for_loop_bounds_st for_loop_bounds;
  Lex_trim_st trim;
  vers_history_point_t vers_history_point;

  /* pointers */
  Create_field *create_field;
  Spvar_definition *spvar_definition;
  Row_definition_list *spvar_definition_list;
  const Type_handler *type_handler;
  CHARSET_INFO *charset;
  Condition_information_item *cond_info_item;
  DYNCALL_CREATE_DEF *dyncol_def;
  Diagnostics_information *diag_info;
  Item *item;
  Item_num *item_num;
  Item_param *item_param;
  Item_basic_constant *item_basic_constant;
  Key_part_spec *key_part;
  LEX *lex;
  sp_assignment_lex *assignment_lex;
  class sp_lex_cursor *sp_cursor_stmt;
  LEX_CSTRING *lex_str_ptr;
  LEX_USER *lex_user;
  List<Condition_information_item> *cond_info_list;
  List<DYNCALL_CREATE_DEF> *dyncol_def_list;
  List<Item> *item_list;
  List<sp_assignment_lex> *sp_assignment_lex_list;
  List<Statement_information_item> *stmt_info_list;
  List<String> *string_list;
  List<LEX_CSTRING> *lex_str_list;
  Statement_information_item *stmt_info_item;
  String *string;
  TABLE_LIST *table_list;
  Table_ident *table;
  Qualified_column_ident *qualified_column_ident;
  char *simple_string;
  const char *const_simple_string;
  chooser_compare_func_creator boolfunc2creator;
  class my_var *myvar;
  class sp_condition_value *spcondvalue;
  class sp_head *sphead;
  class sp_name *spname;
  class sp_variable *spvar;
  class With_element_head *with_element_head;
  class With_clause *with_clause;
  class Virtual_column_info *virtual_column;

  handlerton *db_type;
  st_select_lex *select_lex;
  struct p_elem_val *p_elem_value;
  class Window_frame *window_frame;
  class Window_frame_bound *window_frame_bound;
  udf_func *udf;
  st_trg_execution_order trg_execution_order;

  /* enums */
  enum enum_sp_suid_behaviour sp_suid;
  enum enum_view_suid view_suid;
  enum sub_select_type unit_type;
  enum Condition_information_item::Name cond_info_item_name;
  enum enum_diag_condition_item_name diag_condition_item_name;
  enum Diagnostics_information::Which_area diag_area;
  enum Field::geometry_type geom_type;
  enum enum_fk_option m_fk_option;
  enum Item_udftype udf_type;
  enum Key::Keytype key_type;
  enum Statement_information_item::Name stmt_info_item_name;
  enum enum_filetype filetype;
  enum enum_tx_isolation tx_isolation;
  enum enum_var_type var_type;
  enum enum_yes_no_unknown m_yes_no_unk;
  enum ha_choice choice;
  enum ha_key_alg key_alg;
  enum ha_rkey_function ha_rkey_mode;
  enum index_hint_type index_hint;
  enum interval_type interval, interval_time_st;
  enum row_type row_type;
  enum sp_variable::enum_mode spvar_mode;
  enum thr_lock_type lock_type;
  enum enum_mysql_timestamp_type date_time_type;
  enum Window_frame_bound::Bound_precedence_type bound_precedence_type;
  enum Window_frame::Frame_units frame_units;
  enum Window_frame::Frame_exclusion frame_exclusion;
  enum trigger_order_type trigger_action_order_type;
  DDL_options_st object_ddl_options;
  enum vers_sys_type_t vers_range_unit;
  enum Column_definition::enum_column_versioning vers_column_versioning;
  enum plsql_cursor_attr_t plsql_cursor_attr;

#line 923 "/home/buildbot/git/mkdist/sql/sql_yacc_ora.hh"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int ORAparse (THD *thd);


#endif /* !YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_ORA_HH_INCLUDED  */
