#include<iostream>
using namespace std;

int main() 
{
	// 逻辑运算符--或
	int a = 10;
	int b = 10;
	cout << (a || b) << endl;

	a = 10;
	b = 0;
	cout << (a || b) << endl;

	a = 0;
	b = 10;
	cout << (a || b) << endl;
	
	a = 0;
	b = 0;
	cout << (a || b) << endl;
	//全假才假，有真即真

	system("pause");

	return 0;
}