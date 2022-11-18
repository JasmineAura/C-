#include<iostream>
using namespace std;

int main4() 
{
	//野指针
	int *p = ( int *)0x1100;
	cout << *p << endl;
	//空指针和野指针都不是我们申请的空间，因此不要访问。

	system("pause");

	return 0;
}