#include <stdio.h>
#define MAX (10)

main()
{
	int total[MAX];
	int kor[MAX], eng[MAX], math[MAX];
	int i,n; 
	FILE *inFile;
	FILE *outFile;
	
	inFile = fopen("input.txt","r"); 
	outFile = fopen("output.txt","w");
	
	fscanf(inFile,"%d",&n);
	for (i=0; i<n; i++) {
		fscanf(inFile,"%d %d %d",&kor[i],&eng[i],&math[i]);
		total[i] = kor[i] + eng[i] + math[i];

	}
	printf("국어 여어 수학 합계\n");//  모니터에도 출력  
	fprintf(outFile,"국어 여어 수학 합계\n"); // 파일에도 출력  
	for (i=0; i<n; i++) {
		printf("%5d%5d%5d%6d\n",kor[i],eng[i],math[i],total[i]); //  모니터에도 출력
		fprintf(outFile,"%5d%5d%5d%6d\n",kor[i],eng[i],math[i],total[i]); //  파일에도 출력  
	}
	fclose(inFile);
	fclose(outFile); 
}
