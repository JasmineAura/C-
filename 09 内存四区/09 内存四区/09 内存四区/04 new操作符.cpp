#include<iostream>
using namespace std;
//1.new的基本语法
int * funcc() 
{
	int * p = new int(10);//new返回的是该数据类型的指针
	return p;
}
void test01()
{
	int * p = funcc();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//如果想释放堆区的数组，利用delete关键字释放
	delete p;
	//cout << *p << endl;//报错
}

//2.在堆区利用new开辟数组
void test02() 
{
	//创建10个整型的数组
	int * arr = new int[10];
	for (int i = 0; i < 10; i++) 
	{
		arr[i] = i + 100;//给10个元素赋值，100~109
	}
	//输出数据
	for (int i = 0; i < 10; i++) 
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组
	delete[]arr;//释放数组时要加中括号
}


int main() 
{
	//test01();
	test02();

	system("pause");

	return 0;
}