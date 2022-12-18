#include <stdio.h>
#include <malloc.h> 

main()
{
	int *p;
	int i;
	int n;
	
	printf("n = ");
	scanf("%d",&n);
	
	// scanf("%d", &p[n]  이렇게 쓰면 된다. 밑 문장을 써야 함다. 
	p = (int *)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++) {
		scanf("%d",&p[i]);
	}
	
	for(i=0; i<n; i++) {
		printf("p[%d] = %d\n",i,p[i]);
	}
	
} 
