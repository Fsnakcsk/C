#include <stdio.h>

// �Լ� �տ� return type �� ���� ��� ������ int�� ������  
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


