#include<iostream>
using namespace std;

int main5()
{
	//有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？

	//1.将三只小猪的体重设为变量
	int A = 0;
	int B = 0;
	int C = 0;
	//2.输入体重
	cout << "请分别输入A,B,C三只小猪的重量" << endl;
	cin >> A;
	cin >> B;
	cin >> C;
	//3.显示体重
	cout << "小猪A的重量为：" << A << "kg" << endl;
	cout << "小猪B的重量为：" << B << "kg" << endl;
	cout << "小猪C的重量为：" << C << "kg" << endl;
	//4.比较小猪重量
	if (A > B) 
	{
		if (A > C) 
		{
			cout << "A小猪最重" << endl;
		}
		else cout << "C小猪最重" << endl;
	}
	else if (B > C) 
	{
		cout << "B小猪最重" << endl;
	}
	else cout << "C小猪最重" << endl;


	system("pause");

	return 0;
}