#include <stdio.h>
#include <string.h>

void my_strcpy(char *to, char *from) {
/*
	이 형태는 , to = from부터 시행하고 나서
	다시  to++ = from++ '\0'까지 반복한다 
*/
	while((*to++ = *from++) !='\0') ;

		
}

main()
{
	char *x = "kim";
	char y [10];
		
	my_strcpy(y,x);
	printf("y = %s\n",y);
}
