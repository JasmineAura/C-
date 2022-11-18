#include<iostream>
using namespace std;

int main7() 
{
	//1.创建bool数据类型
	bool flag = true;
	cout << flag << endl;//真为1
	flag = false;
	cout << flag << endl;//假为0
	//2.查看bool数据类型所占内存空间
	cout << "布尔bool数据类型所占内存空间为：" << sizeof(bool) << endl;

	system("pause");

	return 0;
}