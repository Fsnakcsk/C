#include <stdio.h>
#include <stdlib.h>
#define MAX (100)

int getline(char s[], int limit) {
	int c,i;
	
	i = 0; 
	//  --limit�� ���� ����(100)�پ����鼭 ������ ���� ���� ���ǿ��� ���� 
	//                       getchar   	EOF    ��      '\0' �Ѵ� ���� �˷��� 
	while(--limit > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
}

main()
{
	int x;
	double y;
	char buffer[MAX];
	int i;
	
	for (i=0; i<5; i++) {
		getline(buffer,MAX);
		printf("%s\n",buffer);
	}

}
