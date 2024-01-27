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
	struct point a;
	struct point b;
	struct point c;
	
	scanf("%d %d",&a.x,&a.y);
	scanf("%d %d",&b.x,&b.y);
	
	findCenterPoint(&c,a,b);
	printPoint("a",a);
	printPoint("b",b);
	printPoint("c",c);
	
 
}   
