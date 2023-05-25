#include <stdio.h>

int
get_and_zero(int *p)
{
	int tmp = *p;
	*p = 0;
	return tmp;
}

int
main(void)
{
	int a, b;
	a = 42;
	b = get_and_zero(&a);
	printf("a = %d, b = %d\n", a, b);
}

