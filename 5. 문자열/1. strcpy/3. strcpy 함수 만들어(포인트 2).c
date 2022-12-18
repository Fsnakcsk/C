#include <stdio.h>
#include <string.h>

void my_strcpy(char *to, char *from) {

	while((*to = *from) !='\0') {
		to++;
		from++;
	}
		
}

main()
{
	char *x = "kim";
	char y [10];
		
	my_strcpy(y,x);
	printf("y = %s\n",y);
}
