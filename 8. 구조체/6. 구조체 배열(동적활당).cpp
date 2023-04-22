#include <stdio.h>
#include <malloc.h>

typedef struct point {
	int x;
	int y;   
} Point, * PointPtr; 

void findCenterPoint(Point *p, Point *q, Point *r) {
	p->x = (q->x + r->x) / 2; // 15
	p->y = (q->y + r->y) / 2; // 20   
} 

void printPoint(char *name, PointPtr p) {
	printf("%s = (%d,%d)\n",name,p->x,p->y);
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
}
