#include<iostream>
using namespace std;

int main6() 
{
	//三目运算符
	//创建3个变量a，b，c
	//目的：将变量a，b比较大小，较大的一个变量赋值给c
	//  语法：表达式1 ? 表达式2 ：表达式3
	//如果表达式1的值为真，执行表达式2，并返回表达式2的结果；
	//如果表达式1的值为假，执行表达式3，并返回表达式3的结果。
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c = " << c << endl;

	//C++中三目运算符返回的是变量,可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;



	system("pause");

	return 0;
}