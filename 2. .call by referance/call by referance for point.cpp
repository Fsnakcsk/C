#include <stdio.h>

int swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a; // a가 가리키는 곳의 값 
	*a = *b;  // a가 가리키는 곳 
	*b = tmp;
}

void set_10(int *p)
{
	*p = 10;
}
void set(int *p, int value)
{
	*p = value;
}

main()
{
	int x;
	int y;
/*	
	set_10(&x); // call by reperance
	set_10(&y);
*/	
	set(&x,100); // set(point , int)
	set(&y,200); // set(point , int)
	
	printf("%d %d\n",x,y);

}
