#include <stdio.h>
#include <stdlib.h>
// 함수 앞에 return type 안 적은 경우 저절로 int를 강정함  
int getSum(int n)
{	

	int i;
	int total;
	
	// defensive programming 오류방지 프로그래밍 (0보다 적으면 종류) 
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
	sum = getSum(100); // function call 값을 int(N)에 돌려준다  
	printf("sum(%d) = %d\n",100,sum);
	
	sum = getSum(10);
	printf("sum(%d) = %d\n",10,sum);
	
	sum = getSum(200);
	printf("sum(%d) = %d\n",200,sum);
	
*/
	 
}
