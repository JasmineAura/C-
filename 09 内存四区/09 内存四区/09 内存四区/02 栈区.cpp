#include<iostream>
using namespace std;

//栈区的注意事项--不要返回局部变量的地址
//栈区的数据由编译器管理释放

int* function() //形参数据也会放在栈区
{
	int a = 10;
	return &a;//返回局部变量的地址
}

int main2() 
{
	//接受function的返回值
	int * p = function();
	cout << *p << endl;//第一次可以打印正确的数字，因为编译器进行了保留
	cout << *p << endl;//第二次不会保留


	system("pause");

	return 0;
}