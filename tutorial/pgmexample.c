#include <stdio.h>

#define FORMAT	"P2"
#define WIDTH	50
#define	HEIGHT	50
#define SHADES	10

main()
{
	printf("%s\n", FORMAT);
	printf("%d %d\n", WIDTH, HEIGHT);
	printf("%d\n", SHADES);
	
	for (int i = 0; i < HEIGHT; ++i)
		for (int j = 0; j < WIDTH; ++j)
			printf("%d ",(i+j)/10);
		putchar('\n');
	return 0;
}
