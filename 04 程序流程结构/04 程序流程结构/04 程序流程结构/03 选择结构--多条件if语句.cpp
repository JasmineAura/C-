#include<iostream>
using namespace std;

int main3() 
{
	//用户输入分数
	//高于600，则考上1本
	//高于500，则考上二本
	//高于400，则考上三本
	//若都不满足，则都没考上
	int score = 0;
	cout << "请输入您的分数" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	if (score > 600) 
	{
		cout << "恭喜您考上了一本" << endl;
	}
	else if (score > 500) 
	{
		cout << "恭喜您考上了二本" << endl;
	}
	else if (score > 400) 
	{
		cout << "恭喜您考上了三本" << endl;
	}
	else cout << "很遗憾，你没有考上大学" << endl;


	system("pause");

	return 0;
}