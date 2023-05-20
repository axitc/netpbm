#include <stdio.h>

#define FORMAT	1

#define BG	0
#define FIL	1
#define NUL	2

/* base */
void init(int layer[YMAX][XMAX]);
void etch(int layer0[YMAX][XMAX], int layer1[YMAX][XMAX]);
void print(int layer[YMAX][XMAX]);
/* draw */
void fillpixel(int layer[YMAX][XMAX], int color, int x, int y);
void drawlineeqn(int layer[YMAX][XMAX], float slope, int intercept);
void drawlineseg(int layer[YMAX][XMAX], int x1, int y1, int x2, int y2);
void drawlinepivot(int layer[YMAX][XMAX], float slope, int x, int y);
/* post-processing */
void thicken(int layer[YMAX][XMAX], char kernel, int thickness);
/* void antialias() ~ for pgm, ppm only ! */

void init(int layer[YMAX][XMAX])
{
	for (int y = 0; y < YMAX; ++y)
		for (int x = 0; x < XMAX; ++x)
			layer[y][x] = NUL;
}

/* etch layer1 pen color on layer0 */
void etch(int layer0[YMAX][XMAX], int layer1[YMAX][XMAX])
{
	for (int y = 0; y < YMAX; ++y)
		for (int x = 0; x < XMAX; ++x)
			if (layer1[y][x] == FIL)
				layer0[y][x] = FIL;
}

void print(int layer[YMAX][XMAX])
{
	printf("P%d %d %d\n", FORMAT, XMAX, YMAX);
	for (int y = 0; y < YMAX; ++y)
		for (int x = 0; x < XMAX; ++x)
			printf("%d", layer[y][x]==FIL ? FIL : BG);
	putchar('\n');
}


/*
 * DRAW
 */
void drawlineeqn(int layer[YMAX][XMAX], float slope, int intercept)
{
	int yblackat;
	for (int y = 0; y < YMAX; ++y)
		for (int x = 0; x < XMAX; ++x) {
			if (y == (int)(slope*x + intercept))
				yblackat = x;
			if (x == yblackat)
				layer[y][x] = FIL;
		}
}

/*
 * POST-PROCESSING
 */
void thicken(int layer[YMAX][XMAX], char kernel, int thickness)
{
	/* under construction */
}
