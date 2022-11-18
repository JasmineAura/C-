#include<iostream>
using namespace std;

//函数的声明
//比较函数，比较2个整型的大小

//提前告诉编译器函数的存在
int max(int a, int b);

//****声明可以写多次，但定义只能写一次
int main5() 
{

	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//定义
int max(int a, int b)
{
	return a > b ? a : b;
}