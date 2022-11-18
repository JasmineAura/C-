#include<iostream>
using namespace std;

int main3() 
{
	//空指针
	int * p = NULL;
	//空指针不可访问
	//0~255的内存是系统占用的，不可访问
	*p = 100;


	system("pause");

	return 0;
}