#include <stdio.h>
#include <string.h>

/* 

length �Լ� ���� �����  

��� 1  '\0'���� k i m��  k���� s[0] --> s[1] --> s[2] n�� 0+1 -> ++  
int my_strlen(char *s) {
	int n;
	
	for (n=0; *s !='\0'; s++) {
		n++;
	}
	return n;
} 

*/

// ��� 2  p�� ������ ��ġ���� s������ġ�� ���� ���� len���� ���´�. 
int my_strlen(char *s) {
	
	char *p =  s;
//	while(*p != '\0') p++;
	while(*p) p++; // '\0' ��� �ΰ��� �ᱹ�� 0�� �ǹ��ϸ� 0�� �� False��� �ǹ��Ѵ� �׷��� \0������ ����. 
	
	return (p-s); 
}

main()
{ 
	char x[10] = {'k', 'i', 'm', '\0'};
	
	int n;
	int i;
	
	for (i=0; i<5; i++) {
		scanf("%s",x);
		n = my_strlen(x);
		printf("length of %s is %d\n",x,n);
	}
	
}
