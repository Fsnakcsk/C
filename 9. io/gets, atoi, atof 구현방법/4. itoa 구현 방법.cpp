#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAX (100)

int getline(char s[], int limit) {
	int c,i;
	
	i = 0; 
	//  --limit는 버퍼 펌위(100)줄어지면서 범위를 넘지 않은 조건에서 실행 
	//                       getchar   	EOF    과      '\0' 둘다 끝을 알려서 
	while(--limit > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
}

int atoiX(char s[]) {
	int i, n, sign;
	
	//빈칸  엔트  탭키  만나면 실제데이터까지 지나가라 하는 for문이다.
	// 지나 가는 것은 i++로 해야 한다. 
	for (i=0; s[i] == ' ' || s[i] == '\n' || s[i] == '\t'; i++);
	
	sign = 1;
	if (s[i] == '+' || s[i] == '-')
		sign = (s[i++]=='+') ? 1 : -1; //산술 if문 예시: data = (a > 0) ? x : y  
		 //양수인지 음수이지 구하기 위한 if문  
	for (n=0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + s[i] - '0';  /* '0' = 48  
								  공식은 << a - '0'>>  예시 : '1'=49  그럼 49-48 = 1  
								  n = 10*n + s[i] -'0'  
								  */  
	return(sign * n); 
}

double atofX(char s[]) {
	double val,power;
	int i, n, sign;
	
	for (i=0; s[i]== ' ' || s[i] == '\n' || s[i]=='\t'; i++);
	
	sign =1;
	if(s[i]=='+' && s[i]=='-')
		sign = (s[i++]=='+') ? 1 : -1;
	
	for (val=0; s[i]>='0' && s[i]<='9'; i++)
		val = val * 10 + s[i] - '0';
	// 점을 만나면 for문에서 빠져나온다  .
	
	// 점을 인식하고 점 이후에 숫자를 계속 구한단. 
	if (s[i]=='.') i++;
	for(power = 1; s[i] >= '0' && s[i] <= '9'; i++) {
		val = 10 * val + s[i] - '0';
		power *= 10; 
	}
	return(sign * val / power);
}

main()
{
	int x;
	double y;
	char buffer[MAX];
	
	itoa(382,buffer,10); 
//     숫자 , 버퍼에 대입 , 10진수로 바꿈 
	printf("%s\n",buffer);
	
	sprintf(buffer,"%d",382);
	printf("%s\n",buffer);
//       382는 buffer에 대입해 buffer출력한다. 그럼 문자열로 바꾼다.
//       buffer는 char다  
	 
	sprintf(buffer,"%7.3f",382.456);
	buffer[3] = ':';
	strcat(buffer,"승률입니다.");
	printf("%s\n",buffer);
//		실수를 문자열로 바꿔서 출력. 
	/*
	printf("Type a integer number :");
	getline(buffer, MAX);
	x = atoiX(buffer);
	printf("integer : %d\n",x);
	
	printf("Type a double number : "); 
	getline(buffer, MAX);
	y = atofX(buffer);
	printf("double : %f\n",y);
	
	printf("Type a string : "); 
	getline(buffer, MAX);
	printf("string : %s\n",buffer);
	*/
}
