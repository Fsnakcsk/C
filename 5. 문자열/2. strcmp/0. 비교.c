#include <stdio.h>
#include <string.h>

main() 
{
	char *p = "Kwon";
	char *q = "Kim";
	int cmp;
	 
	cmp = strcmp(p,q);
	if (cmp == 0 ) { // strcmp(p,q) == 0  ������ ��  
		printf("same\n"); 
	} else if (cmp > 0) { // strcmp(p,q) > 0  p�� q���� ũ�� 
		printf("%s\n",p); 
	} else { // strcmp(p,q) < 0  p�� q���� ������ 
		printf("%s\n",q); 
	}
} 
