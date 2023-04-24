#include <stdio.h>
// 1 6 2
// 22
// 3 21 4

 
int getSum(int n)
{ 
	return n*(n+1)/2;
}

main()
{
	int i,j,k,y;
	k = 1;
	
	printf("< summation table from 1 to 100 >\n"); 
	
	printf("%c",1);
	for (i=0; i<9; i++) printf("%c%c%c%c%c%c%c%c",6,6,6,6,6,6,6,22);
	printf("%c%c%c%c%c%c%c%c",6,6,6,6,6,6,6,2);	
	printf("\n");
	
//----------------------------------------------

	for (j=0; j<10; j++) {
	
		printf("%c",5);
		for (i=0; i<10; i++) 
			printf("%7d%c",getSum(k++),5);
		
		printf("\n");
		
		if(j != 9) 
		{	
			printf("%c",25);
			for (y=0; y<9; y++) 
				printf("%c%c%c%c%c%c%c%c",6,6,6,6,6,6,6,16);
			
			printf("%c%c%c%c%c%c%c%c",6,6,6,6,6,6,6,23);
			printf("\n");	
		}
	}

//----------------------------------------------
		printf("%c",3);
		for (i=0; i<9; i++) 
			printf("%c%c%c%c%c%c%c%c",6,6,6,6,6,6,6,21);
			
		printf("%c%c%c%c%c%c%c%c",6,6,6,6,6,6,6,4);	
}
