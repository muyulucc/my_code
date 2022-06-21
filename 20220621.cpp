//20220621

/*
#include <iostream>
using namespace std;

//int main()
//{
//	cout << "mcc" << endl;
//	system("pause");
//	return 0;
//
//}
*/


/*

// <>导入系统文件   ""导入自定义
#include <stdio.h>   //包含stdio.h得标注库   io表示输入输出  .h头文件
int main()   // int 数据类型：整型     main 程序的主函数 程序有且只有一个主函数  （）括号表示函数的参数
{  
	printf("hello world");
 return 0;      //在函数中表函数结束 在main函数中表程序结束。 return 后的数值应该和int数据类型相同
}


//  注释：1.//正斜杠  2./* */


/*
#include <stdlib.h>
int main()
{
	system("mspaint");
	return 0;
}
*/



//#include <stdlib.h>
//#include <stdio.h>
//int main(void)
//{
// int value;
// 
//	value=system("calc");  // 双斜杠！！
//	//printf("%d\n,value");
//	printf("%d\n, value");
//	return 0;
//}
//错误在哪？？ 20220621 不能输出0   回答：printf函数的格式！！


#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int value;
	value = system("calc");
	printf("%d\n",value);
	return 0;
}