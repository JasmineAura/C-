#include<iostream>
using namespace std;

int main1() 
{
	/*
	1. ` 数据类型  数组名[ 数组长度 ]; `
	2. `数据类型  数组名[ 数组长度 ] = { 值1，值2 ...};`
	3. `数据类型  数组名[ ] = { 值1，值2 ...};`
	*/
	//1. ` 数据类型  数组名[ 数组长度 ]; `
	int arr[5];
	//利用下标赋值
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//利用下标输出
	/*cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;*/

	//2. `数据类型  数组名[ 数组长度 ] = { 值1，值2 ...};`
	//如果没有全部赋值完，会默认赋值为0
	int arr2[5] = { 10,20,30,40,50 };
	/*for (int i = 0; i < 5; i++) 
	{
		cout << arr2[i] << endl;
	}*/

	//3. `数据类型  数组名[ ] = { 值1，值2 ...};`
	int arr3[] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++) 
	{
		cout << arr3[i] << endl;
	}






	system("pause");

	return 0;
}