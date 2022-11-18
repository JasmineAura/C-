#include<iostream>
using namespace std;

//* 所谓值传递，就是函数调用时实参将数值传入给形参
	//*值传递时，  如果形参发生，并不会影响实参 

	//两个数字进行交换的函数
	//如果函数不需要返回值，声明的时候可以加一个void
void swap(int num1, int num2)
{
	cout << "交换前:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return;//不需要返回值，也可以不写

}

int main3() 
{
	int a = 10;
	int b = 20;
	cout << "mian中的 a = " << a << endl;
	cout << "mian中的 b = " << b << endl;
	swap(a, b);
	cout << "mian中的 a = " << a << endl;
	cout << "mian中的 b = " << b << endl;



	system("pause");

	return 0;
}