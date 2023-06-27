#include <stdio.h>

main()
{
	int s;
	int x;
	int i,j;
	
	for (i=0; i<10; i++) {
		s = 0;
		for (j=0; j<3; j++) {
			scanf("%d",&x);
			s = s + x;
		}
		printf("sum = %d\n",s);
	} 
	
} 
