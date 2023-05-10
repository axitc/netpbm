#include <stdio.h>

#define FORMAT	1
#define WIDTH	500
#define LENGTH	1000

main()
{
	printf("P%d\n", FORMAT);
	printf("%d %d\n", WIDTH, LENGTH);

	for (int i = 0; i < LENGTH; ++i)
		for (int j = 0; j < WIDTH; ++j) {
			if (i%2 == 0)
				putchar('0');
			else
				putchar('1');
		}
	return 0;
}
