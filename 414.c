#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void
rmspaces(char *str)
{
	char *to;
	to = str;

	for(;;) {
		if (isspace(*str)) {
			++str;
		} else {
			*to = *str;
			if (*to == '\0') {
				break;
			} else {
				++to;
				++str;
			}
		}
	}
}

int
main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "Usage: %s \"some text\"\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	char *str;
	size_t size;

	size = strlen(argv[1]) + 1;
	str = malloc(sizeof(*str) * size);
	if (str == NULL) {
		fprintf(stderr, "malloc()\n");
	}
	strcpy(str, argv[1]);

	rmspaces(str);
	printf("%s\n", str);

	free(str);
}

