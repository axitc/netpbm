#include <stdio.h>

#define FORMAT	1
#define WIDTH	400
#define LENGTH	400

#define P1X	20
#define P1Y	30
#define P2X	140
#define P2Y	330
#define P3X	280
#define P3Y	100

main()
{
	printf("P%d\n", FORMAT);
	printf("%d %d\n", WIDTH, LENGTH);

	for (int i = 0; i < LENGTH; ++i)
		for (int j = 0; j < WIDTH; ++j) {
		}
	return 0;
}
