#include <stdio.h>
#include <stdlib.h>
// �Լ� �տ� return type �� ���� ��� ������ int�� ������  
int getSum(int n)
{	printf("%d",n);
	if(n == 1) return 1;
	return getSum(n-1) + n;
	

}
	

void printSum(int n)
{
	int sum;
	sum = getSum(n);
	printf("sum(%d) = %d\n",n,sum);
}

int main()
{
	printSum(100);
	
	printSum(10);
	
	printSum(200);
	
	
/*
	
	int sum;
	//          actual argunmet / actual parameter 
	sum = getSum(100); // function call ���� int(N)�� �����ش�  
	printf("sum(%d) = %d\n",100,sum);
	
	sum = getSum(10);
	printf("sum(%d) = %d\n",10,sum);
	
	sum = getSum(200);
	printf("sum(%d) = %d\n",200,sum);
	
*/
	 
}
