#include <stdio.h>
#include <string.h>

void my_strcpy(char *to, char *from) {
	// ���� '\0' ���� �ʾƵ� 
	// �ݺ��ϴٰ� '\0'�� ������ False�� �Ǳ⶧���� �Ƚᵵ�� 
	//  �����ϰ� ¥�� �� �߿�.
	 
	while(*to++ = *from++);
}

main()
{
	char *x = "kim";
	char y [10];
		
	my_strcpy(y,x);
	printf("y = %s\n",y);
}
