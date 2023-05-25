#include <stdio.h>

int
put_sum(int *a, int *b, int *c)
{
	int r;
	r = *a + *b + *c;
	*a = *b = *c = r;
	return r;
}

int
main(void)
{
	int a, b, c, i;
	a = 1, b = 2, c = 3, i = 0;

	i = put_sum(&a, &b, &c);
	printf("a = %d, b = %d, c = %d, i = %d\n", a, b, c, i);
}

