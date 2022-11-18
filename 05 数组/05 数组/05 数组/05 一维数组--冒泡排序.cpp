#include<iostream>
using namespace std;

int main5() 
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	//开始冒泡排序
	//排序的总轮数=元素个数-1
	//每轮排序的次数 = 元素个数-排序轮数-1

	
	for (int i = 0; i < 9 - 1; i++) 
	{
		for (int j = 0; j < 9 - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//排序后结果
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}



	system("pause");

	return 0;
}