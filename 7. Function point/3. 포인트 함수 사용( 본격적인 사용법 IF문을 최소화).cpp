#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

int div(int x, int y) {
	return x / y;
}

main()
{
	int which;
	int a,b,c;
	int i;
	int (*f[4])(int,int); // fountion ����Ʈ 4�� ����  *F[0,1,2,3]
	
	f[0] = add;
	f[1] = sub;
	f[2] = mul;
	f[3] = div;
	
	printf("== ��Ģ���� ����(1:����, 2:�E��, 3�Ӱ���, 4:������) ==\n");
	
	for (i=0; i<10; i++) {
		printf("������� �Ͻðڽ��ϱ�?(1,2,3,4,) ");
		scanf("%d",&which); 
		
		printf("ù���� �����ʹ�? ");
		scanf("%d",&a); 
		
		printf("�ι��� �����ʹ�? ");
		scanf("%d",&b); 
		
		c = (*f[which-1])(a,b);	
		printf("�������� %d �Դϴ�.\n",c);
		
			
/*		
		if (which == 1) {
			c = add(a,b);
		} else if (which == 2) {
			c = sub(a,b);
		} else if (which == 3) {
			c = mul(a,b);
		} else if (which == 4) {
			c = div(a,b);
		}
		
		printf("�������� %d �Դϴ�.\n",c);
*/
	} 
}
