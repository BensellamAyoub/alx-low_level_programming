#include "main.h"
void reset_to_98(int *n)
{
	int n = 98 ;

	*n = &n;
	*n = 98;
}
