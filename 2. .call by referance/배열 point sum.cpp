#include <stdio.h>	
		//x[0] ���� �� ������ġ �̾���� 
//int getSum(int *p,int n)
int getSum(int p[],int n)  // �Ȱ��� �ǹ� 
{
	int sum,i;
	sum = 0;
	
	for(i=0; i<n; i++) {
//	 	sum += p[i];
	 	sum = sum + *(p+i); //���� �ǹ� 
	 	
/*		sum = sum + *p; �̷��� ���ϴ� �� ���� 
		p++ ;			����Ű�� ��ġ�� �Լ� �޶����� 
*/
	}
	 
	 return sum;
} 

void printArray(int a[],int n) {
	int i;
	for(i=0; i<n; i++) {  // main���� �Լ��� �����  
		printf("%d ",a[i]);
	}
} 

void add(int p[],int n,int data){
	int i;
	
	for(i=0; i<n; i++) {
		p[i] = p[i] + data;
	}
}

main()
{
	int x[10] = { 38,54,67,45,89,12,29,17,82,51 };
	int i;
	add(x,10,100); // Ȯ�ο� x���� 10���� 100���ϱ� 
									//�ǹ̰� �Ȱ��� 
//	printf("sum = %d\n, getSum",getSum(&x[0],10));
	printf("sum = %d\n",getSum(x,10));
	
	printArray(x,10); 
/*	for(i=0; i<10; i++) { �Լ��� �����  
		printf("%d ",x[i]);
	}
*/
}
