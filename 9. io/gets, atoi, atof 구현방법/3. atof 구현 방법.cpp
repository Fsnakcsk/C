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

int atoi(char s[]) {
	int i, n, sign;
	
	//��ĭ  ��Ʈ  ��Ű  ������ ���������ͱ��� �������� �ϴ� for���̴�.
	// ���� ���� ���� i++�� �ؾ� �Ѵ�. 
	for (i=0; s[i] == ' ' || s[i] == '\n' || s[i] == '\t'; i++);
	
	sign = 1;
	if (s[i] == '+' || s[i] == '-')
		sign = (s[i++]=='+') ? 1 : -1; //��� if�� ����: data = (a > 0) ? x : y  
		 //������� �������� ���ϱ� ���� if��  
	for (n=0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + s[i] - '0';  /* '0' = 48  
								  ������ << a - '0'>>  ���� : '1'=49  �׷� 49-48 = 1  
								  n = 10*n + s[i] -'0'  
								  */  
	return(sign * n); 
}

double atof(char s[]) {
	double val,power;
	int i, n, sign;
	
	for (i=0; s[i]== ' ' || s[i] == '\n' || s[i]=='\t'; i++);
	
	sign =1;
	if(s[i]=='+' && s[i]=='-')
		sign = (s[i++]=='+') ? 1 : -1;
	
	for (val=0; s[i]>='0' && s[i]<='9'; i++)
		val = val * 10 + s[i] - '0';
	// ���� ������ for������ �������´�  .
	
	// ���� �ν��ϰ� �� ���Ŀ� ���ڸ� ��� ���Ѵ�. 
	if (s[i]=='.') i++;
	for(power = 1; s[i] >= '0' && s[i] <= '9'; i++) {
		val = 10 * val + s[i] - '0';
		power *= 10; 
	}
	return(sign * val / power);
}

main()
{
	int x;
	double y;
	char buffer[MAX];
	
	printf("Type a integer number :");
	getline(buffer, MAX);
	x = atoi(buffer);
	printf("integer : %d\n",x);
	
	printf("Type a double number : "); 
	getline(buffer, MAX);
	y = atof(buffer);
	printf("double : %f\n",y);
	
	printf("Type a string : "); 
	getline(buffer, MAX);
	printf("string : %s\n",buffer);
	
}
