#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

int div(int x, int y) {
	return x / y;
}

main()
{
	int a,b;
	int c;
	int (*f)(int,int);
	
	a = 30;
	b = 20;
//	c = add(a,b);

	f = add;
	c = (*f)(a,b);
	printf("c = %d\n",c);
	
	f = mul;
	c = (*f)(a,b);
	printf("c = %d\n",c);
	
}
