#include <stdio.h>
#include <stdlib.h>
#define MAX (100)

int getline(char s[], int limit) {
	int c,i;
	
	i = 0; 
	//  --limit는 버퍼 펌위(100)줄어지면서 범위를 넘지 않은 조건에서 실행 
	//                       getchar   	EOF    과      '\0' 둘다 끝을 알려서 
	while(--limit > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
}

main()
{
	int x;
	double y;
	char buffer[MAX];
	int i;
	
	for (i=0; i<5; i++) {
		getline(buffer,MAX);
		printf("%s\n",buffer);
	}

}
