#include <stdio.h>

#define FORMAT	1
#define WIDTH	500
#define LENGTH	800

#define SQWID	200
#define	SQLEN	300
#define ORIX	100
#define ORIY	200

main()
{
	printf("P%d\n", FORMAT);
	printf("%d %d\n", WIDTH, LENGTH);

	for (int i = 0; i < LENGTH; ++i)
		for (int j = 0; j < WIDTH; ++j) {
			if (((j>=ORIX && j<=(ORIX+SQWID)) && 
					(i==ORIY || i==(ORIY+SQLEN)))
					||
					((i>=ORIY && i<=(ORIY+SQLEN)) &&
					 (j==ORIX || j==(ORIX+SQWID))))
				putchar('1');
			else
				putchar('0');
		}
	return 0;
}
