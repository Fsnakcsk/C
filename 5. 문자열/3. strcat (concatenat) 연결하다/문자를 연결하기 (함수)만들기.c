#include <stdio.h>
#include <string.h>

void my_strcat(char s[], char t[]) {
	int i,j=0;
	
	 while(s[i] != '\0') i++;
	 
	 while((s[i++] = t[j++]) != '\0');
}

main()
{
	char *p = "Taegyun";
	char q[20];
	
	strcpy(q,"kim");
	my_strcat(q,p);
	printf("%s\n",q);
}
