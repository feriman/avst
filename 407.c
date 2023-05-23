#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "Usage: %s \"some text\"\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	const char *str = argv[1];
	int ws = 0;
	while (*str) {
		if (isspace(*str++)) {
			++ws;
		}
	}
	printf("Whitespace count: %d\n", ws);
}

