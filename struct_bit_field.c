#include <stdio.h>

struct Flags
{
	unsigned int a : 1;
	unsigned int b : 3;
	unsigned int c : 7;
};

int		main(void)
{
	struct Flags f1;

	f1.a = 1;
	f1.b = 15;
	f1.c = 255;

	printf("%u\n", f1.a);
	printf("%u\n", f1.b);
	printf("%u\n", f1.c);
	printf("%d", (int)sizeof(struct Flags));		// 4: member is unsigned int
	return (0);
}
