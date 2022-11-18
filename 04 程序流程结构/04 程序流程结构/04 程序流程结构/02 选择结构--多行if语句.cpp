#include<iostream>
using namespace std;

int main2() 
{
	//是否可以进入游戏，若满12岁，即可进入，否则不可以
	int age = 0;
	cout << "请输入你的年龄:" << endl;
	cin >> age;
	cout << "你的年龄为：" << age << "岁" << endl;
	if (age >= 12) 
	{
		cout << "你可以进入游戏" << endl;
	}
	else cout << "你未满12周岁，不可进入游戏" << endl;

	system("pause");

	return 0;
}