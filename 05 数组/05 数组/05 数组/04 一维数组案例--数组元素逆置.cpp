#include<iostream>
using namespace std;

int main4() 
{
	//**案例描述：**请声明一个5个元素的数组，并且将元素逆置.
	//(如原数组元素为：1, 3, 2, 5, 4; 逆置后输出结果为:4, 5, 2, 3, 1);

	//解题思路：for循环进行重排
	int arr[5] = { 1,3,2,5,4 };
	for (int i = 4; i > -1; i--) 
	{
		cout << arr[i];
	}
	cout << endl;



	system("pause");

	return 0;
}