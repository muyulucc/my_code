#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>




/*
int main()
{
	int a, b, c;
	printf("请依次输入三个数字\n");
	scanf("%d%d%d", &a, &b, &c);  //赋值格式！！ scanf函数 要加#define _CRT_SECURE_NO_WARNINGS
	if (a < b)
		if (c < b)
			printf("最大数为%d\n", b);
		else
			printf("最大数为%d\n", c);
	else
		if (a < c)
			printf("最大数为%d\n", c);
		else
			printf("最大数为%d\n", a);
	return 0;
}


*/





/*
int main()
{
	int a, b;
	int c;
	printf("请输入两个数字\n");
	scanf("%d%d", &a, &b);
	c = a > b ? a : b;
		printf("最大值为%d", c);


	return EXIT_SUCCESS;
}

*/



/*
int main()
{
	int a, b, c, d;
	printf("请依次输入三个数字\n");
	scanf("%d%d%d", &a, &b, &c);
	d = a > b ? a : b;
	d = d > c ? d : c;
	printf("三个数中最大的是%d",d);



	return EXIT_SUCCESS;
}


*/



int main()
{
	int a, b, c,d;
	printf("输\n");
	scanf("%d%d%d",&a,&b,&c);
	d = a > b ? (a > c ? a : c) : (b > c ? b:c);
	printf("%d",d);

	return EXIT_SUCCESS;
}