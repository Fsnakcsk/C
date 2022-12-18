#include <stdio.h>	
// 순서대로 출력 
void printArray(int a[],int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
} 

// 배열 중에서 가장 큰 값의 위치 기록 
int getMaxPos(int p[],int n) {
	int i;
	int max;
	int maxPos;
	
	max = -1;
	maxPos = -1;
	for(i=0; i<n; i++) {
		if (p[i] > max) {
			max = p[i];
			maxPos = i; 
		}
	}
	return maxPos;
}

// 가장 큰값과 멘 마지막 값 교환  
void swap(int *a,int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
// 정렬  
void selectionSort(int *p, int n) {
	int i;
	int maxPos;
	
	// phase 단계를 겨쳐서 한 것 
	for(i=0; i<n; i++) {
		maxPos = getMaxPos(p,n-i);
		swap(&p[maxPos],&p[n-i-1]);
	//	printArray(p,10);
	}
}

main()
{
	int x[10] = { 12,54,67,45,89,38,29,17,82,11 };
	//int i;
	//int maxPos;
	
	printf("=== before sort ===\n");
	printArray(x,10); 
	selectionSort(x,10);
	printf("=== after  sort ===\n");
	printArray(x,10); 
/*  
	방법 1    또는  (int *a[],int n) 
	void printArray(int a[],int n) {
	printArray(x,10); 
	
	방법 2 
	void swap(int *a,int *b) {
	swap(&x[maxPos],&x[9]);
*/

}
