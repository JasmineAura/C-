#include<iostream>
using namespace std;

int main2() 
{
	int a = 10;
	
	//引用的注意事项
	//1.引用必须初始化
	//----int &b;//错误，必须要初始化
	int &b = a;
	//2.引用一旦初始化，无法更改
	int c = 20;
	b = c;//赋值操作，而不是更改引用

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	system("pause");

	return 0;
}