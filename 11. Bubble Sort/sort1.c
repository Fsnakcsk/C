/* sort1.c */
/* 강의 주제 :
	sorting (bubble sort)
*/

#include <stdio.h>
#define MAX	(100)

void sort(int v[],int n)
{
	int i,j;
	int tmp;
 
	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n-i-1; j++) {
			if (v[j] > v[j+1]) {
				tmp = v[j];
				v[j] = v[j+1]; 
				v[j+1] = tmp;
			}
		}
	}	
}

main()
{
	int data[MAX];
	int i,ndata;

	printf("Type the number of data: ");
	scanf("%d",&ndata);
	if (ndata > MAX) {
		printf("Too many data\n");
		exit(-1);
	}
	for(i = 0; i < ndata; i++) {
		printf("Type the %dth data: ",i+1);
		scanf("%d",&data[i]);
	}
	sort(data,ndata);
	printf("-- sorted data --\n");
	for(i = 0; i < ndata; i++) {
		printf("%d\n",data[i]);
	}
}

/* 결과는 다음과 같이 나온다.
Type the number of data: 5
Type the 1th data: 7
Type the 2th data: 3
Type the 3th data: 8
Type the 4th data: 1
Type the 5th data: 2
-- sorted data --
1
2
3
7
8
*/
