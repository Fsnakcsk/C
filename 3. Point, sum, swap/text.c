#include <stdio.h>

void printArray(int p[], int n) {
	int i;
	
	for (i=0; i<n; i++) {
		printf("%d ",p[i]);
	}
	printf("\n");
}

int getmaxPos(int p[], int n) {
	int i;
	int max = -1;
	int maxPos= -1;
	
	for (i=0; i<n ; i++) {
		if (p[i] > max) {
			max = p[i];
			maxPos = i;
		}
	}
	return maxPos;
}

void swap(int *a,int *b) {
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void selectionsort(int p[], int n) {
	int maxPos;
	int i;
	
	for (i=0; i<n; i++) {
		maxPos = getmaxPos(p,10-i);
		swap(&p[maxPos],&p[n-i-1]);
	}
}

main()
{
	int x[10] = { 70,60,40,100,30,80,20,10,90,50 };

	printArray(x,10);
	selectionsort(x,10);
	printArray(x,10);
}
