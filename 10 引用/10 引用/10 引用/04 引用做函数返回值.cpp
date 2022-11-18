#include<iostream>
using namespace std;
//引用做函数返回值
//1.不要返回局部变量的引用
int& test01() 
{
	int a = 10;
	return a;
}

//2.函数的调用可以作为左值
int& test02() 
{
	static int a = 10;
	return a;
}


int main4() 
{
	/*int &ref = test01();
	cout << ref << endl;
	cout << ref << endl;*/

	int &ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	test02() = 1000;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}