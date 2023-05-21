#include <stdio.h>

#define XMAX	100
#define YMAX	100

#include "pbm.h"

main()
{
	int layer[XMAX][YMAX];
	init(layer);
	drawtest(layer, -2, 130);
	drawtest(layer, 0.6, 40);
	drawtest(layer,8, -450);
	print(layer);
	return 0;
}
