#include<iostream>
using namespace std;

int main15() 
{
	//乘法口诀表
	//利用嵌套循环，实现九九乘法表
	
	//大的for换行，小的for竖行
	
	for (int i = 1; i <=9; i++) 
	{
		cout << endl;
		for (int j = 1; j <= i; j++) 
		{
			cout  << j << "*" << i << "=" << j * i << "\t";
		}
	}



	system("pause");

	return 0;
}