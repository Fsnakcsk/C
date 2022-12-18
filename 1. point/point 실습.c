#include <stdio.h>

main()
{
	int x;
	double y;
	
	int a = 20;
	int b = 30;
	int *p;
	
	p = &a;
	*p = *p + 20;
	p = &b;
	*p = a + b + *p;
	printf("a = %d\nb = %d \n",a,b);


	 
}
