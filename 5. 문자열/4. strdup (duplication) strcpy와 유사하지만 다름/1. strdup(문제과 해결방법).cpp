#include <stdio.h>
#include <string.h>

main() 
{
	char *x;
	
/*
	x = "hello, my name is kim";
 		 x[5] = '!';    ���ڸ� �� �ٲ� 
		  
		������������ ���� �׷��� ���ڸ� �ٲ� �� ����
 		�׷��� strcpy �Լ��� �̿��ؼ� �ٲ� �� ������
 		������� �˳��ϰ� ��ƾ� �Ǵ� ������ ����
 		�׷��� strdup �Լ��� �̿��ؼ� �ذ��Ѵ� 	
 		strdup : 'my name is kim ' ������ ��ŭ �� �� �ְ�  
		x���������  �ʿ��Ҹ�ŭ�� ����ش�  
*/

//   
	x = strdup("Hello, my name is kim");
	x[5] = '!';       //���ڸ� �ٲ� �� �ִ�. 
	printf("%s\n",x);
	
}
