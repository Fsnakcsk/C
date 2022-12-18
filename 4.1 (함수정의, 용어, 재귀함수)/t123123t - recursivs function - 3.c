#include <stdio.h>

// 함수 앞에 return type 안 적은 경우 저절로 int를 강정함  
void printSum(int n);
int main() {
	printSum(4);
}

int getSum(int n) {
	printf("n = %d\n",n);
	if(n == 1) return 1;
	return getSum(n-1) + n;
	
}

void printSum(int n) {
	int sum;
	sum = getSum(n);
	printf("sum(%d) = %d\n",n,sum);
}


