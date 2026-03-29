/* ALL EDITS WILL BE LOST - This is a generated file. */

#include "curses.h"
#include "res.h"

#include "cmds.h"
#include "dflt.h"
#include "errs.h"
#include "msgs.h"
#include "pgmi.h"

extern int    res_cmds_tbl[];
extern char * res_dflt_tbl[];
extern char * res_errs_tbl[];
extern char * res_msgs_tbl[];
extern char * res_pgmi_tbl[];

static const RES_ENTRY_DATA res_entries[] =
{
	{
		(void *)res_cmds_tbl,
		NUM_CMDS,
		R_TYPE_KEY,
		"cmds"
	},

	{
		(void *)res_dflt_tbl,
		NUM_DFLT,
		R_TYPE_STR,
		"dflt"
	},

	{
		(void *)res_errs_tbl,
		NUM_ERRS,
		R_TYPE_STR,
		"errs"
	},

	{
		(void *)res_msgs_tbl,
		NUM_MSGS,
		R_TYPE_STR,
		"msgs"
	},

	{
		(void *)res_pgmi_tbl,
		NUM_PGMI,
		R_TYPE_STR,
		"pgmi"
	}
};

const RES_FILE res_file =
{
	{
		RES_MAGIC,
		sizeof(res_entries) / sizeof(*res_entries),
		"Deutsch-builtin",
		"german"
	},
	0,
	0,
	(RES_ENTRY_DATA *)res_entries
};
