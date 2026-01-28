#
#include "../h/rt_defs.h"
#include "../h/rt_types.h"

#define NULL 0
/* performs unchecked deallocation */

deallocate (tup)
	register char *tup;
{
	tup = tup - TADDRSIZE;	/* ???? */
	if (XD_TUP (tup) -> some_flag)
	   free ((char *) XD_TUP (tup) -> descr);

	free ((char *) tup);
	tup = (char *)NULL;
}
