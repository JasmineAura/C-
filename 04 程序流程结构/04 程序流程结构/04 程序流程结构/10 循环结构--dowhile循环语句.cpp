#include<iostream>
using namespace std;

int main10() 
{
	//do...while语句
	//输出0~9 10个数字
	int num = 0;
	do 
	{
		cout << num << endl;
		num++;
	} while (num < 10);
	//总结：与while循环区别在于，do...while先执行一次循环语句，再判断循环条件


	system("pause");

	return 0;
}