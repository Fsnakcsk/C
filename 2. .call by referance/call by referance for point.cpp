#include <stdio.h>

int swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a; // a�� ����Ű�� ���� �� 
	*a = *b;  // a�� ����Ű�� �� 
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
