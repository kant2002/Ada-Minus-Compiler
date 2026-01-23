#include "../h/unix.h"
#include <stdio.h>

#ifdef VAX
int yyline;
#endif VAX

yyerror(s)
register char *s;
{
	fprintf (stderr, s);
	_cleanup ();
	return 1;
}
