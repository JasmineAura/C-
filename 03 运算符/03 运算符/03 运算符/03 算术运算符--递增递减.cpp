#include<iostream>
using namespace std;

int main3() 
{
	//1.前置递增
	int a = 10;
	++a;// 相当于a+1
	cout << a << endl;
	//2.后置递增
	int b = 10;
	b++;//相当于b+1
	cout << b << endl;
	//3.前置和后置的区别
	//前置：先进行++，后进行表达式运算
	int c = 10;
	int d = ++c * 10;
	cout << d << endl;
	//后置: 先进行表达式运算，后进行++
	int e = 10;
	int f = e++ * 10;
	cout << f << endl;

	system("pause");

	return 0;
}