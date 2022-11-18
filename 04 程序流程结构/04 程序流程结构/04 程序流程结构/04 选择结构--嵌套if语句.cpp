#include<iostream>
using namespace std;

int main4() 
{
	//用户输入高考分数
	/*
	如果大于600，则考上一本，大于500，考上二本，大于400，考上3本
	都不满足，都没考上
	在大于600的范围中，大于700，考上北大；大于650，考上清华；大于600，考上人大
	*/

	int score = 0;
	cout << "请输入您的分数：" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	if (score > 600) 
	{
		cout << "恭喜考上一本" << endl;
		if (score > 700) 
		{
			cout << "恭喜考上北大" << endl;
		}
		else if (score > 650) 
		{
			cout << "恭喜考上清华" << endl;
		}
		else cout << "恭喜考上人大" << endl;
	}
	else if (score > 500) 
	{
		cout << "恭喜考上二本" << endl;
	}
	else if (score > 400) 
	{
		cout << "恭喜考上三本" << endl;
	}
	else cout << "很遗憾，你没有考上本科大学" << endl;

	system("pause");

	return 0;
}