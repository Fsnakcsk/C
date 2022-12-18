#include <stdio.h>
#include <stdlib.h>
// 함수 앞에 return type 안 적은 경우 저절로 int를 강정함  
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
	sum = getSum(100); // function call 값을 int(N)에 돌려준다  
	printf("sum(%d) = %d\n",100,sum);
	
	sum = getSum(10);
	printf("sum(%d) = %d\n",10,sum);
	
	sum = getSum(200);
	printf("sum(%d) = %d\n",200,sum);
	
*/
	 
}
