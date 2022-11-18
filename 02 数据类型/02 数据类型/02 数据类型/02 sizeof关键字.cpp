#include<iostream>
using namespace std;

int main2() 
{
	//整型 short(2)     int(4)      long(4)      long long(8)
	//利用sizeof求出数据类型所占内存大小
	//语法sizeof(变量类型/变量)
	//   short  <  int  <=  long  <=  long long
	short num1 = 10;
	cout << "short数据类型所占内存为：" << sizeof(short) << endl;
	cout << "short数据类型所占内存为：" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "int数据类型所占内存为：" << sizeof(int) << endl;
	cout << "int数据类型所占内存为：" << sizeof(num2) << endl;
	long num3 = 10;
	cout << "long数据类型所占内存为：" << sizeof(long) << endl;
	cout << "long数据类型所占内存为：" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long long数据类型所占内存为：" << sizeof(long long) << endl;
	cout << "long long数据类型所占内存为：" << sizeof(num4) << endl;
	system("pause");

	return 0;
}