#include <stdio.h>

// struct coord
// {
// 	int x;
// 	int y;
// };

// struct coord{
// 	int x;
// 	int y;
// } first, second;

struct coord {
	int x;
	int y;
};
struct coord first, second;

first.x = 50;
first.y = 100;

printf("%d, %d", second.x, second.y);

first = second;

first.x = second.x;
first.y = second.y;