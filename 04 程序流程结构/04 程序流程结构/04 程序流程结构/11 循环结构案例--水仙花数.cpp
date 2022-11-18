#include<iostream>
using namespace std;

int main11() 
{
	//水仙花数
	/*
	案例描述：水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
	例如：1^3 + 5^3+ 3^3 = 153
	请利用do...while语句，求出所有3位数中的水仙花数
	*/

	//1.设置变量
	//这个数字
	int num = 100;
	
	//若num==a^3+b^3+c^3,则满足条件
	do 
	{
		//abc,百位，十位，个位
		int a = num / 100;
		int b = (num - 100 * a) / 10;
		int c = num - 100 * a - 10 * b;
		if (num == a*a*a + b*b*b + c*c*c)
		{
			cout << num << endl;
		}
		num++;
	} while (num <= 999);



	system("pause");

	return 0;
}