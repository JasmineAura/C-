#include<iostream>
using namespace std;

//定义一个加法函数
int add(int num1, int num2) 
{
	int sum = num1 + num2;
	return sum;
}

int main2() 
{
	//调用add函数
	int a = 10;
	int b = 20;

	int c = add(a, b);
	cout << "sum=" << c << endl;





	system("pause");

	return 0;
}