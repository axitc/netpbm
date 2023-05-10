#include <stdio.h>

#define FORMAT	"P1"
#define WIDTH	50
#define	HEIGHT	50

main()
{
	printf("%s\n", FORMAT);
	printf("%d %d\n", WIDTH, HEIGHT);
	
	for (int i = 0; i < HEIGHT; ++i) {
		for (int j = 0; j < WIDTH; ++j) {
			if ((i+j)%2 == 0) {
				putchar('0');
				putchar(' ');
			}
			else {
				putchar('1');
				putchar(' ');
			}
		}
		putchar('\n');
	}

	return 0;
}
