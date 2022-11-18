#include<iostream>
using namespace std;
//字符型----用于显示单个字母
/*
	用法： char  变量名 = '字符'
	1.引用时必须用单引号括起来
	2.只能有一个字符，不可以是字符串
	字符型只占用1个字节
*/
int main4() 
{
	//创建方式
	char ch = 'a';
	cout << ch << endl;
	//字符型变量所占内存大小
	cout << "字符型变量占据内存为：" << sizeof(char) << endl;
	//字符型变量常见错误
	/*
	1.char ch2="b"  #必须用单引号
	2.char ch3 = 'cdefg' #只能有一个字母，不可以是字符串
	*/
	//字符型变量对应的ASCII编码
	//a-97 b-98   A-65 B-66
	cout << (int)ch << endl;
	system("pause");

	return 0;
}