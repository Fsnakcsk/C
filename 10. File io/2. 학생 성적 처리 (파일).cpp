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
	printf("���� ���� ���� �հ�\n");//  ����Ϳ��� ���  
	fprintf(outFile,"���� ���� ���� �հ�\n"); // ���Ͽ��� ���  
	for (i=0; i<n; i++) {
		printf("%5d%5d%5d%6d\n",kor[i],eng[i],math[i],total[i]); //  ����Ϳ��� ���
		fprintf(outFile,"%5d%5d%5d%6d\n",kor[i],eng[i],math[i],total[i]); //  ���Ͽ��� ���  
	}
	fclose(inFile);
	fclose(outFile); 
}
