#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main0622()
{
	printf("请输入重量\n");
	const	float price = 3.5;
	int weight;
	scanf("%d", &weight);
	float sum = weight * price;
	printf("%f\n",sum);
	return 0;
}

int main0622()
{
	int a;
	scanf("%d",&a);  //&表示取地址 不需要\n
	printf("%d\n", a);
	return 0;

}



	int main0622()
	{
		int a = 10;
		float b = 3.14;
		printf("%p\n", &a);
		printf("%p",&b);
		return 0;
	}

	int main()
	{
		int i;
		int sum=0;
		for (i=0;i<=100;i++)
		{
			sum = sum + i;
		}
		printf("%d\n", sum);
		return 0;
	}