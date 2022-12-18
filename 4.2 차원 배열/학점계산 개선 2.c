#include <stdio.h>

void calculateSum(int *p, int row, int col) {
	
	int i,j;
	
	for (i=0; i<row; i++) {
		// x[i][3] = 0;
		p[i*col + col-1] = 0;
		for (j=0; j<col; j++) {
			p[i*col + col-1] = p[i*col + col-1] + p[i*col + j]; 
		}
	}
}

void print2Darray(int p[],int row, int col) {
	int i,j;
	
	for (i=0; i<row; i++) {
		printf("%d���л� : ",i+1);
		for (j=0; j<col; j++) {			
			/* 1�� ��� 2���� �迭�� 1������ �ٲٴ� ��  K = i*col + j  */
				printf("%5d",p[i*col+j]);  
		} 
		printf("\n");
	}
}

main()
{
	int j,i;
	int x[3][4] = { {20,30,70,0},
					{40,50,50,0}, 
					{70,80,80,0}
			      };
	
	calculateSum((int*)x,3,4);
	print2Darray((int*)x,3,4);	

	
}
