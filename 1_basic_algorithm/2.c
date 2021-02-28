#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int max4(int a, int b, int c, int d);

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	assert(max4(a, b, c, d) == d);
	assert(max4(b, c, d, a) == d);
	assert(max4(a, a, a, d) == d);
	assert(max4(a, c, b, d) == d);
	assert(max4(d, c, b, a) == d);
	assert(max4(b, b, b, d) == d);
	assert(max4(d, a, c, b) == d);
	assert(max4(d, c, c, c) == d);
	printf("test is done without unexpexted behaviour.");
	return EXIT_SUCCESS;
}
