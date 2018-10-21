#include <stdio.h>

typedef struct
{
	int x;
	int y;
} Point;

typedef struct
{
	Point a;
	Point b;
} Box;

Point top = {15, 38};
Point bottom;
Box rect = {6, 12, 25, 45}; // (6 и 12) ->a ->> x = 6, y = 12; (25 и 45) ->b ->> x = 25, y = 45;
int	main()
{
	bottom.x = 5;
	bottom.y = 8;	
}

/*
struct coords
{
	int x;
	int y;
} Point;

struct coords Top;

int	main(void)
{
	Point.x = 18;
	Point.y = 68;
	Top.x = 120;
	Top.y = 587;

	fprintf(stdout, "Point.x = %d\n", Point.x);
	fprintf(stdout, "Point.y = %d\n", Point.y);
	printf("Top.x = %d\n", Top.x);
	printf("Top.y = %d\n", Top.y);
}*/