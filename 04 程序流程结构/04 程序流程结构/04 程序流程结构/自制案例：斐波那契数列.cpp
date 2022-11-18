#include<iostream>
using namespace std;

int main100() 
{
	//斐波那契数列
	//特点：后一个数字等于前两个数之和
	//1.创建前2个数变量
	long long a = 0;//第一个数
	long long b = 1;//第二个数
	long long c = 0;//第三个数
	//2.用户输入数列的项数
	int nums = 0;
	cout << "请输入项数:" << endl;
	cin >> nums;
	//3.构建数列
	for (int i = 2; i < nums; i += 1) 
	{
		c = a + b;
		cout << c << endl;
		a = b;
		b = c;
	}
	system("pause");

	return 0;
}