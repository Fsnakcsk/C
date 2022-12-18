#include <stdio.h>
#include <stdlib.h>

int asdf(char name[], int *pos) {
	int i = 0;
	int value = 0;
	char tmp[BUFSIZ];
	
	if (*pos > 0 && name[*pos-1] == '\0') return -1;
	
	while(true) {
		tmp[i] = name[*pos];
		if (tmp[i] == ' ' || tmp[i] == '\0') {
			tmp[i] = '\0';
			*pos = *pos + 1; 
			break;			
		}
		i++;
		*pos = *pos + 1;
	}
	value = atoi(tmp);
	return value;
	

}

main()
{
	char name[BUFSIZ];
	
	int x = 0;
	int sum = 0;
	int i;
	
	
	for (i=0; i<3; i++) {
		gets(name);
		int pos = 0;
		sum = 0;
		
		while (true) {
			x = asdf(name,&pos);
			if (x < 0) break;
			sum = sum + x;
		}
		printf("%d\n",sum);
	}
	
	
	

	
	
	
	
}
