/* sort2.c */
/* 강의 주제 :
	sorting (character 단위 입력)
	end of file 이용
*/

#include <stdio.h>
#include <stdlib.h>
#define LINES	(100)
#define MAXINT	(10)
 
int getline(char s[],int limit)
{
	int c,i;
	
	i = 0;
	while(--limit > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n') 
		s[i++] = c;
	s[i] = '\0';
	return(i);
}

int readlines(int data[], int maxlines)
{
	int len,nlines;
	char line[MAXINT];

	nlines = 0;
	while((len = getline(line,MAXINT)) > 0)
		if (nlines >= maxlines)
			return(-1);
		else {
			line[len-1] = '\0';
			data[nlines++] = atoi(line);
		}
	return(nlines);
}

void sort(int v[],int n)
{
	int i,j;
	int tmp;

	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n-i-1; j++) {
			if (v[j] > v[j+1]) {
				tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
		}
	}	
}

main()
{
	int data[LINES];
	int i,nlines;

	if ((nlines = readlines(data,LINES)) >= 0) {
		sort(data,nlines);
		printf("-- sorted data --\n");
		for (i = 0; i < nlines; i++) {
			printf("%d\n",data[i]);
		}
	} else {
		printf("input too big to sort\n");
	}
}

/* 결과는 다음과 같이 나온다. (파일 이용 가능: sort < data.txt)
7
3
8
1
2
^Z
-- sorted data --
1
2
3
7
8
*/
