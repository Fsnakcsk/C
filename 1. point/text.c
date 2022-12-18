#include <stdio.h>
void swap(int *x,int y,int *z)
{
	int tmp;

	tmp = *x;
	*x = y;
	y = *z;
	*z = tmp;
}
main()
{
	/* 학번이 9817589 인 경우 마지막 숫자 세개 이용 */
	int a = 5;
	int b = 8;
	int c = 9;

	swap(&a,b,&c);
	printf("%d %d %d\n",a,b,c);
}
