#include <stdio.h>

#define FORMAT	"P3"
#define WIDTH	50
#define	HEIGHT	50
#define COLORS	225

main()
{
	printf("%s\n", FORMAT);
	printf("%d %d\n", WIDTH, HEIGHT);
	printf("%d\n", COLORS);
	
	for (int i = 0; i < HEIGHT; ++i) {
		for (int j = 0; j < WIDTH; ++j) {
			printf("%d ",(i*i*225)/(WIDTH*HEIGHT));	/* R */
			printf("%d ",(j*j*225)/(WIDTH*HEIGHT));	/* G */
			printf("%d\n",(int)((i+j)*2.25));	/* B */
		}
	}

	return 0;
}
