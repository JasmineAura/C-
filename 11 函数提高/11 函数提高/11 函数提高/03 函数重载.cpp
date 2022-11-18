#include<iostream>
using namespace std;

//函数重载---可以使函数名相同
//函数重载的满足条件
//1.同一个作用域下
//2.函数的名称相同
//3.函数的参数类型或个数，或顺序不同
void func() 
{
	cout << "func已经调用！！！" << endl;
}

void func(int a)
{
	cout << "func(int a)已经调用！！！" << endl;
}

void func(double a)
{
	cout << "func(double a)已经调用！！！" << endl;
}

void func(int a,double b)
{
	cout << "func(int a,double b)已经调用！！！" << endl;
}

void func(double a, int b)
{
	cout << "func(double a,int b)已经调用！！！" << endl;
}

//!!!!!!!!函数的返回值不同不能作为函数重载的条件

int main3() 
{
	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 3);


	system("pause");

	return 0;
}