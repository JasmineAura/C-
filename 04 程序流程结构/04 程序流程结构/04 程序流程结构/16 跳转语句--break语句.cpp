#include<iostream>
using namespace std;

int main16() 
{
	//break使用的几种情况
	//1.出现在switch条件语句中，作用是终止case并跳出switch
	/*cout << "请选择您副本的难度：" << endl;
	cout << "1、简单" << endl;
	cout << "2、普通" << endl;
	cout << "3、困难" << endl;
	int select = 0;
	cin >> select;
	switch (select) 
	{
	case 1:cout << "您选择的是简单难度" << endl; break;
	case 2:cout << "您选择的是普通难度" << endl; break;
	case 3:cout << "您选择的是困难难度" << endl; break;
	}*/

	//2、在循环语句中用break
	//打印0~9，到4退出循环
	/*for (int i = 0; i < 10; i++) 
	{
		if (i == 5) 
		{
			break;
		}
		cout << i << endl;
	}*/

	//3.在嵌套循环语句中使用break，退出内层循环
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			if (j == 5)break;
			cout << "* ";
		}
		cout << endl;
	}


	system("pause");

	return 0;
}