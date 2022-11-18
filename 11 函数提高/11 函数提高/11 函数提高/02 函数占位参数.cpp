#include<iostream>
using namespace std;

//函数占位参数
//语法：返回值类型 函数名称 （数据类型）{}

//目前阶段的占位参数用不到，后期会用到
//占位参数还可以有默认参数
void func2(int a, int) 
{
	cout << "this is function" << endl;
}

int main2() 
{
	func2(10, 10);
	system("pause");

	return 0;
}