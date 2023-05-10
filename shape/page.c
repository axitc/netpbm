/* i dont know how this happened */

#include <stdio.h>

#define FORMAT	1
#define WIDTH	400
#define LENGTH	600

main()
{
	char color = 0;

	printf("P%d\n", FORMAT);
	printf("%d %d\n", WIDTH, LENGTH);

	for (int i = 0; i < LENGTH; ++i)
		for (int j = 0; j < WIDTH; ++j) {
			if (i%10 == 0) {
				if (color == '1')
					color = '0';
				else
					color = '1';
			}
			putchar(color);
		}
	return 0;
}
