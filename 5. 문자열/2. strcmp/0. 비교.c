#include <stdio.h>
#include <string.h>

main() 
{
	char *p = "Kwon";
	char *q = "Kim";
	int cmp;
	 
	cmp = strcmp(p,q);
	if (cmp == 0 ) { // strcmp(p,q) == 0  같으냐 비교  
		printf("same\n"); 
	} else if (cmp > 0) { // strcmp(p,q) > 0  p는 q보다 크냐 
		printf("%s\n",p); 
	} else { // strcmp(p,q) < 0  p는 q보다 작으냐 
		printf("%s\n",q); 
	}
} 
