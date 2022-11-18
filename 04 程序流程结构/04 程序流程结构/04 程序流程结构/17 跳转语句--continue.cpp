#include<iostream>
using namespace std;

int main17() 
{
	//continue语句
	//在==循环语句==中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
	//在0~100之间，有奇数输出，偶数不输出
	for (int i = 0; i <= 100; i++) 
	{
		if (i % 2 == 0) 
		{
			continue;
		}
		cout << i << endl;
	}

	system("pause");

	return 0;
}