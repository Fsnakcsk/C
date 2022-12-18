#include <stdio.h>

main()
{
	int x;
	double y;
	
	int a = 20;
	int b = 30;
	double c = 4.7;
	double d = 8.3;
	int *ap = 0; 
	double *cp = 0;


	//자료형의 크기 
	printf("%d %d %d\n",
		sizeof(int), sizeof(double), sizeof(char));
		
	// 포인트는 모두 8바이트. 
	printf("%d %d %d\n",
		sizeof(int*), sizeof(double*), sizeof(char*));
			
	//print(%d, &a) 이런 형태는, 수소값을 알아내는 방법이다.
	printf("%d %d %d %d %d %d\n",
			&a, &b, &c, &d, &ap, &cp);
			
	// ***** ap = 20;  이렇게 쓰면 절대 안됨.*****
	
	ap = &a; // a의 주소(값이 아닌 번지)ap에 저장 
			 // ap = a의 주소 
			 
			  
	x = *ap + 50; // dereferencing --> ap가 가리키는 곳에 있는 값 
		     // ap에 a의 주소가 있고, 
			 // ap에 있는 주소의 값 A의 값을 가져온다 
	
	printf("x = %d ",x);
	
	cp = &d;
	y = *cp + 0.1;
	printf("x = %f ",y);
	
//*-------------------------------------------------	

	//  x = *ap    오른 쪽에 있는 경우 ap가 가리키는 곳에 있는 값 
	*ap = 1000; // ap가 가리키는 곳
	*ap = *ap + 300; 
	printf("a = %d ",a);// a원래 20인대 1000로 바꿈 
	
	
	 
}
