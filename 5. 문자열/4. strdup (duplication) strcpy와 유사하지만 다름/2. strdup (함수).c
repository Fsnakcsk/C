#include <stdio.h>
#include <string.h>
#include <malloc.h>

// strdup�� char ����Ʈ�� ���� �ؾ���  
char *my_strdup(char *s) {
	
	char *p;
	
	p = (char*)malloc(strlen(s)+1);
	// malloc �Լ��� ����� �� �տ� �ݵ�� (char*)malloc �ؾ���
	// �ǹ̴� heap �������� �̸�ŭ ��������� ����� ��  
	
	strcpy(p,s);
	
	return p; 
}

main() 
{
	char *x;

	x = my_strdup("Hello, my name is kim.");
	x[5] = '!';       //���ڸ� �ٲ� �� �ִ�. 
	printf("%s\n",x);
	
	free(x);
	// main �� ������ ������ �縮������ 
	// heap�������� Ȱ��� ��������� �縮�����ʴ� 
	// �׷��� free(X)�� X�� ����Ű�� ���� �����Ҹ� ���ֶ� 
	// ������ٴ� �ͺ��ٴ� �ε��� ó�� �������� �������
	// ���� �ü������ ���Ѿ� ��µ� �ٽ� �װ��� ����ü���� ������ ���� 
	
}
