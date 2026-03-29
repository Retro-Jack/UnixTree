/* ALL EDITS WILL BE LOST - This is a generated file. */

#ifndef CMDS_H
#define CMDS_H

/* Commands */

/* function key commands that don't change */

#define CMDS_NULL               	0

#define CMDS_RETURN             	1
#define CMDS_ESCAPE             	2
#define CMDS_INSERT             	3

#define CMDS_SHELL_ESCAPE       	4
#define CMDS_REFRESH_SCREEN     	5
#define CMDS_CREDITS            	6
#define CMDS_RUN_STATS          	7
#define CMDS_PRINT_SCREEN       	8
#define CMDS_CLONE              	9

#define CMDS_HELP               	10
#define CMDS_TAG_MENU_1         	11
#define CMDS_TAG_MENU_2         	12
#define CMDS_ALT_MENU_1         	13
#define CMDS_ALT_MENU_2         	14
#define CMDS_DEST_DIR           	15
#define CMDS_AUTOVIEW           	16
#define CMDS_SPLIT_SCREEN       	17
#define CMDS_TOGGLE_SPLIT       	18
#define CMDS_INFO               	19

/* common commands used in many menus */

#define CMDS_COMMON_ATTRS       	20
#define CMDS_COMMON_COPY        	21
#define CMDS_COMMON_DELETE      	22
#define CMDS_COMMON_DIFF        	23
#define CMDS_COMMON_DIRDISP     	24
#define CMDS_COMMON_EDIT        	25
#define CMDS_COMMON_FILEDISP    	26
#define CMDS_COMMON_FILESPEC    	27
#define CMDS_COMMON_GOTO1       	28
#define CMDS_COMMON_GOTO2       	29
#define CMDS_COMMON_INVERT      	30
#define CMDS_COMMON_NODE        	31
#define CMDS_COMMON_PRINT       	32
#define CMDS_COMMON_QUIT        	33
#define CMDS_COMMON_RENAME      	34
#define CMDS_COMMON_TAG         	35
#define CMDS_COMMON_UNTAG       	36
#define CMDS_COMMON_VIEW        	37
#define CMDS_COMMON_EXEC        	38
#define CMDS_COMMON_MOUSEPOS    	39
#define CMDS_COMMON_TOGGLE_DIRDISP	40

#define CMDS_COMMON_NEXT_NODE_1 	41
#define CMDS_COMMON_NEXT_NODE_2 	42
#define CMDS_COMMON_PREV_NODE_1 	43
#define CMDS_COMMON_PREV_NODE_2 	44

/* directory commands - used in dircmd2.c & dest.c */

#define CMDS_REG_DIR_COMPARE    	45
#define CMDS_REG_DIR_GLOBAL     	46
#define CMDS_REG_DIR_LINK       	47
#define CMDS_REG_DIR_MKDIR      	48
#define CMDS_REG_DIR_SHOWALL    	49
#define CMDS_REG_DIR_AVAILABLE  	50
#define CMDS_REG_DIR_RELOG      	51
#define CMDS_REG_DIR_LOG_RECURS 	52
#define CMDS_REG_DIR_UNLOG      	53
#define CMDS_REG_DIR_HIDE       	54
#define CMDS_REG_DIR_SHOW       	55
#define CMDS_REG_DIR_MENU       	56
#define CMDS_REG_DIR_TREESPEC   	57

#define CMDS_TAG_DIR_GLOBAL     	58
#define CMDS_TAG_DIR_SHOWALL    	59

#define CMDS_ALT_DIR_COMPACT    	60
#define CMDS_ALT_DIR_GRAFT      	61
#define CMDS_ALT_DIR_PRUNE      	62
#define CMDS_ALT_DIR_RELEASE    	63
#define CMDS_ALT_DIR_SORT       	64
#define CMDS_ALT_DIR_HIDE       	65
#define CMDS_ALT_DIR_SHOW       	66
#define CMDS_ALT_DIR_CONFIG     	67

/* file commands - used in filecmd2.c */

#define CMDS_REG_FILE_BACKUP    	68
#define CMDS_REG_FILE_EXTRACT   	69
#define CMDS_REG_FILE_LINK      	70
#define CMDS_REG_FILE_MOVE      	71
#define CMDS_REG_FILE_OPEN      	72
#define CMDS_REG_FILE_RESTORE   	73
#define CMDS_REG_FILE_ARCLIST   	74
#define CMDS_REG_FILE_MENU      	75

