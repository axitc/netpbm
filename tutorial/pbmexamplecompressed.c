#include <stdio.h>

#define FORMAT	"P1"
#define WIDTH	50
#define	HEIGHT	50

main()
{
	printf("%s ", FORMAT);
	printf("%d %d ", WIDTH, HEIGHT);
	
	for (int i = 0; i < HEIGHT; ++i) {
		for (int j = 0; j < WIDTH; ++j) {
			if ((i+j)%2 == 0) {
				putchar('0');
			}
			else {
				putchar('1');
			}
		}
	}
	putchar('\n');
	return 0;
}
