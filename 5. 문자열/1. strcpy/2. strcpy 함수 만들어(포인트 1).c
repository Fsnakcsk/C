#include <stdio.h>
#include <string.h>

void my_strcpy(char *to, char *from) {
	int i;
	i = 0;

	// 포인트를 이요항 방법     결국 똑같다 
	while((*(to+i) = *(from+i)) !='\0')
		i++; 
}

main()
{
	char *x = "kim";
	char y [10];
	
//	strcpy(y,"kim");	
	my_strcpy(y,x);
	printf("y = %s\n",y);
	
	
}
