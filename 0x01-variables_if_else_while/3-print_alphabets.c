#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char x = 'a';
	char y = 'A';

	/* your code goes there */
	for (x = 'a'; x <= 'z'; x++)
	putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
	putchar(y);
	putchar('\n');
	return (0);
}