#define CMDS_TAG_FILE_BACKUP    	76
#define CMDS_TAG_FILE_BATCH     	77
#define CMDS_TAG_FILE_EXTRACT   	78
#define CMDS_TAG_FILE_LINK      	79
#define CMDS_TAG_FILE_MOVE      	80
#define CMDS_TAG_FILE_COMPARE   	81
#define CMDS_TAG_FILE_SEARCH    	82

#define CMDS_ALT_FILE_LINK      	83
#define CMDS_ALT_FILE_RELEASE   	84
#define CMDS_ALT_FILE_SORT      	85
#define CMDS_ALT_FILE_WHAT      	86
#define CMDS_ALT_FILE_RELOG     	87
#define CMDS_ALT_FILE_COMPRESS  	88
#define CMDS_ALT_FILE_COPYTAGS  	89
#define CMDS_ALT_FILE_RESOLVE   	90
#define CMDS_ALT_FILE_DOS_UNIX  	91
#define CMDS_ALT_FILE_UNIX_DOS  	92

/* view commands - used in avcmds.c */

#define CMDS_VIEW_SRCH_FWD      	93
#define CMDS_VIEW_SRCH_BCK      	94
#define CMDS_VIEW_HEXEDIT       	95
#define CMDS_VIEW_SRCH_PREV     	96
#define CMDS_VIEW_SRCH_PREV2    	97
#define CMDS_VIEW_SRCH_NEXT     	98
#define CMDS_VIEW_SRCH_NEXT2    	99
#define CMDS_VIEW_WINDOW        	100

#define CMDS_VIEW_NEXTFILE      	101
#define CMDS_VIEW_PREVFILE      	102

/* window display commands */

#define CMDS_WIN_ASCII          	103
#define CMDS_WIN_DUMP           	104
#define CMDS_WIN_HEX            	105
#define CMDS_WIN_KEEP           	106
#define CMDS_WIN_MASK           	107
#define CMDS_WIN_WRAP           	108
#define CMDS_WIN_TABWIDTH       	109

/* attr.c */

#define CMDS_ATTR_PERMS         	110
#define CMDS_ATTR_OWNER         	111
#define CMDS_ATTR_GROUP         	112
#define CMDS_ATTR_DATE          	113
#define CMDS_ATTR_COPYFILE      	114

/* tagfile.c */

#define CMDS_TAG_INODE          	115
#define CMDS_TAG_LINKS          	116
#define CMDS_TAG_SIZE           	117
#define CMDS_TAG_PERMS          	118
#define CMDS_TAG_OWNER          	119
#define CMDS_TAG_GROUP          	120
#define CMDS_TAG_DATE           	121
#define CMDS_TAG_NODE           	122
#define CMDS_TAG_TYPE           	123
#define CMDS_TAG_COPYFILE       	124

#define CMDS_TAG_TYPE_BLK       	125
#define CMDS_TAG_TYPE_CHR       	126
#define CMDS_TAG_TYPE_DOOR      	127
#define CMDS_TAG_TYPE_FIFO      	128
#define CMDS_TAG_TYPE_NAME      	129
#define CMDS_TAG_TYPE_LINK      	130
#define CMDS_TAG_TYPE_SOCK      	131
#define CMDS_TAG_TYPE_REG       	132
#define CMDS_TAG_TYPE_UNKLINK   	133

#define CMDS_LESS_THAN          	134
#define CMDS_GREATER_THAN       	135
#define CMDS_EQUAL              	136

/* newnode.c */

#define CMDS_NODE_RELOG         	137
#define CMDS_NODE_NEW           	138
#define CMDS_NODE_ARCHIVE       	139
#define CMDS_NODE_FTP           	140
#define CMDS_NODE_SAVE          	141
#define CMDS_NODE_LOAD          	142

/* print.c */

#define CMDS_PRINT_PATH         	143
#define CMDS_PRINT_TREE         	144
#define CMDS_PRINT_CAT          	145

/* compare.c default.c sort.c */

