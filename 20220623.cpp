#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>




/*
int main()
{
	int a, b, c;
	printf("������������������\n");
	scanf("%d%d%d", &a, &b, &c);  //��ֵ��ʽ���� scanf���� Ҫ��#define _CRT_SECURE_NO_WARNINGS
	if (a < b)
		if (c < b)
			printf("�����Ϊ%d\n", b);
		else
			printf("�����Ϊ%d\n", c);
	else
		if (a < c)
			printf("�����Ϊ%d\n", c);
		else
			printf("�����Ϊ%d\n", a);
	return 0;
}


*/





/*
int main()
{
	int a, b;
	int c;
	printf("��������������\n");
	scanf("%d%d", &a, &b);
	c = a > b ? a : b;
		printf("���ֵΪ%d", c);


	return EXIT_SUCCESS;
}

*/



/*
int main()
{
	int a, b, c, d;
	printf("������������������\n");
	scanf("%d%d%d", &a, &b, &c);
	d = a > b ? a : b;
	d = d > c ? d : c;
	printf("��������������%d",d);



	return EXIT_SUCCESS;
}


*/



int main()
{
	int a, b, c,d;
	printf("��\n");
	scanf("%d%d%d",&a,&b,&c);
	d = a > b ? (a > c ? a : c) : (b > c ? b:c);
	printf("%d",d);

	return EXIT_SUCCESS;
}