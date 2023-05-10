#include <stdio.h>

#define FORMAT	1
#define WIDTH	100
#define LENGTH	100

#define M	0.6
#define C	18.6

main()
{
	printf("P%d\n", FORMAT);
	printf("%d %d\n", WIDTH, LENGTH);

	int iblackat;
	for (int i = 0; i < LENGTH; ++i)
		for (int j = 0; j < WIDTH; ++j) {
			if (i == (int)(j*M + C))
				iblackat = j;
			if (j == iblackat)
				putchar('1');
			else
				putchar('0');
		}
	putchar('\n');
	return 0;
}
