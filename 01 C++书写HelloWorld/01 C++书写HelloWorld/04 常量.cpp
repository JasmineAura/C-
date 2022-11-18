#include<iostream>
using namespace std;
//1.   #define 名称 值
#define Day 7
int main4() 
{
	//常量，设置后不可更改
	
	//2.const  变量类型  变量名 = 常量值
	const int Month = 12;
	
	cout << "一年有"<<Month<<"个月" << endl;
	cout << "一周有" << Day << "天" << endl;


	system("pause");

	return 0;
}