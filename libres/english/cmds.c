/* ALL EDITS WILL BE LOST - This is a generated file. */

#include "curses.h"

const int    res_cmds_tbl[] =
{
/* Commands */

/* function key commands that don't change */

	0,	/* CMDS_NULL */

	KEY_RETURN,	/* CMDS_RETURN */
	KEY_ESCAPE,	/* CMDS_ESCAPE */
	KEY_INSERT,	/* CMDS_INSERT */

	'!',	/* CMDS_SHELL_ESCAPE */
	'@',	/* CMDS_REFRESH_SCREEN */
	'#',	/* CMDS_CREDITS */
	'$',	/* CMDS_RUN_STATS */
	'%',	/* CMDS_PRINT_SCREEN */
	'&',	/* CMDS_CLONE */

	KEY_F1,	/* CMDS_HELP */
	KEY_F3,	/* CMDS_TAG_MENU_1 */
	'[',	/* CMDS_TAG_MENU_2 */
	KEY_F4,	/* CMDS_ALT_MENU_1 */
	']',	/* CMDS_ALT_MENU_2 */
	KEY_F2,	/* CMDS_DEST_DIR */
	KEY_F7,	/* CMDS_AUTOVIEW */
	KEY_F8,	/* CMDS_SPLIT_SCREEN */
	KEY_TAB,	/* CMDS_TOGGLE_SPLIT */
	'?',	/* CMDS_INFO */

/* common commands used in many menus */

	'a',	/* CMDS_COMMON_ATTRS */
	'c',	/* CMDS_COMMON_COPY */
	'd',	/* CMDS_COMMON_DELETE */
	'j',	/* CMDS_COMMON_DIFF */
	'd',	/* CMDS_COMMON_DIRDISP */
	'e',	/* CMDS_COMMON_EDIT */
	'f',	/* CMDS_COMMON_FILEDISP */
	'f',	/* CMDS_COMMON_FILESPEC */
	'g',	/* CMDS_COMMON_GOTO1 */
	'/',	/* CMDS_COMMON_GOTO2 */
	'i',	/* CMDS_COMMON_INVERT */
	'n',	/* CMDS_COMMON_NODE */
	'p',	/* CMDS_COMMON_PRINT */
	'q',	/* CMDS_COMMON_QUIT */
	'r',	/* CMDS_COMMON_RENAME */
	't',	/* CMDS_COMMON_TAG */
	'u',	/* CMDS_COMMON_UNTAG */
	'v',	/* CMDS_COMMON_VIEW */
	'x',	/* CMDS_COMMON_EXEC */
	'^',	/* CMDS_COMMON_MOUSEPOS */
	'~',	/* CMDS_COMMON_TOGGLE_DIRDISP */

	'>',	/* CMDS_COMMON_NEXT_NODE_1 */
	'.',	/* CMDS_COMMON_NEXT_NODE_2 */
	'<',	/* CMDS_COMMON_PREV_NODE_1 */
	',',	/* CMDS_COMMON_PREV_NODE_2 */

/* directory commands - used in dircmd2.c & dest.c */

	'c',	/* CMDS_REG_DIR_COMPARE */
	'g',	/* CMDS_REG_DIR_GLOBAL */
	'l',	/* CMDS_REG_DIR_LINK */
	'm',	/* CMDS_REG_DIR_MKDIR */
	's',	/* CMDS_REG_DIR_SHOWALL */
	'v',	/* CMDS_REG_DIR_AVAILABLE */
	'+',	/* CMDS_REG_DIR_RELOG */
	'*',	/* CMDS_REG_DIR_LOG_RECURS */
	'-',	/* CMDS_REG_DIR_UNLOG */
	KEY_F5,	/* CMDS_REG_DIR_HIDE */
	KEY_F6,	/* CMDS_REG_DIR_SHOW */
	KEY_F9,	/* CMDS_REG_DIR_MENU */
	'\\',	/* CMDS_REG_DIR_TREESPEC */

	'g',	/* CMDS_TAG_DIR_GLOBAL */
	's',	/* CMDS_TAG_DIR_SHOWALL */

	'c',	/* CMDS_ALT_DIR_COMPACT */
	'g',	/* CMDS_ALT_DIR_GRAFT */
	'p',	/* CMDS_ALT_DIR_PRUNE */
	'r',	/* CMDS_ALT_DIR_RELEASE */
	's',	/* CMDS_ALT_DIR_SORT */
	KEY_F5,	/* CMDS_ALT_DIR_HIDE */
	KEY_F6,	/* CMDS_ALT_DIR_SHOW */
	KEY_F10,	/* CMDS_ALT_DIR_CONFIG */

/* file commands - used in filecmd2.c */

	'b',	/* CMDS_REG_FILE_BACKUP */
	'e',	/* CMDS_REG_FILE_EXTRACT */
	'l',	/* CMDS_REG_FILE_LINK */
	'm',	/* CMDS_REG_FILE_MOVE */
	'o',	/* CMDS_REG_FILE_OPEN */
	's',	/* CMDS_REG_FILE_RESTORE */
	KEY_F2,	/* CMDS_REG_FILE_ARCLIST */
	KEY_F9,	/* CMDS_REG_FILE_MENU */

	'b',	/* CMDS_TAG_FILE_BACKUP */
	'e',	/* CMDS_TAG_FILE_BATCH */
	'e',	/* CMDS_TAG_FILE_EXTRACT */
	'l',	/* CMDS_TAG_FILE_LINK */
	'm',	/* CMDS_TAG_FILE_MOVE */
	'o',	/* CMDS_TAG_FILE_COMPARE */
	's',	/* CMDS_TAG_FILE_SEARCH */

	'l',	/* CMDS_ALT_FILE_LINK */
	'r',	/* CMDS_ALT_FILE_RELEASE */
	's',	/* CMDS_ALT_FILE_SORT */
	'w',	/* CMDS_ALT_FILE_WHAT */
	KEY_F2,	/* CMDS_ALT_FILE_RELOG */
	KEY_F5,	/* CMDS_ALT_FILE_COMPRESS */
	KEY_F6,	/* CMDS_ALT_FILE_COPYTAGS */
	KEY_F10,	/* CMDS_ALT_FILE_RESOLVE */
	KEY_F11,	/* CMDS_ALT_FILE_DOS_UNIX */
	KEY_F12,	/* CMDS_ALT_FILE_UNIX_DOS */

/* view commands - used in avcmds.c */

	's',	/* CMDS_VIEW_SRCH_FWD */
	'b',	/* CMDS_VIEW_SRCH_BCK */
	'h',	/* CMDS_VIEW_HEXEDIT */
	KEY_F9,	/* CMDS_VIEW_SRCH_PREV */
	'.',	/* CMDS_VIEW_SRCH_PREV2 */
	KEY_F10,	/* CMDS_VIEW_SRCH_NEXT */
	'/',	/* CMDS_VIEW_SRCH_NEXT2 */
	'w',	/* CMDS_VIEW_WINDOW */

	KEY_F6,	/* CMDS_VIEW_NEXTFILE */
	KEY_F5,	/* CMDS_VIEW_PREVFILE */

/* window display commands */

	'a',	/* CMDS_WIN_ASCII */
	'd',	/* CMDS_WIN_DUMP */
	'h',	/* CMDS_WIN_HEX */
	'k',	/* CMDS_WIN_KEEP */
	'm',	/* CMDS_WIN_MASK */
	'w',	/* CMDS_WIN_WRAP */
	'z',	/* CMDS_WIN_TABWIDTH */

/* attr.c */

	'p',	/* CMDS_ATTR_PERMS */
	'o',	/* CMDS_ATTR_OWNER */
	'g',	/* CMDS_ATTR_GROUP */
	'd',	/* CMDS_ATTR_DATE */
	KEY_F2,	/* CMDS_ATTR_COPYFILE */

/* tagfile.c */

	'i',	/* CMDS_TAG_INODE */
	'l',	/* CMDS_TAG_LINKS */
	's',	/* CMDS_TAG_SIZE */
	'p',	/* CMDS_TAG_PERMS */
	'o',	/* CMDS_TAG_OWNER */
	'g',	/* CMDS_TAG_GROUP */
	'd',	/* CMDS_TAG_DATE */
	'n',	/* CMDS_TAG_NODE */
	't',	/* CMDS_TAG_TYPE */
	KEY_F2,	/* CMDS_TAG_COPYFILE */

	'b',	/* CMDS_TAG_TYPE_BLK */
	'c',	/* CMDS_TAG_TYPE_CHR */
	'd',	/* CMDS_TAG_TYPE_DOOR */
	'f',	/* CMDS_TAG_TYPE_FIFO */
	'n',	/* CMDS_TAG_TYPE_NAME */
	'l',	/* CMDS_TAG_TYPE_LINK */
	's',	/* CMDS_TAG_TYPE_SOCK */
	'r',	/* CMDS_TAG_TYPE_REG */
	'u',	/* CMDS_TAG_TYPE_UNKLINK */

	'<',	/* CMDS_LESS_THAN */
	'>',	/* CMDS_GREATER_THAN */
	'=',	/* CMDS_EQUAL */

/* newnode.c */

	'r',	/* CMDS_NODE_RELOG */
	'n',	/* CMDS_NODE_NEW */
	'a',	/* CMDS_NODE_ARCHIVE */
	'f',	/* CMDS_NODE_FTP */
	's',	/* CMDS_NODE_SAVE */
	'l',	/* CMDS_NODE_LOAD */

/* print.c */

	'p',	/* CMDS_PRINT_PATH */
	't',	/* CMDS_PRINT_TREE */
	'c',	/* CMDS_PRINT_CAT */

/* compare.c default.c sort.c */

	'd',	/* CMDS_SORT_DATE */
	'e',	/* CMDS_SORT_EXT */
	'n',	/* CMDS_SORT_NAME */
	'i',	/* CMDS_SORT_INODE */
	'l',	/* CMDS_SORT_LINKS */
	's',	/* CMDS_SORT_SIZE */
	'u',	/* CMDS_SORT_UNSORTED */
	'p',	/* CMDS_SORT_PATH */
	'o',	/* CMDS_SORT_ORDER */
	'a',	/* CMDS_SORT_ASC */
	'd',	/* CMDS_SORT_DESC */

/* backup.c bang.c */

	'y',	/* CMDS_YUP1 */
	'y',	/* CMDS_YUP2 */
	'n',	/* CMDS_NOPE1 */
	'n',	/* CMDS_NOPE2 */
	'a',	/* CMDS_APPEND */

/* backup.c arcutils.c */

	'a',	/* CMDS_ARCH_ABS */
	'r',	/* CMDS_ARCH_REL */
	't',	/* CMDS_ARCH_TAR */
	'b',	/* CMDS_ARCH_BAR */
	'c',	/* CMDS_ARCH_CPIO */
	'g',	/* CMDS_ARCH_ZTAR */
	'z',	/* CMDS_ARCH_ZIP */

/* cmp.c */

	'i',	/* CMDS_CMP_IDENTICAL */
	'u',	/* CMDS_CMP_UNIQUE */
	'n',	/* CMDS_CMP_NEWER */
	'o',	/* CMDS_CMP_OLDER */
	's',	/* CMDS_CMP_SAME */
	'd',	/* CMDS_CMP_DIFFERENT */

/* copy.c */

	'h',	/* CMDS_LINK_HARD */
	's',	/* CMDS_LINK_SOFT */
	'a',	/* CMDS_LINK_ABS */
	'r',	/* CMDS_LINK_REL */

/* help.c */

	'i',	/* CMDS_HELP_INDEX */
	'n',	/* CMDS_HELP_NEXT */
	'p',	/* CMDS_HELP_PREV */
	'f',	/* CMDS_HELP_LINK_FWD */
	'b',	/* CMDS_HELP_LINK_BCK */

/* config.c */

	KEY_F2,	/* CMDS_CONFIG_RESTORE */
	KEY_F3,	/* CMDS_CONFIG_DEFAULT */
	KEY_F5,	/* CMDS_CONFIG_VAL_UP */
	KEY_F6,	/* CMDS_CONFIG_VAL_DN */
	KEY_F7,	/* CMDS_CONFIG_BG_UP */
	KEY_F8,	/* CMDS_CONFIG_BG_DN */
	'm',	/* CMDS_CONFIG_MAIN */
	'n',	/* CMDS_CONFIG_NEXT */
	'p',	/* CMDS_CONFIG_PREV */

/* menu.c */

	'r',	/* CMDS_MENU_RUN */
	'-',	/* CMDS_MENU_COLLAPSE */
	'+',	/* CMDS_MENU_RESTORE */
	'\\',	/* CMDS_MENU_COLLAPSE_ALL */
	'*',	/* CMDS_MENU_RESTORE_ALL */
	't',	/* CMDS_MENU_TOGGLE_TREE */

/* xgmenu.c xgetstr.c */

	KEY_F10,	/* CMDS_XGETSTR_KEEP */
	KEY_F3,	/* CMDS_XGETSTR_PASTE */
	KEY_F4,	/* CMDS_XGETSTR_DEFAULT */

/* diffcmds.c */

	'l',	/* CMDS_DIFF_TOGGLE_NUM */
	'c',	/* CMDS_DIFF_TOGGLE_COM */
	KEY_F2,	/* CMDS_DIFF_EDIT_BOTH */
	KEY_F3,	/* CMDS_DIFF_EDIT_LEFT */
	KEY_F4,	/* CMDS_DIFF_EDIT_RIGHT */
	KEY_F5,	/* CMDS_DIFF_VIEW_LEFT */
	KEY_F6,	/* CMDS_DIFF_VIEW_RIGHT */
	'n',	/* CMDS_DIFF_NEXT_DIFF_1 */
	'+',	/* CMDS_DIFF_NEXT_DIFF_2 */
	'p',	/* CMDS_DIFF_PREV_DIFF_1 */
	'-',	/* CMDS_DIFF_PREV_DIFF_2 */
	'r',	/* CMDS_DIFF_REPORT */

	'f',	/* CMDS_DIFF_PRINT_FILE */
	'p',	/* CMDS_DIFF_PRINT_PRINTER */
	's',	/* CMDS_DIFF_PRINT_SIDE */
	'd',	/* CMDS_DIFF_PRINT_DIFF */

/* search.c */

	KEY_F9,	/* CMDS_SEARCH_IGNORE_CASE */

/* hexcmds.c */

	KEY_TAB,	/* CMDS_HEXEDIT_TOGGLE */
	KEY_F8,	/* CMDS_HEXEDIT_UNDO */
	KEY_F9,	/* CMDS_HEXEDIT_MASK */
	0
};
