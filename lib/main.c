#include <stdio.h>

#define XMAX	100
#define YMAX	100

#include "pbm.h"

main()
{
	int layer[XMAX][YMAX];
	init(layer);
	drawlineeqn(layer, 0.6, 30);
	print(layer);
	return 0;
}
