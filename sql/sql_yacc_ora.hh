/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_ORA_HH_INCLUDED
# define YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_ORA_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ORAdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABORT_SYM = 258,
    ACCESSIBLE_SYM = 259,
    ADD = 260,
    ALL = 261,
    ALTER = 262,
    ANALYZE_SYM = 263,
    AND_AND_SYM = 264,
    AND_SYM = 265,
    AS = 266,
    ASC = 267,
    ASENSITIVE_SYM = 268,
    BEFORE_SYM = 269,
    BETWEEN_SYM = 270,
    BIGINT = 271,
    BINARY = 272,
    BIN_NUM = 273,
    BIT_AND = 274,
    BIT_OR = 275,
    BIT_XOR = 276,
    BLOB_MARIADB_SYM = 277,
    BLOB_ORACLE_SYM = 278,
    BODY_ORACLE_SYM = 279,
    BOTH = 280,
    BY = 281,
    CALL_SYM = 282,
    CASCADE = 283,
    CASE_SYM = 284,
    CAST_SYM = 285,
    CHANGE = 286,
    CHAR_SYM = 287,
    CHECK_SYM = 288,
    COLLATE_SYM = 289,
    CONDITION_SYM = 290,
    CONSTRAINT = 291,
    CONTINUE_MARIADB_SYM = 292,
    CONTINUE_ORACLE_SYM = 293,
    CONVERT_SYM = 294,
    COUNT_SYM = 295,
    CREATE = 296,
    CROSS = 297,
    CUME_DIST_SYM = 298,
    CURDATE = 299,
    CURRENT_USER = 300,
    CURRENT_ROLE = 301,
    CURSOR_SYM = 302,
    CURTIME = 303,
    DATABASE = 304,
    DATABASES = 305,
    DATE_ADD_INTERVAL = 306,
    DATE_SUB_INTERVAL = 307,
    DAY_HOUR_SYM = 308,
    DAY_MICROSECOND_SYM = 309,
    DAY_MINUTE_SYM = 310,
    DAY_SECOND_SYM = 311,
    DECIMAL_NUM = 312,
    DECIMAL_SYM = 313,
    DECLARE_MARIADB_SYM = 314,
    DECLARE_ORACLE_SYM = 315,
    DEFAULT = 316,
    DELETE_DOMAIN_ID_SYM = 317,
    DELETE_SYM = 318,
    DENSE_RANK_SYM = 319,
    DESC = 320,
    DESCRIBE = 321,
    DETERMINISTIC_SYM = 322,
    DISTINCT = 323,
    DIV_SYM = 324,
    DOUBLE_SYM = 325,
    DO_DOMAIN_IDS_SYM = 326,
    DOT_DOT_SYM = 327,
    DROP = 328,
    DUAL_SYM = 329,
    EACH_SYM = 330,
    ELSE = 331,
    ELSEIF_MARIADB_SYM = 332,
    ELSIF_ORACLE_SYM = 333,
    ENCLOSED = 334,
    END_OF_INPUT = 335,
    EQUAL_SYM = 336,
    ESCAPED = 337,
    EXCEPT_SYM = 338,
    EXISTS = 339,
    EXTRACT_SYM = 340,
    FALSE_SYM = 341,
    FETCH_SYM = 342,
    FIRST_VALUE_SYM = 343,
    FLOAT_NUM = 344,
    FLOAT_SYM = 345,
    FOREIGN = 346,
    FOR_SYM = 347,
    FOR_SYSTEM_TIME_SYM = 348,
    FROM = 349,
    FULLTEXT_SYM = 350,
    GE = 351,
    GOTO_ORACLE_SYM = 352,
    GRANT = 353,
    GROUP_SYM = 354,
    GROUP_CONCAT_SYM = 355,
    LAG_SYM = 356,
    LEAD_SYM = 357,
    HAVING = 358,
    HEX_NUM = 359,
    HEX_STRING = 360,
    HOUR_MICROSECOND_SYM = 361,
    HOUR_MINUTE_SYM = 362,
    HOUR_SECOND_SYM = 363,
    IDENT = 364,
    IDENT_QUOTED = 365,
    IF_SYM = 366,
    IGNORE_DOMAIN_IDS_SYM = 367,
    IGNORE_SYM = 368,
    INDEX_SYM = 369,
    INFILE = 370,
    INNER_SYM = 371,
    INOUT_SYM = 372,
    INSENSITIVE_SYM = 373,
    INSERT = 374,
    INTERSECT_SYM = 375,
    INTERVAL_SYM = 376,
    INTO = 377,
    INT_SYM = 378,
    IN_SYM = 379,
    IS = 380,
    ITERATE_SYM = 381,
    JOIN_SYM = 382,
    KEYS = 383,
    KEY_SYM = 384,
    KILL_SYM = 385,
    LE = 386,
    LEADING = 387,
    LEAVE_SYM = 388,
    LEFT = 389,
    LEX_HOSTNAME = 390,
    LIKE = 391,
    LIMIT = 392,
    LINEAR_SYM = 393,
    LINES = 394,
    LOAD = 395,
    LOCATOR_SYM = 396,
    LOCK_SYM = 397,
    LONGBLOB = 398,
    LONGTEXT = 399,
    LONG_NUM = 400,
    LONG_SYM = 401,
    LOOP_SYM = 402,
    LOW_PRIORITY = 403,
    MASTER_SSL_VERIFY_SERVER_CERT_SYM = 404,
    MATCH = 405,
    MAX_SYM = 406,
    MAXVALUE_SYM = 407,
    MEDIAN_SYM = 408,
    MEDIUMBLOB = 409,
    MEDIUMINT = 410,
    MEDIUMTEXT = 411,
    MINUTE_MICROSECOND_SYM = 412,
    MINUTE_SECOND_SYM = 413,
    MIN_SYM = 414,
    MODIFIES_SYM = 415,
    MOD_SYM = 416,
    MYSQL_CONCAT_SYM = 417,
    NATURAL = 418,
    NCHAR_STRING = 419,
    NE = 420,
    NEG = 421,
    NOT2_SYM = 422,
    NOT_SYM = 423,
    NOW_SYM = 424,
    NO_WRITE_TO_BINLOG = 425,
    NTILE_SYM = 426,
    NULL_SYM = 427,
    NUM = 428,
    NUMERIC_SYM = 429,
    NTH_VALUE_SYM = 430,
    ON = 431,
    OPTIMIZE = 432,
    OPTIONALLY = 433,
    ORACLE_CONCAT_SYM = 434,
    OR2_SYM = 435,
    ORDER_SYM = 436,
    OR_SYM = 437,
    OTHERS_ORACLE_SYM = 438,
    OUTER = 439,
    OUTFILE = 440,
    OUT_SYM = 441,
    OVER_SYM = 442,
    PACKAGE_ORACLE_SYM = 443,
    PAGE_CHECKSUM_SYM = 444,
    PARAM_MARKER = 445,
    PARSE_VCOL_EXPR_SYM = 446,
    PARTITION_SYM = 447,
    PERCENT_ORACLE_SYM = 448,
    PERCENT_RANK_SYM = 449,
    PERCENTILE_CONT_SYM = 450,
    PERCENTILE_DISC_SYM = 451,
    POSITION_SYM = 452,
    PRECISION = 453,
    PRIMARY_SYM = 454,
    PROCEDURE_SYM = 455,
    PURGE = 456,
    RAISE_ORACLE_SYM = 457,
    RANGE_SYM = 458,
    RANK_SYM = 459,
    READS_SYM = 460,
    READ_SYM = 461,
    READ_WRITE_SYM = 462,
    REAL = 463,
    RECURSIVE_SYM = 464,
    REF_SYSTEM_ID_SYM = 465,
    REFERENCES = 466,
    REGEXP = 467,
    RELEASE_SYM = 468,
    RENAME = 469,
    REPEAT_SYM = 470,
    REPLACE = 471,
    REQUIRE_SYM = 472,
    RESIGNAL_SYM = 473,
    RESTRICT = 474,
    RETURNING_SYM = 475,
    RETURN_MARIADB_SYM = 476,
    RETURN_ORACLE_SYM = 477,
    REVOKE = 478,
    RIGHT = 479,
    ROWS_SYM = 480,
    ROWTYPE_ORACLE_SYM = 481,
    ROW_NUMBER_SYM = 482,
    SECOND_MICROSECOND_SYM = 483,
    SELECT_SYM = 484,
    SENSITIVE_SYM = 485,
    SEPARATOR_SYM = 486,
    SERVER_OPTIONS = 487,
    SET = 488,
    SET_VAR = 489,
    SHIFT_LEFT = 490,
    SHIFT_RIGHT = 491,
    SHOW = 492,
    SIGNAL_SYM = 493,
    SMALLINT = 494,
    SPATIAL_SYM = 495,
    SPECIFIC_SYM = 496,
    SQLEXCEPTION_SYM = 497,
    SQLSTATE_SYM = 498,
    SQLWARNING_SYM = 499,
    SQL_BIG_RESULT = 500,
    SQL_SMALL_RESULT = 501,
    SQL_SYM = 502,
    SSL_SYM = 503,
    STARTING = 504,
    STATS_AUTO_RECALC_SYM = 505,
    STATS_PERSISTENT_SYM = 506,
    STATS_SAMPLE_PAGES_SYM = 507,
    STDDEV_SAMP_SYM = 508,
    STD_SYM = 509,
    STRAIGHT_JOIN = 510,
    SUBSTRING = 511,
    SUM_SYM = 512,
    SYSDATE = 513,
    TABLE_REF_PRIORITY = 514,
    TABLE_SYM = 515,
    TERMINATED = 516,
    TEXT_STRING = 517,
    THEN_SYM = 518,
    TINYBLOB = 519,
    TINYINT = 520,
    TINYTEXT = 521,
    TO_SYM = 522,
    TRAILING = 523,
    TRIGGER_SYM = 524,
    TRIM = 525,
    TRUE_SYM = 526,
    ULONGLONG_NUM = 527,
    UNDERSCORE_CHARSET = 528,
    UNDO_SYM = 529,
    UNION_SYM = 530,
    UNIQUE_SYM = 531,
    UNLOCK_SYM = 532,
    UNSIGNED = 533,
    UPDATE_SYM = 534,
    USAGE = 535,
    USE_SYM = 536,
    USING = 537,
    UTC_DATE_SYM = 538,
    UTC_TIMESTAMP_SYM = 539,
    UTC_TIME_SYM = 540,
    VALUES = 541,
    VALUES_IN_SYM = 542,
    VALUES_LESS_SYM = 543,
    VARBINARY = 544,
    VARCHAR = 545,
    VARIANCE_SYM = 546,
    VARYING = 547,
    VAR_SAMP_SYM = 548,
    WHEN_SYM = 549,
    WHERE = 550,
    WHILE_SYM = 551,
    WITH = 552,
    WITH_CUBE_SYM = 553,
    WITH_ROLLUP_SYM = 554,
    WITH_SYSTEM_SYM = 555,
    XOR = 556,
    YEAR_MONTH_SYM = 557,
    ZEROFILL = 558,
    IMPOSSIBLE_ACTION = 559,
    BODY_MARIADB_SYM = 560,
    ELSEIF_ORACLE_SYM = 561,
    ELSIF_MARIADB_SYM = 562,
    EXCEPTION_ORACLE_SYM = 563,
    GOTO_MARIADB_SYM = 564,
    OTHERS_MARIADB_SYM = 565,
    PACKAGE_MARIADB_SYM = 566,
    RAISE_MARIADB_SYM = 567,
    ROWTYPE_MARIADB_SYM = 568,
    ACTION = 569,
    ADMIN_SYM = 570,
    ADDDATE_SYM = 571,
    AFTER_SYM = 572,
    AGAINST = 573,
    AGGREGATE_SYM = 574,
    ALGORITHM_SYM = 575,
    ALWAYS_SYM = 576,
    ANY_SYM = 577,
    ASCII_SYM = 578,
    AT_SYM = 579,
    ATOMIC_SYM = 580,
    AUTHORS_SYM = 581,
    AUTOEXTEND_SIZE_SYM = 582,
    AUTO_INC = 583,
    AUTO_SYM = 584,
    AVG_ROW_LENGTH = 585,
    AVG_SYM = 586,
    BACKUP_SYM = 587,
    BEGIN_MARIADB_SYM = 588,
    BEGIN_ORACLE_SYM = 589,
    BINLOG_SYM = 590,
    BIT_SYM = 591,
    BLOCK_SYM = 592,
    BOOL_SYM = 593,
    BOOLEAN_SYM = 594,
    BTREE_SYM = 595,
    BYTE_SYM = 596,
    CACHE_SYM = 597,
    CASCADED = 598,
    CATALOG_NAME_SYM = 599,
    CHAIN_SYM = 600,
    CHANGED = 601,
    CHARSET = 602,
    CHECKPOINT_SYM = 603,
    CHECKSUM_SYM = 604,
    CIPHER_SYM = 605,
    CLASS_ORIGIN_SYM = 606,
    CLIENT_SYM = 607,
    CLOB_MARIADB_SYM = 608,
    CLOB_ORACLE_SYM = 609,
    CLOSE_SYM = 610,
    COALESCE = 611,
    CODE_SYM = 612,
    COLLATION_SYM = 613,
    COLON_ORACLE_SYM = 614,
    COLUMNS = 615,
    COLUMN_ADD_SYM = 616,
    COLUMN_CHECK_SYM = 617,
    COLUMN_CREATE_SYM = 618,
    COLUMN_DELETE_SYM = 619,
    COLUMN_GET_SYM = 620,
    COLUMN_SYM = 621,
    COLUMN_NAME_SYM = 622,
    COMMENT_SYM = 623,
    COMMITTED_SYM = 624,
    COMMIT_SYM = 625,
    COMPACT_SYM = 626,
    COMPLETION_SYM = 627,
    COMPRESSED_SYM = 628,
    CONCURRENT = 629,
    CONNECTION_SYM = 630,
    CONSISTENT_SYM = 631,
    CONSTRAINT_CATALOG_SYM = 632,
    CONSTRAINT_NAME_SYM = 633,
    CONSTRAINT_SCHEMA_SYM = 634,
    CONTAINS_SYM = 635,
    CONTEXT_SYM = 636,
    CONTRIBUTORS_SYM = 637,
    CPU_SYM = 638,
    CUBE_SYM = 639,
    CURRENT_SYM = 640,
    CURRENT_POS_SYM = 641,
    CURSOR_NAME_SYM = 642,
    CYCLE_SYM = 643,
    DATAFILE_SYM = 644,
    DATA_SYM = 645,
    DATETIME = 646,
    DATE_FORMAT_SYM = 647,
    DATE_SYM = 648,
    DAY_SYM = 649,
    DEALLOCATE_SYM = 650,
    DECODE_MARIADB_SYM = 651,
    DECODE_ORACLE_SYM = 652,
    DEFINER_SYM = 653,
    DELAYED_SYM = 654,
    DELAY_KEY_WRITE_SYM = 655,
    DES_KEY_FILE = 656,
    DIAGNOSTICS_SYM = 657,
    DIRECTORY_SYM = 658,
    DISABLE_SYM = 659,
    DISCARD = 660,
    DISK_SYM = 661,
    DO_SYM = 662,
    DUMPFILE = 663,
    DUPLICATE_SYM = 664,
    DYNAMIC_SYM = 665,
    ENABLE_SYM = 666,
    END = 667,
    ENDS_SYM = 668,
    ENGINES_SYM = 669,
    ENGINE_SYM = 670,
    ENUM = 671,
    ERROR_SYM = 672,
    ERRORS = 673,
    ESCAPE_SYM = 674,
    EVENTS_SYM = 675,
    EVENT_SYM = 676,
    EVERY_SYM = 677,
    EXCHANGE_SYM = 678,
    EXAMINED_SYM = 679,
    EXCLUDE_SYM = 680,
    EXECUTE_SYM = 681,
    EXCEPTION_MARIADB_SYM = 682,
    EXIT_MARIADB_SYM = 683,
    EXIT_ORACLE_SYM = 684,
    EXPANSION_SYM = 685,
    EXPORT_SYM = 686,
    EXTENDED_SYM = 687,
    EXTENT_SIZE_SYM = 688,
    FAST_SYM = 689,
    FAULTS_SYM = 690,
    FILE_SYM = 691,
    FIRST_SYM = 692,
    FIXED_SYM = 693,
    FLUSH_SYM = 694,
    FOLLOWS_SYM = 695,
    FOLLOWING_SYM = 696,
    FORCE_SYM = 697,
    FORMAT_SYM = 698,
    FOUND_SYM = 699,
    FULL = 700,
    FUNCTION_SYM = 701,
    GENERAL = 702,
    GENERATED_SYM = 703,
    GEOMETRYCOLLECTION = 704,
    GEOMETRY_SYM = 705,
    GET_FORMAT = 706,
    GET_SYM = 707,
    GLOBAL_SYM = 708,
    GRANTS = 709,
    HANDLER_SYM = 710,
    HARD_SYM = 711,
    HASH_SYM = 712,
    HELP_SYM = 713,
    HIGH_PRIORITY = 714,
    HISTORY_SYM = 715,
    HOST_SYM = 716,
    HOSTS_SYM = 717,
    HOUR_SYM = 718,
    ID_SYM = 719,
    IDENTIFIED_SYM = 720,
    IGNORE_SERVER_IDS_SYM = 721,
    IMMEDIATE_SYM = 722,
    IMPORT = 723,
    INCREMENT_SYM = 724,
    INDEXES = 725,
    INITIAL_SIZE_SYM = 726,
    INSERT_METHOD = 727,
    INSTALL_SYM = 728,
    INVOKER_SYM = 729,
    IO_SYM = 730,
    IPC_SYM = 731,
    ISOLATION = 732,
    ISOPEN_SYM = 733,
    ISSUER_SYM = 734,
    INVISIBLE_SYM = 735,
    JSON_SYM = 736,
    KEY_BLOCK_SIZE = 737,
    LANGUAGE_SYM = 738,
    LAST_SYM = 739,
    LAST_VALUE = 740,
    LASTVAL_SYM = 741,
    LEAVES = 742,
    LESS_SYM = 743,
    LEVEL_SYM = 744,
    LINESTRING = 745,
    LIST_SYM = 746,
    LOCAL_SYM = 747,
    LOCKS_SYM = 748,
    LOGFILE_SYM = 749,
    LOGS_SYM = 750,
    MASTER_CONNECT_RETRY_SYM = 751,
    MASTER_DELAY_SYM = 752,
    MASTER_GTID_POS_SYM = 753,
    MASTER_HOST_SYM = 754,
    MASTER_LOG_FILE_SYM = 755,
    MASTER_LOG_POS_SYM = 756,
    MASTER_PASSWORD_SYM = 757,
    MASTER_PORT_SYM = 758,
    MASTER_SERVER_ID_SYM = 759,
    MASTER_SSL_CAPATH_SYM = 760,
    MASTER_SSL_CA_SYM = 761,
    MASTER_SSL_CERT_SYM = 762,
    MASTER_SSL_CIPHER_SYM = 763,
    MASTER_SSL_CRL_SYM = 764,
    MASTER_SSL_CRLPATH_SYM = 765,
    MASTER_SSL_KEY_SYM = 766,
    MASTER_SSL_SYM = 767,
    MASTER_SYM = 768,
    MASTER_USER_SYM = 769,
    MASTER_USE_GTID_SYM = 770,
    MASTER_HEARTBEAT_PERIOD_SYM = 771,
    MAX_CONNECTIONS_PER_HOUR = 772,
    MAX_QUERIES_PER_HOUR = 773,
    MAX_ROWS = 774,
    MAX_SIZE_SYM = 775,
    MAX_UPDATES_PER_HOUR = 776,
    MAX_STATEMENT_TIME_SYM = 777,
    MAX_USER_CONNECTIONS_SYM = 778,
    MEDIUM_SYM = 779,
    MEMORY_SYM = 780,
    MERGE_SYM = 781,
    MESSAGE_TEXT_SYM = 782,
    MICROSECOND_SYM = 783,
    MIGRATE_SYM = 784,
    MINUTE_SYM = 785,
    MINVALUE_SYM = 786,
    MIN_ROWS = 787,
    MODE_SYM = 788,
    MODIFY_SYM = 789,
    MONTH_SYM = 790,
    MULTILINESTRING = 791,
    MULTIPOINT = 792,
    MULTIPOLYGON = 793,
    MUTEX_SYM = 794,
    MYSQL_SYM = 795,
    MYSQL_ERRNO_SYM = 796,
    NAMES_SYM = 797,
    NAME_SYM = 798,
    NATIONAL_SYM = 799,
    NCHAR_SYM = 800,
    NEW_SYM = 801,
    NEXT_SYM = 802,
    NEXTVAL_SYM = 803,
    NOCACHE_SYM = 804,
    NOCYCLE_SYM = 805,
    NODEGROUP_SYM = 806,
    NONE_SYM = 807,
    NOTFOUND_SYM = 808,
    NO_SYM = 809,
    NOMAXVALUE_SYM = 810,
    NOMINVALUE_SYM = 811,
    NO_WAIT_SYM = 812,
    NOWAIT_SYM = 813,
    NUMBER_MARIADB_SYM = 814,
    NUMBER_ORACLE_SYM = 815,
    NVARCHAR_SYM = 816,
    OF_SYM = 817,
    OFFSET_SYM = 818,
    OLD_PASSWORD_SYM = 819,
    ONE_SYM = 820,
    ONLY_SYM = 821,
    ONLINE_SYM = 822,
    OPEN_SYM = 823,
    OPTIONS_SYM = 824,
    OPTION = 825,
    OWNER_SYM = 826,
    PACK_KEYS_SYM = 827,
    PAGE_SYM = 828,
    PARSER_SYM = 829,
    PARTIAL = 830,
    PARTITIONS_SYM = 831,
    PARTITIONING_SYM = 832,
    PASSWORD_SYM = 833,
    PERIOD_SYM = 834,
    PERSISTENT_SYM = 835,
    PHASE_SYM = 836,
    PLUGINS_SYM = 837,
    PLUGIN_SYM = 838,
    POINT_SYM = 839,
    POLYGON = 840,
    PORT_SYM = 841,
    PRECEDES_SYM = 842,
    PRECEDING_SYM = 843,
    PREPARE_SYM = 844,
    PRESERVE_SYM = 845,
    PREV_SYM = 846,
    PREVIOUS_SYM = 847,
    PRIVILEGES = 848,
    PROCESS = 849,
    PROCESSLIST_SYM = 850,
    PROFILE_SYM = 851,
    PROFILES_SYM = 852,
    PROXY_SYM = 853,
    QUARTER_SYM = 854,
    QUERY_SYM = 855,
    QUICK = 856,
    RAW_MARIADB_SYM = 857,
    RAW_ORACLE_SYM = 858,
    READ_ONLY_SYM = 859,
    REBUILD_SYM = 860,
    RECOVER_SYM = 861,
    REDOFILE_SYM = 862,
    REDO_BUFFER_SIZE_SYM = 863,
    REDUNDANT_SYM = 864,
    RELAY = 865,
    RELAYLOG_SYM = 866,
    RELAY_LOG_FILE_SYM = 867,
    RELAY_LOG_POS_SYM = 868,
    RELAY_THREAD = 869,
    RELOAD = 870,
    REMOVE_SYM = 871,
    REORGANIZE_SYM = 872,
    REPAIR = 873,
    REPEATABLE_SYM = 874,
    REPLICATION = 875,
    RESET_SYM = 876,
    RESTART_SYM = 877,
    RESOURCES = 878,
    RESTORE_SYM = 879,
    RESUME_SYM = 880,
    RETURNED_SQLSTATE_SYM = 881,
    RETURNS_SYM = 882,
    REUSE_SYM = 883,
    REVERSE_SYM = 884,
    ROLE_SYM = 885,
    ROLLBACK_SYM = 886,
    ROLLUP_SYM = 887,
    ROUTINE_SYM = 888,
    ROWCOUNT_SYM = 889,
    ROW_SYM = 890,
    ROW_COUNT_SYM = 891,
    ROW_FORMAT_SYM = 892,
    RTREE_SYM = 893,
    SAVEPOINT_SYM = 894,
    SCHEDULE_SYM = 895,
    SCHEMA_NAME_SYM = 896,
    SECOND_SYM = 897,
    SECURITY_SYM = 898,
    SEQUENCE_SYM = 899,
    SERIALIZABLE_SYM = 900,
    SERIAL_SYM = 901,
    SESSION_SYM = 902,
    SERVER_SYM = 903,
    SETVAL_SYM = 904,
    SHARE_SYM = 905,
    SHUTDOWN = 906,
    SIGNED_SYM = 907,
    SIMPLE_SYM = 908,
    SLAVE = 909,
    SLAVES = 910,
    SLAVE_POS_SYM = 911,
    SLOW = 912,
    SNAPSHOT_SYM = 913,
    SOCKET_SYM = 914,
    SOFT_SYM = 915,
    SONAME_SYM = 916,
    SOUNDS_SYM = 917,
    SOURCE_SYM = 918,
    SQL_BUFFER_RESULT = 919,
    SQL_CACHE_SYM = 920,
    SQL_CALC_FOUND_ROWS = 921,
    SQL_NO_CACHE_SYM = 922,
    SQL_THREAD = 923,
    STARTS_SYM = 924,
    START_SYM = 925,
    STATEMENT_SYM = 926,
    STATUS_SYM = 927,
    STOP_SYM = 928,
    STORAGE_SYM = 929,
    STORED_SYM = 930,
    STRING_SYM = 931,
    SUBCLASS_ORIGIN_SYM = 932,
    SUBDATE_SYM = 933,
    SUBJECT_SYM = 934,
    SUBPARTITIONS_SYM = 935,
    SUBPARTITION_SYM = 936,
    SUPER_SYM = 937,
    SUSPEND_SYM = 938,
    SWAPS_SYM = 939,
    SWITCHES_SYM = 940,
    SYSTEM = 941,
    SYSTEM_TIME_SYM = 942,
    TABLES = 943,
    TABLESPACE = 944,
    TABLE_CHECKSUM_SYM = 945,
    TABLE_NAME_SYM = 946,
    TEMPORARY = 947,
    TEMPTABLE_SYM = 948,
    TEXT_SYM = 949,
    THAN_SYM = 950,
    TIES_SYM = 951,
    TIMESTAMP = 952,
    TIMESTAMP_ADD = 953,
    TIMESTAMP_DIFF = 954,
    TIME_SYM = 955,
    TRANSACTION_SYM = 956,
    TRANSACTIONAL_SYM = 957,
    TRIGGERS_SYM = 958,
    TRIM_ORACLE = 959,
    TRUNCATE_SYM = 960,
    TYPES_SYM = 961,
    TYPE_SYM = 962,
    UDF_RETURNS_SYM = 963,
    UNBOUNDED_SYM = 964,
    UNCOMMITTED_SYM = 965,
    UNDEFINED_SYM = 966,
    UNDOFILE_SYM = 967,
    UNDO_BUFFER_SIZE_SYM = 968,
    UNICODE_SYM = 969,
    UNINSTALL_SYM = 970,
    UNKNOWN_SYM = 971,
    UNTIL_SYM = 972,
    UPGRADE_SYM = 973,
    USER_SYM = 974,
    USE_FRM = 975,
    VALUE_SYM = 976,
    VARCHAR2_MARIADB_SYM = 977,
    VARCHAR2_ORACLE_SYM = 978,
    VARIABLES = 979,
    VERSIONING_SYM = 980,
    VIA_SYM = 981,
    VIEW_SYM = 982,
    VIRTUAL_SYM = 983,
    WAIT_SYM = 984,
    WARNINGS = 985,
    WEEK_SYM = 986,
    WEIGHT_STRING_SYM = 987,
    WINDOW_SYM = 988,
    WITHIN = 989,
    WITHOUT = 990,
    WORK_SYM = 991,
    WRAPPER_SYM = 992,
    WRITE_SYM = 993,
    X509_SYM = 994,
    XA_SYM = 995,
    XML_SYM = 996,
    YEAR_SYM = 997,
    PREC_BELOW_ESCAPE = 998,
    CONDITIONLESS_JOIN = 999,
    ON_SYM = 1000,
    PREC_BELOW_NOT = 1001,
    PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE = 1002,
    USER = 1003,
    PREC_BELOW_CONTRACTION_TOKEN2 = 1004
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 164 "/home/buildbot/git/sql/sql_yacc_ora.yy" /* yacc.c:1909  */

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

#line 913 "/home/buildbot/git/mkdist/sql/sql_yacc_ora.hh" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int ORAparse (THD *thd);

#endif /* !YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_ORA_HH_INCLUDED  */
