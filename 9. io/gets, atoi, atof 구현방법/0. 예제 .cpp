#include <stdio.h>
#include <stdlib.h>

main()
{
	int c;
	
	for(c='0'; c<= '9'; c++) {
		printf("%c : %x\n",c,c);
	}
}
