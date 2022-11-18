#include<iostream>
using namespace std;

//交换函数
void swap01(int a, int b) 
{
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int *p1, int *p2) 
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main7() 
{
	//值传递
	// 值传递不会改变实参
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//地址传递
	//如果地址传递，可以修饰实参
	swap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}