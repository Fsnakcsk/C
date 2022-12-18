#include <stdio.h>
#include <string.h>

			// s[] *s ¶È°°´Ù 
int my_strcmp(char s[], char *t) {

	int i = 0;
	
	while (s[i] == t[i]) {
		if (s[i++] == '\0')
			return (0);
	//	i++;
	}
	return (s[i] - t[i]);
}
main() 
{
	char *p = "Kwon";
	char *q = "Kim";
	int cmp;
	 
	cmp = my_strcmp(p,q);
	if (cmp == 0 ) { 
		printf("same\n"); 
	} else if (cmp > 0) { 
		printf("%s\n",p); 
	} else { 
		printf("%s\n",q); 
	}
} 
