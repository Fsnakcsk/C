#include <stdio.h>	
		//x[0] 받음 즉 시작위치 이어받음 
//int getSum(int *p,int n)
int getSum(int p[],int n)  // 똑같은 의미 
{
	int sum,i;
	sum = 0;
	
	for(i=0; i<n; i++) {
//	 	sum += p[i];
	 	sum = sum + *(p+i); //같은 의미 
	 	
/*		sum = sum + *p; 이렇게 안하는 것 좋아 
		p++ ;			가리키는 위치가 게속 달라진다 
*/
	}
	 
	 return sum;
} 

void printArray(int a[],int n) {
	int i;
	for(i=0; i<n; i++) {  // main에서 함수로 만들면  
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
	add(x,10,100); // 확인용 x대입 10곱기 100더하기 
									//의미가 똑같음 
//	printf("sum = %d\n, getSum",getSum(&x[0],10));
	printf("sum = %d\n",getSum(x,10));
	
	printArray(x,10); 
/*	for(i=0; i<10; i++) { 함수로 만들면  
		printf("%d ",x[i]);
	}
*/
}
