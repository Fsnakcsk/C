#include <stdio.h>
#include <string.h>
main()
{
	char *p = "Taegyun";
	char q[30]; 
	
	//strcat 또는 strcpy 주의해야 할 점은
	// 기억장소 넉넉하게 잡아줘야 한다 
	// LOCAL vaverble 처럼 선언하고 내용을 변경할 수 있어야 함 
	
	strcpy(q,"kim");
	printf("%s\n",q);
	strcat(q,p);
	strcat(q,", how are you?");
	printf("%s\n",q);
}
