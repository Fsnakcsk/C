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


	//�ڷ����� ũ�� 
	printf("%d %d %d\n",
		sizeof(int), sizeof(double), sizeof(char));
		
	// ����Ʈ�� ��� 8����Ʈ. 
	printf("%d %d %d\n",
		sizeof(int*), sizeof(double*), sizeof(char*));
			
	//print(%d, &a) �̷� ���´�, ���Ұ��� �˾Ƴ��� ����̴�.
	printf("%d %d %d %d %d %d\n",
			&a, &b, &c, &d, &ap, &cp);
			
	// ***** ap = 20;  �̷��� ���� ���� �ȵ�.*****
	
	ap = &a; // a�� �ּ�(���� �ƴ� ����)ap�� ���� 
			 // ap = a�� �ּ� 
			 
			  
	x = *ap + 50; // dereferencing --> ap�� ����Ű�� ���� �ִ� �� 
		     // ap�� a�� �ּҰ� �ְ�, 
			 // ap�� �ִ� �ּ��� �� A�� ���� �����´� 
	
	printf("x = %d ",x);
	
	cp = &d;
	y = *cp + 0.1;
	printf("x = %f ",y);
	
//*-------------------------------------------------	

	//  x = *ap    ���� �ʿ� �ִ� ��� ap�� ����Ű�� ���� �ִ� �� 
	*ap = 1000; // ap�� ����Ű�� ��
	*ap = *ap + 300; 
	printf("a = %d ",a);// a���� 20�δ� 1000�� �ٲ� 
	
	
	 
}
