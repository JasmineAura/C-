#include<iostream>
using namespace std;

int main2() 
{
	//指针所占内存空间
	int a = 10;
	int * p = &a;
	//在32位系统下，无论什么数据类型，指针都占4个字节
	//在64位系统下，无论什么数据类型，指针都占8个字节
	cout << "sizeof (int *) =" << sizeof(int *) << endl;
	cout << "sizeof (int *) =" << sizeof(float *) << endl;
	cout << "sizeof (int *) =" << sizeof(double *) << endl;
	cout << "sizeof (int *) =" << sizeof(char *) << endl;

	system("pause");

	return 0;
}