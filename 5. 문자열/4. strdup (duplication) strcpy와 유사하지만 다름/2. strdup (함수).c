#include <stdio.h>
#include <string.h>
#include <malloc.h>

// strdup는 char 포이트로 선언 해야함  
char *my_strdup(char *s) {
	
	char *p;
	
	p = (char*)malloc(strlen(s)+1);
	// malloc 함수를 사용할 때 앞에 반드시 (char*)malloc 해야함
	// 의미는 heap 영역에서 이만큼 저장공간을 만들어 둬  
	
	strcpy(p,s);
	
	return p; 
}

main() 
{
	char *x;

	x = my_strdup("Hello, my name is kim.");
	x[5] = '!';       //문자를 바꿀 수 있다. 
	printf("%s\n",x);
	
	free(x);
	// main 은 실행이 끝나면 사리지지만 
	// heap영역에서 활당된 저장공간은 사리지지않다 
	// 그래서 free(X)는 X가 가리키는 곳에 기어장소를 없애라 
	// 사라진다는 것보다는 부동산 처럼 소유권이 사라지고
	// 원래 운영체제에서 만둘어 줬는데 다시 그곳은 원영체제에 돌려준 것지 
	
}
