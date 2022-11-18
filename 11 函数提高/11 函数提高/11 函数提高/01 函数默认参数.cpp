#include<iostream>
using namespace std;

//函数默认参数
//如果自己传入参数，则用自己的数据，如果没有，用默认值
//语法：返回值类型  函数名称  （形参=默认值）{}
int func1(int a, int b = 20, int c = 30) 
{
	return a + b + c;
}
//注意事项
//1.如果某个位置已经有了默认参数，从这个位置从左往右往后，都必须有默认值
//2.如果函数的声明有了默认参数，那么函数的实现就不能有默认参数


int main1() 
{
	cout << func1(10) << endl;

	system("pause");

	return 0;
}