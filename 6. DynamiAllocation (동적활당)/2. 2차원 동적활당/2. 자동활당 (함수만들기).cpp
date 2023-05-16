#include <stdio.h>
#include <malloc.h>

int getSum(int** x, int row, int col) {
	
	int s;
	int i,j; 
	
	for(i=0; i<row; i++) 
		for(j=0; j<col; j++)  
			s = s + x[i][j]; 
		
	return s;
}

int** mallocArray(int m,int n) {
	
	int **p;
	int i;
	
	p = (int**)malloc(m*sizeof(int*)); 
	for (i=0; i<3; i++) {
		p[i] = (int*)malloc(n*sizeof(int));
	}
	 
	return p;
	
}

main()
{
	int **p;  //포인터를 가리키는 포인터포인터  
	int i,j;
	int sum;
	
	p = mallocArray(3,4); 
	
	for(i=0; i<3; i++) 
		for(j=0; j<4; j++) 
			p[i][j] = i*4 + j + 1;
			
	
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%4d",p[i][j]);
		}
		printf("\n");
	}

	sum = getSum(p,3,4);
	printf("sum = %d\n",sum);
	
	free(p);
}

