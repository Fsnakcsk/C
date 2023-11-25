#include <stdio.h>  

void sort(int v[],int n) {
	int i,j;
	bool changed;
	int tmp;
	
	for(i=0; i<n-1; i++) {
		changed = false;
		for(j=0; j<n-1-i; j++) {
			if(v[j] > v[j+1]) {
				changed = true;
				tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
		}
		if (changed== false) break;
	}
}
main()
{
	int x[] = {23, 89, 12, 20, 17, 34, 56, 10, 83, 22};
	int i;
	
	printf("before sort:\n");
	for(i=0; i<10; i++) {
		printf("%4d",x[i]);
	}
	printf("\n");
	
	sort(x,10);
	
	printf("after sort:\n");
	for(i=0; i<10; i++) {
		printf("%4d",x[i]);
	}
	printf("\n");
	
/*	
	for(i=0; i<9; i++) {
		changed = false;
		for(j=0; j<9-i; j++) {
			if(x[j] > x[j+1]) {
				int tmp;
				
				changed = true;
				tmp = x[j];
				x[j] = x[j+1];
				x[j+1] = tmp;
			}
		}
		if (changed== false) break;
		
		for(j=0; j<10; j++) {
			printf("%4d",x[j]);
		}
		printf("\n");
	
	}*/
		
	
}
