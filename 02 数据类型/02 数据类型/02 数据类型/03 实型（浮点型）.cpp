#include<iostream>
using namespace std;
/*
	浮点数：用来表示小数
	float(7位有效数字)占用4字节
	double(15~16位有效数字)占用8字节
	默认情况下，输入一个小数会显示6位
*/
int main3() 
{
	float f1 = 3.142f;
	cout << f1 << endl;
	double d1 = 3.142;
	cout << d1 << endl;
	//计算所占空间
	cout << "float占用的内存为：" << sizeof(float) << endl;
	cout << "double占用的内存为：" << sizeof(double) << endl;
	//科学计数法
	float f2 = 3e2;//3e2=3*10^2=300
	float f3 = 3e-2;//3e-2=3*10^-2=0.03
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;
}