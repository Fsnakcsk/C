#include <stdio.h>
#include <stdlib.h>

int getNextInteger(char buf[], int *pos) {
	char tmp[BUFSIZ];
	int i = 0;
	int value;
	
	if (*pos > 0 && buf[*pos-1] == '\0') return -1;
	
	while(true) {
		tmp[i] = buf[*pos];
		if (tmp[i] == ' ' || tmp[i] == '\0') {
			tmp[i] = '\0';
			*pos = *pos + 1; 
			break;			
		}
		i++;
		*pos = *pos + 1;
	}
	value = atoi(tmp); // ASCII to Integer¿« æ‡¿⁄  = ATOI 
	return value;
}

main()
{
	int s;
	int x;
	int i,j;
	int pos; 
	char buffer[BUFSIZ];
	
	for (i=0; i<10; i++) {
		gets(buffer);
		pos = 0;
		s = 0;
		do {
			x = getNextInteger(buffer,&pos); 
			if (x < 0) break;
			s = s + x;
		} while (true);
		printf("sum = %d\n",s);
	}
}
