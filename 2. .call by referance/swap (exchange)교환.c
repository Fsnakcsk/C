#include <stdio.h>

int swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a; // a�� ����Ű�� ���� �� 
	*a = *b;  // a�� ����Ű�� �� 
	*b = tmp;
	 
	
}

main()
{
	int a = 10;
	int b = 20;
	
	int x,y;
	
	printf("befor swapping : a = %d, b = %d\n",
			a,b);
	// call by value	������ �۵��� �ȵǱ� ������
	//  call by reference�� �ؾ� ��. �׷��� &a,&b �ּҸ� �� 	
	swap(&a,&b); // �̶��� INT POINT TEPY �ȴ�. 
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
