#include<iostream>
using namespace std;

int main5() 
{
	int a = 10;
	int b = 30;
	//1.const修饰指针(常量指针)
	const int *p = &a;
	//*p = 20; //错误，常量指针指向的值不可以修改
	p = &b;

	//2.const修饰常量（指针常量）
	int * const p2 = &a;
	*p2 = 20;
	//p2 = &b;//错误，指针常量的指向不可以修改

	//3.const修饰指针和常量
	const int * const p3 = &a;
	//*p3 = 20;//错误
	//p3 = &b;//错误


	system("pause");

	return 0;

}