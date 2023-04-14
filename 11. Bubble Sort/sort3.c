/* sort3.c */
/* 강의 주제 :
	sorting (문자 열 데이터)
	end of file 이용 
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>
 
#define LINES	(100)
#define MAXLEN	1000

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

int readlines(char *lineptr[], int maxlines)
{
	int len,nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while((len = getline(line,MAXLEN)) > 0)
		if (nlines >= maxlines)
			return(-1);
		else if ((p = (char*)malloc(len)) == NULL)
			return(-1);
		else {
			line[len-1] = '\0';
			strcpy(p,line);
			lineptr[nlines++] = p;
		}
	return(nlines);
}

void writelines(char *lineptr[],int nlines)
{
	int i;

	for(i = 0; i < nlines; i++) 
		printf("%s\n",lineptr[i]);
}

void sort(char *v[],int n)
{
	int i,j;
	char *tmp;

	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n-i-1; j++) {
			if (strcmp(v[j],v[j+1]) > 0) {
				tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
		}
	}	
}

main()
{
	char *lineptr[LINES];
	int nlines;

	if ((nlines = readlines(lineptr,LINES)) >= 0) {
		sort(lineptr,nlines);
		printf("-- sorted data --\n");
		writelines(lineptr,nlines);
	} else {
		printf("input too big to sort\n");
	}
}

/* 결과는 다음과 같이 나온다. (파일 이용 가능: sort < data.txt)
kim taegyun
seong sunyong
kim suehwan
choi jinho
jo jangwu
^Z
-- sorted data --
choi jinho
jo jangwu
kim suehwan
kim taegyun
seong sunyong
*/
