#include <stdio.h>
// �̰��� ������ ���α׷��̴� 
//              ���� ���ڰ� �������ϱ�  
void print2Darray(int p[3][4],int row, int col) {
	int i,j;
	
	for (i=0; i<row; i++) {
		printf("%d���л� : ",i+1);
		for (j=0; j<col; j++) {			
			printf("%5d",p[i][j]);
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
	
	for (i=0; i<3; i++) {
		x[i][3] = 0;
		for (j=0; j<3; j++) {
			x[i][3] = x[i][3] + x[i][j]; 
		}
	}
	
	print2Darray(x,3,4);
	
}
