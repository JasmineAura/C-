#include<iostream>
using namespace std;
#include<string> //用C++风格字符串时，要调用该头文件

//字符串，表示一串字符
int main6() 
{
	//C风格字符串
	//char 变量名[] = "字符串"
	//注意事项 1.必须加[]   2.必须用双引号，把字符串括起来
	char str[] = "hello world";
	cout << str << endl;

	//C++风格字符串
	//string 变量名 = "字符串"
	string str2 = "hello world";
	cout << str2 << endl;
	

	system("pause");

	return 0;
}