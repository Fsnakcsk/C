#include <stdio.h>
#include <string.h>

void my_strcpy(char *to, char *from) {
/*
	�� ���´� , to = from���� �����ϰ� ����
	�ٽ�  to++ = from++ '\0'���� �ݺ��Ѵ� 
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
