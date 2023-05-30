/* Print all ip subnets of a given IPv4 address. */

#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>

int
main(int argc, char *argv[])
{
	const int NBITS = 32;
	in_addr_t addr;
	char      addr_str[INET_ADDRSTRLEN];
	int       i;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <xxx.xxx.xxx.xxx>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if (inet_pton(AF_INET, argv[1], &addr) != 1) {
		fprintf(stderr, "IPv4 address incorrect.\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < NBITS; i++) {
		addr = ntohl(addr);
		addr >>= i;
		addr <<= i;
		addr = ntohl(addr);
		inet_ntop(AF_INET, &addr, addr_str, INET_ADDRSTRLEN);
		printf("%s/%u\n", addr_str, NBITS - i);
	}
	addr = 0;
	inet_ntop(AF_INET, &addr, addr_str, INET_ADDRSTRLEN);
	printf("%s/%u\n", addr_str, NBITS - i);

	exit(EXIT_SUCCESS);
}

