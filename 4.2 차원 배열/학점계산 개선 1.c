#include <stdio.h>
 
// void print2Darray(int p[3][4],int row, int col) {
// void print2Darray(int p[][],int row, int col) { 
//                   이런 형태를 오류남 
// void print2Darray(int p[][4],int row, int col) {
//              쓸 수 있지만 1번과 같이 범용성이 없다  

// void print2Darray(int *p,int row, int col) {
void print2Darray(int p[],int row, int col) {
	int i,j;
	
	for (i=0; i<row; i++) {
		printf("%d번학생 : ",i+1);
		for (j=0; j<col; j++) {			
			// 1번 방법 2차원 배열은 1차원로 바꾸는 방  K = i*col + j  
			//	printf("%5d",p[i*col+j]); 
			  
			// 2번 방법      또는 아래 방법  : 위과 아래 방법은 똑같다  
			//  printf("%5d",*(p+i*col+j)); 
			
			// 3번 방법
			printf("%d",*p);
			p++;
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

	print2Darray((int*)x,3,4);	
//	print2Darray(x,3,4);
//	print2Darray(&x[0][0],3,4);
	
}
