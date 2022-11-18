#include<iostream>
using namespace std;

int main1() 
{
	/*
	单行if语句
	用户输入分数，若高于600，则恭喜考上1本
	*/
	int score = 0;
	cout << "请输入您的分数：" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	if (score > 600) 
	{
		cout << "恭喜您考上了一本" << endl;
	}
	else cout << "很遗憾，你没有考上一本大学" << endl;

	system("pause");

	return 0;
}