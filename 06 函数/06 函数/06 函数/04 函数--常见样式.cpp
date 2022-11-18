#include<iostream>
using namespace std;

//函数常见样式
/*
1. 无参无返
2. 有参无返
3. 无参有返
4. 有参有返
*/

//1. 无参无返
void test1() 
{
	cout << "this is test1" << endl;
}

//2. 有参无返
void test2(int a) 
{
	cout << "this is test2" << endl;
	cout << a << endl;
}

//3. 无参有返
int test3() 
{
	cout << "this is test3" << endl;
	return 1000;
}

//4. 有参有返
int test4(int a) 
{
	cout << "this is test 4" << endl;
	return a;
}


int main4() 
{
	//1. 无参无返函数调用
	test1();
	//2. 有参无返函数调用
	test2(100);
	//3. 无参有返函数调用
	int num1 = test3();
	cout << num1 << endl;
	//4. 有参有返的函数调用
	int num2 = test4(10000);
	cout << num2 << endl;

	system("pause");

	return 0;
}