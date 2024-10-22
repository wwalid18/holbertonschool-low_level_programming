#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n == 0)
{puts("%i is zero",n);
}
else if (n > 0)
{puts("%i is positive",n);
}
else
{puts("%i is negative",n);
}
return (0);
}
