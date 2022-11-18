#include<iostream>
using namespace std;

//交换函数

//1.值传递
void myswap01(int a, int b) 
{
	int temp = a;
	a = b;
	b = temp;
	cout << "sawp01 a =" << a << endl;
	cout << "swap02 b = " << b << endl;
}

//2.地址传递
void myswap02(int * a, int * b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.引用传递
void myswap03(int &a,int &b) 
{
	int temp = a;
	a = b;
	b = temp;
}


int main3() 
{
	int a = 10;
	int b = 20;
	//myswap01(a, b);
	//myswap02(&a, &b);
	myswap03(a, b);
	cout << "a =" << a << endl;
	cout << "b = " << b << endl;


	system("pause");

	return 0;
}