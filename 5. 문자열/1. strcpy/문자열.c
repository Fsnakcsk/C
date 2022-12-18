#include <stdio.h>
#include <string.h>

/* 

length 함수 직접 만들기  

방법 1  '\0'까지 k i m은  k부터 s[0] --> s[1] --> s[2] n도 0+1 -> ++  
int my_strlen(char *s) {
	int n;
	
	for (n=0; *s !='\0'; s++) {
		n++;
	}
	return n;
} 

*/

// 방법 2  p은 마지막 위치에서 s시작위치를 빼고 나서 len값이 나온다. 
int my_strlen(char *s) {
	
	char *p =  s;
//	while(*p != '\0') p++;
	while(*p) p++; // '\0' 라는 널값은 결국은 0을 의미하며 0은 즉 False라는 의미한다 그래서 \0까지만 돈다. 
	
	return (p-s); 
}

main()
{ 
	char x[10] = {'k', 'i', 'm', '\0'};
	
	int n;
	int i;
	
	for (i=0; i<5; i++) {
		scanf("%s",x);
		n = my_strlen(x);
		printf("length of %s is %d\n",x,n);
	}
	
}
