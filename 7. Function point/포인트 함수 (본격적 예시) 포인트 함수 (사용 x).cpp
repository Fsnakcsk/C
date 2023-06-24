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
	int which;
	int a,b,c;
	int i;
	
	printf("== 사칙연산 계산기(1:덧셈, 2:뺼셈, 3ㅣ곱셈, 4:나누셈) ==\n");
	
	for (i=0; i<10; i++) {
		printf("어떤연산을 하시겠습니까?(1,2,3,4,) ");
		scanf("%d",&which); 
		
		printf("첫번빼 데이터는? ");
		scanf("%d",&a); 
		
		printf("두번빼 데이터는? ");
		scanf("%d",&b); 		
		
		if (which == 1) {
			c = add(a,b);
		} else if (which == 2) {
			c = sub(a,b);
		} else if (which == 3) {
			c = mul(a,b);
		} else if (which == 4) {
			c = div(a,b);
		}
		
		printf("연산결과는 %d 입니다.\n",c);
	} 
}
