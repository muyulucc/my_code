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

// <>����ϵͳ�ļ�   ""�����Զ���
#include <stdio.h>   //����stdio.h�ñ�ע��   io��ʾ�������  .hͷ�ļ�
int main()   // int �������ͣ�����     main ����������� ��������ֻ��һ��������  �������ű�ʾ�����Ĳ���
{  
	printf("hello world");
 return 0;      //�ں����б������� ��main�����б��������� return �����ֵӦ�ú�int����������ͬ
}


//  ע�ͣ�1.//��б��  2./* */


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
//	value=system("calc");  // ˫б�ܣ���
//	//printf("%d\n,value");
//	printf("%d\n, value");
//	return 0;
//}
//�������ģ��� 20220621 �������0   �ش�printf�����ĸ�ʽ����


#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int value;
	value = system("calc");
	printf("%d\n",value);
	return 0;
}