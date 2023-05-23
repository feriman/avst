#include <stdio.h>

int main()
{
	const char* str = "Hello";

	printf("%3s", str);
	printf("%8s", str);
	printf("%-8s", str);
	printf("%3.4s", str);
	printf("%6.4s", str);
}

