#include <stdio.h>
#include <malloc.h>

typedef struct point {
	int x;
	int y;	  
} Point, * PointPtr;

void findCenterPoint(Point *c, Point *a, Point *b) {
	c->x = (a->x + b->x) / 2;
	c->y = (a->y + b->y) / 2;
}

void printPoint(char *name, PointPtr num){
	printf("%s = %d %d\n",name,num->x,num->y);
}

main()
{
	Point *pt;
	
	pt = (Point *)malloc(3*sizeof(Point));
	
	pt[0].x = 10;
	pt[0].y = 10;
	
	pt[1].x = 20;
	pt[1].y = 30;
	
	findCenterPoint(&pt[2], &pt[0], &pt[1]);
	
	printPoint("a",&pt[0]);
	printPoint("b",&pt[1]);
	printPoint("c",&pt[2]);
	
	free(&pt[0]);
	free(&pt[1]);
	free(&pt[2]);

}
