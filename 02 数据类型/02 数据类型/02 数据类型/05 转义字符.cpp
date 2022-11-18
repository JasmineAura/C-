#include<iostream>
using namespace std;
/*
	常用的转义字符：
	\n    换行
	\t    水平制表
	\\    代表\
*/
int main5() 
{
	//  \n
	cout << "hello world\n" << endl;
	//   \\
	由于有2个反斜杠，会被认作注释
	cout << "\\" << endl;    //只输入一个反斜杠会报错
	//   \t    \t默认占据8个空格   可以整齐地输出数据
	cout << "aaa\thelloworld" << endl;
	cout << "a\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl;

	system("pause");

	return 0;
}