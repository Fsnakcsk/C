#include <stdio.h>

struct point {
	int x; 
	int y;
};

void findCenterPoint(struct point *p, struct point q, struct point r) {
	p->x = (q.x + r.x) / 2; // 15
	p->y = (q.y + r.y) / 2; // 20
}
  
void printPoint(char *name, struct point p) { 
	printf("%s = (%d,%d)\n",name,p.x,p.y);
}
 
main()
{
	struct point a = {10, 10};
	struct point b;
	struct point c;
	
//	a.x = 10;
//	a.y = 10;
	
	b.x = 20;
	b.y = 30;
	
	findCenterPoint(&c,a,b);
	printPoint("a",a);
	printPoint("b",b);
	printPoint("c",c);
	
 
}   
