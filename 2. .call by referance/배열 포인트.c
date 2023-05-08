#include <stdio.h>

main()
{
	int x[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p;
	int b; 
	
	p = &x[4];
	b = *p + 1;
	
	printf("%d",b);
}