#define CMDS_SORT_DATE          	146
#define CMDS_SORT_EXT           	147
#define CMDS_SORT_NAME          	148
#define CMDS_SORT_INODE         	149
#define CMDS_SORT_LINKS         	150
#define CMDS_SORT_SIZE          	151
#define CMDS_SORT_UNSORTED      	152
#define CMDS_SORT_PATH          	153
#define CMDS_SORT_ORDER         	154
#define CMDS_SORT_ASC           	155
#define CMDS_SORT_DESC          	156

/* backup.c bang.c */

#define CMDS_YUP1               	157
#define CMDS_YUP2               	158
#define CMDS_NOPE1              	159
#define CMDS_NOPE2              	160
#define CMDS_APPEND             	161

/* backup.c arcutils.c */

#define CMDS_ARCH_ABS           	162
#define CMDS_ARCH_REL           	163
#define CMDS_ARCH_TAR           	164
#define CMDS_ARCH_BAR           	165
#define CMDS_ARCH_CPIO          	166
#define CMDS_ARCH_ZTAR          	167
#define CMDS_ARCH_ZIP           	168

/* cmp.c */

#define CMDS_CMP_IDENTICAL      	169
#define CMDS_CMP_UNIQUE         	170
#define CMDS_CMP_NEWER          	171
#define CMDS_CMP_OLDER          	172
#define CMDS_CMP_SAME           	173
#define CMDS_CMP_DIFFERENT      	174

/* copy.c */

#define CMDS_LINK_HARD          	175
#define CMDS_LINK_SOFT          	176
#define CMDS_LINK_ABS           	177
#define CMDS_LINK_REL           	178

/* help.c */

#define CMDS_HELP_INDEX         	179
#define CMDS_HELP_NEXT          	180
#define CMDS_HELP_PREV          	181
#define CMDS_HELP_LINK_FWD      	182
#define CMDS_HELP_LINK_BCK      	183

/* config.c */

#define CMDS_CONFIG_RESTORE     	184
#define CMDS_CONFIG_DEFAULT     	185
#define CMDS_CONFIG_VAL_UP      	186
#define CMDS_CONFIG_VAL_DN      	187
#define CMDS_CONFIG_BG_UP       	188
#define CMDS_CONFIG_BG_DN       	189
#define CMDS_CONFIG_MAIN        	190
#define CMDS_CONFIG_NEXT        	191
#define CMDS_CONFIG_PREV        	192

/* menu.c */

#define CMDS_MENU_RUN           	193
#define CMDS_MENU_COLLAPSE      	194
#define CMDS_MENU_RESTORE       	195
#define CMDS_MENU_COLLAPSE_ALL  	196
#define CMDS_MENU_RESTORE_ALL   	197
#define CMDS_MENU_TOGGLE_TREE   	198

/* xgmenu.c xgetstr.c */

#define CMDS_XGETSTR_KEEP       	199
#define CMDS_XGETSTR_PASTE      	200
#define CMDS_XGETSTR_DEFAULT    	201

/* diffcmds.c */

#define CMDS_DIFF_TOGGLE_NUM    	202
#define CMDS_DIFF_TOGGLE_COM    	203
#define CMDS_DIFF_EDIT_BOTH     	204
#define CMDS_DIFF_EDIT_LEFT     	205
#define CMDS_DIFF_EDIT_RIGHT    	206
#define CMDS_DIFF_VIEW_LEFT     	207
#define CMDS_DIFF_VIEW_RIGHT    	208
#define CMDS_DIFF_NEXT_DIFF_1   	209
#define CMDS_DIFF_NEXT_DIFF_2   	210
#define CMDS_DIFF_PREV_DIFF_1   	211
#define CMDS_DIFF_PREV_DIFF_2   	212
#define CMDS_DIFF_REPORT        	213

#define CMDS_DIFF_PRINT_FILE    	214
#define CMDS_DIFF_PRINT_PRINTER 	215
#define CMDS_DIFF_PRINT_SIDE    	216
#define CMDS_DIFF_PRINT_DIFF    	217

/* search.c */

#define CMDS_SEARCH_IGNORE_CASE 	218

/* hexcmds.c */

#define CMDS_HEXEDIT_TOGGLE     	219
#define CMDS_HEXEDIT_UNDO       	220
#define CMDS_HEXEDIT_MASK       	221

#define NUM_CMDS	222

#endif /* CMDS_H */
