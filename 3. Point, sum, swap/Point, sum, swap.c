#include <stdio.h>	
// ������� ��� 
void printArray(int a[],int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
} 

// �迭 �߿��� ���� ū ���� ��ġ ��� 
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

// ���� ū���� �� ������ �� ��ȯ  
void swap(int *a,int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
// ����  
void selectionSort(int *p, int n) {
	int i;
	int maxPos;
	
	// phase �ܰ踦 ���ļ� �� �� 
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
	��� 1    �Ǵ�  (int *a[],int n) 
	void printArray(int a[],int n) {
	printArray(x,10); 
	
	��� 2 
	void swap(int *a,int *b) {
	swap(&x[maxPos],&x[9]);
*/

}
