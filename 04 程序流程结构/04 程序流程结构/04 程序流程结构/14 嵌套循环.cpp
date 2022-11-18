#include<iostream>
using namespace std;

int main14() 
{
	//嵌套循环
	//在循环体中再嵌套一层循环，解决一些实际问题
	//打印10*10的星图
	//外层循环执行1次，内层循环执行1轮
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			cout << "* ";
		}
		cout<<endl;
	}



	system("pause");

	return 0;
}