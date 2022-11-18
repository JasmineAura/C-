#include<iostream>
using namespace std;

//函数重载的注意事项
//1.引用作为重载的条件
void fun(int &a) 
{
	cout << "func(int &a)调用" << endl;
}

void fun(const int &a)
{
	cout << "func(const int &a)调用" << endl;
}
//2.函数重载碰到函数默认参数
void fun2(int a,int b = 10) 
{
	cout << "fun2(a,b)的调用" << endl;
}
void fun2(int a)
{
	cout << "fun2的调用" << endl;
}


int main() 
{
	int a = 10;
	fun(a);
	fun(10);
	//fun2(10);-----//当函数重载碰到默认参数，出现二义性

	system("pause");

	return 0;
}