#include <stdio.h>
#include <malloc.h>
   
typedef struct point {
	int x;
	int y;
} Point, *PointPtr;

void findCenterPoint(Point *p, Point *q, Point *r) {
	p->x = (q->x + r->x) / 2; // 15
	p->y = (q->y + r->y) / 2; // 20
}

void printPoint(char *name, PointPtr p) {
	printf("%s = (%d,%d)\n",name,p->x,p->y);
}
 
main()
{	
	Point *pa = (Point *)malloc(sizeof(Point));
	Point *pb = (Point *)malloc(sizeof(Point));
	Point *pc = (Point *)malloc(sizeof(Point));
	
	pa->x = 10;
	pa->y = 10;
	
	pb->x = 20;
	pb->y = 30;
	
	findCenterPoint(pc,pa,pb);
	printPoint("a",pa);
	printPoint("b",pb);
	printPoint("c",pc);
	
	free(pa);
	free(pb);
	free(pc);
	
 
}   
