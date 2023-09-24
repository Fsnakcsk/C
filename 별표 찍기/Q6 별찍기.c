#include <stdio.h>

main()
{
	
	int i,j;
	
	for(i=1; i<=5; i++) {
		for(j=i; j<=4+i; j++) {
			printf("%2d",j);
		}
		printf("\n"); 
	}
	
	
}
