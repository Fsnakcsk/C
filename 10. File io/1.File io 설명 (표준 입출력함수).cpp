#include <stdio.h>

main()
{ 
	int total;
	int kor, eng, math;  
	int i;   
	
	for (i=0; i<10; i++) { 
	//	scanf("%d %d %d",&kor,&eng,&math);
		fscanf(stdin,"%d %d %d",&kor,&eng,&math);
		total = kor + eng + math;
	//	printf("sum = %d\n",total);
		fprintf(stdout,"sum = %d\n",total); 
	}
	
	/*	stdin�� stdout�� file point��� �Ѵ�.
		file point�� �������α׷���  
		�ܺνð��  �����͸� �ְ�ް� �ϴ� ����� �̸��̴�  .
	*/ 
}
