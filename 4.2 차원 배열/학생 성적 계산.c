#include <stdio.h>

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
	
	for (i=0; i<3; i++) {
		printf("%d¹øÇÐ»ý : ",i+1);
		for (j=0; j<4; j++) {
			printf("%5d",x[i][j]);
		}
		printf("\n");
	}
	
}
