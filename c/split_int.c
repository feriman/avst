#include <stdio.h>

union
split_int {
	int integer;
	unsigned char bytes[sizeof(int)];
};

int
main(void)
{
	int i;
	union split_int si;

	printf("Enter an integer number: ");
	scanf("%d", &si.integer);
	for(i = 0; i < sizeof(int); i++) {
		printf("byte #%d is %02x\n", i, si.bytes[i]);
	}
}

