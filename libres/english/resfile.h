/* ALL EDITS WILL BE LOST - This is a generated file. */

#ifndef RESFILE_H
#define RESFILE_H

#include "cmds.h"
#include "dflt.h"
#include "errs.h"
#include "msgs.h"
#include "pgmi.h"

#define RES_INDEX_CMDS	0
#define RES_INDEX_DFLT	1
#define RES_INDEX_ERRS	2
#define RES_INDEX_MSGS	3
#define RES_INDEX_PGMI	4

#define CMDS_LIST(rf)	( (int   *)((rf)->entries[RES_INDEX_CMDS].array) )
#define DFLT_LIST(rf)	( (char **)((rf)->entries[RES_INDEX_DFLT].array) )
#define ERRS_LIST(rf)	( (char **)((rf)->entries[RES_INDEX_ERRS].array) )
#define MSGS_LIST(rf)	( (char **)((rf)->entries[RES_INDEX_MSGS].array) )
#define PGMI_LIST(rf)	( (char **)((rf)->entries[RES_INDEX_PGMI].array) )

#define CMDS_ENTRY(rf,n)	( CMDS_LIST(rf)[n] )
#define DFLT_ENTRY(rf,n)	( DFLT_LIST(rf)[n] )
#define ERRS_ENTRY(rf,n)	( ERRS_LIST(rf)[n] )
#define MSGS_ENTRY(rf,n)	( MSGS_LIST(rf)[n] )
#define PGMI_ENTRY(rf,n)	( PGMI_LIST(rf)[n] )

#endif /* RESFILE_H */
