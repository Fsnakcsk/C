#include <stdio.h>
#include <string.h>

void my_strcpy(char *to, char *from) {
	int i;
	i = 0;

	// ����Ʈ�� �̿��� ���     �ᱹ �Ȱ��� 
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
