#include<iostream>
using namespace std;

int main3() 
{
	/***案例描述：**
	在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
	找出并打印最重的小猪体重。
	*/
	int arr[5] = { 300,350,200,400,250 };
	
	//方法：设置一个最大值变量，访问每一个元素，如果元素更大，则更新最大值
	int max = 0;
	for (int i = 0; i < 5; i++) 
	{
		if (max < arr[i]) 
		{
			max = arr[i];
		}
	}
	cout << "最重的小猪体重为：" << max << endl;



	system("pause");

	return 0;
}