#include<iostream>
using namespace std;

int * func() 
{
	//利用new关键字可以将数据开辟到堆区
	int * p =  new int(10);
	//指针本身也是个局部变量，也放在栈区
	//指针保存的数据放到了堆区
	return p;
	
}


int main3() 
{
	//在堆区开辟数据	
	int * p = func();
	cout << *p << endl;
	cout << *p << endl;
	

	system("pause");

	return 0;
}