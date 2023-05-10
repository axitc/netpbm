#include <stdio.h>

#define FORMAT	"P3"
#define WIDTH	50
#define	HEIGHT	50
#define COLORS	225

main()
{
	printf("%s ", FORMAT);
	printf("%d %d ", WIDTH, HEIGHT);
	printf("%d ", COLORS);
	
	for (int i = 0; i < HEIGHT; ++i) {
		for (int j = 0; j < WIDTH; ++j) {
			printf("%d ",(i*i*225)/(WIDTH*HEIGHT));	/* R */
			printf("%d ",(j*j*225)/(WIDTH*HEIGHT));	/* G */
			printf("%d ",(int)((i+j)*2.25));	/* B */
		}
	}

	return 0;
}
