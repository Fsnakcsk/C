#include <stdio.h>

int swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a; // a가 가리키는 곳의 값 
	*a = *b;  // a가 가리키는 곳 
	*b = tmp;
	 
	
}

main()
{
	int a = 10;
	int b = 20;
	
	int x,y;
	
	printf("befor swapping : a = %d, b = %d\n",
			a,b);
	// call by value	때문에 작동이 안되기 떄문에
	//  call by reference를 해야 함. 그래서 &a,&b 주소를 함 	
	swap(&a,&b); // 이때는 INT POINT TEPY 된다. 
	printf("after swapping : a = %d, b = %d\n",
			a,b);
			
	x = 100;		
	y = 200;	
	printf("after swapping : x = %d, y = %d\n",
			x,y);
	swap(&x,&y);
	printf("after swapping : x = %d, y = %d\n",
			x,y); 
}
