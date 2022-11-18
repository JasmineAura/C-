#include<iostream>
using namespace std;

int main6() 
{

	//指针和数组
	//利用指针访问数组中的元素
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int * p = arr;

	//访问每一个元素
	for (int i = 0; i < 10; i++) 
	{
		cout << *p << endl;
		p++;
	}


	system("pause");

	return 0;
}