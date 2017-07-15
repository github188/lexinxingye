#include "stdio.h"

#define __msg(...)    		(printf("MSG:L%d(%s):", __LINE__, __FILE__),  printf(__VA_ARGS__))

int main(int argc, char **argv)
{
	__msg("Hello world!\n");
	return 0;
}
