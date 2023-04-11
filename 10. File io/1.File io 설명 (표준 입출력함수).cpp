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
	
	/*	stdin과 stdout는 file point라고 한다.
		file point는 응용프로그램이  
		외부시계와  데이터를 주고받고 하는 통로의 이름이다  .
	*/ 
}
