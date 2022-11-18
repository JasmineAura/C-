#include<iostream>
using namespace std;

int main7() 
{
	//逻辑运算符--假
	int a = 10;
	int b = 10;
	cout << (a&&b) << endl;

	a = 10;
	b = 0;
	cout << (a&&b) << endl;

	a = 0;
	b = 0;
	cout << (a&&b) << endl;
	//全真才真，一假全假

	system("pause");

	return 0;
}