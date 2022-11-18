#include<iostream>
using namespace std;

int main7() 
{
	//二维数组组名
	/*
	* 查看二维数组所占内存空间
	* 获取二维数组首地址
	*/
	//内存空间
	int arr[2][3] = 
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "整个二维数组所占内存大小为:" << sizeof(arr) << endl;
	cout << "一行二维数组所占内存大小为:" << sizeof(arr[0]) << endl;
	cout << "每个元素所占内存大小为：" << sizeof(arr[0][0]) << endl;

	cout << "二维数组的行数：" << sizeof(arr) / sizeof(arr[2]) << endl;
	cout << "二维数组的列数：" << sizeof(arr[2]) / sizeof(arr[0][0]) << endl;

	//地址
	cout << "二维数组首地址：" << int(arr) << endl;
	cout << "二维数组第一行地址" << int(arr[0]) << endl;
	cout << "二维数组第二行地址" << int(arr[1]) << endl;
	cout << "第一个元素地址" << int(&arr[0][0]) << endl;
	cout << "第二个元素地址" << int(&arr[0][1]) << endl;

	//> 二维数组名就是这个数组的首地址
	//> 总结2：对二维数组名进行sizeof时，可以获取整个二维数组占用的内存空间大小

	system("pause");

	return 0;
}