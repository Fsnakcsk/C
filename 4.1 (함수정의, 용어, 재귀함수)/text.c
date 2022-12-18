#include <stdio.h>
#include <stdlib.h>
// �Լ� �տ� return type �� ���� ��� ������ int�� ������  
int getSum(int n)
{	

	int i;
	int total;
	
	// defensive programming �������� ���α׷��� (0���� ������ ����) 
	if  (n < 0) {
		printf("Please use a positive number\n");
		exit(-1);
	}
	
	total = 0;
	for(i=1; i<=n; i++){
		total += i;
	}
	
	return total;
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
