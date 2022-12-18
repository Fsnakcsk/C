#include <stdio.h>
#include <string.h>

void my_strcpy(char *to, char *from) {
	// 굳지 '\0' 쓰지 않아도 
	// 반복하다가 '\0'을 만나면 False가 되기때문에 안써도됨 
	//  간단하게 짜는 게 중요.
	 
	while(*to++ = *from++);
}

main()
{
	char *x = "kim";
	char y [10];
		
	my_strcpy(y,x);
	printf("y = %s\n",y);
}
