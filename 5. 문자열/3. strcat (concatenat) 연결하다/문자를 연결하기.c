#include <stdio.h>
#include <string.h>
main()
{
	char *p = "Taegyun";
	char q[30]; 
	
	//strcat �Ǵ� strcpy �����ؾ� �� ����
	// ������ �˳��ϰ� ������ �Ѵ� 
	// LOCAL vaverble ó�� �����ϰ� ������ ������ �� �־�� �� 
	
	strcpy(q,"kim");
	printf("%s\n",q);
	strcat(q,p);
	strcat(q,", how are you?");
	printf("%s\n",q);
}
