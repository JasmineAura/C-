#include<iostream>
using namespace std;
//time系统头文件
#include<ctime>

int main9() 
{
	//猜数字
	/*系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提
	示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。*/


	//生成随机数种子，防止每次随机数一样
	srand((unsigned int)time(NULL));

	
	//扩展玩法
	//只能猜5次，猜完认定为失败
	int times = 5;

	//1.系统生成随机数
	int num = rand() % 100 + 1;

	//2.玩家输入数字
	int cai = 0;
	cout << "输入你所猜的数字" << endl;
	cin >> cai;
	cout << "你输入的数字为：" << cai << endl;
	
	//3.系统判断是否正确
	while (cai != num) 
	{
		times--;
		if (cai > num) 
		{
			cout << "你猜的过大了" << endl;
		}
		if (cai < num) 
		{
			cout << "你猜的过小了" << endl;
		}
		if (times == 0) 
		{
			cout << "真遗憾，你没机会了" << endl;
			break;
		}
		
		cout << "你还有" << times << "次机会" << endl;
		cout << "输入你所猜的数字" << endl;
		cin >> cai;

	}
	if (cai == num) 
	{
		cout << "真聪明，你猜对了" << endl;
	}
	
	




	system("pause");

	return 0;
}