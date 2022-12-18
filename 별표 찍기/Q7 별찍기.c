#include <stdio.h>
/*
56789
45678
34567
23456
12345
*/
main()
{
	
	int i,j;
	
	for(i=1; i<=5; i++) {
		for(j=6-i; j<=10-i; j++) {
			printf("%2d",j);
		}
		printf("\n");
	}
	
	
}
