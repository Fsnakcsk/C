#include <stdio.h>
#include <string.h>

main() 
{
	char *x;
	
/*
	x = "hello, my name is kim";
 		 x[5] = '!';    문자를 못 바꿈 
		  
		정적영역에서 존재 그래서 문자를 바꿀 수 없다
 		그래서 strcpy 함수를 이용해서 바꿀 수 있지만
 		억공간을 넉넉하게 잡아야 되는 단점이 존재
 		그래서 strdup 함수를 이용해서 해결한다 	
 		strdup : 'my name is kim ' 수행할 만큼 할 수 있게  
		x저장공간에  필요할만큼을 잡아준다  
*/

//   
	x = strdup("Hello, my name is kim");
	x[5] = '!';       //문자를 바꿀 수 있다. 
	printf("%s\n",x);
	
}
