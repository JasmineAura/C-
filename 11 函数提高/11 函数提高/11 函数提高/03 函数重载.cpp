#include<iostream>
using namespace std;

//��������---����ʹ��������ͬ
//�������ص���������
//1.ͬһ����������
//2.������������ͬ
//3.�����Ĳ������ͻ��������˳��ͬ
void func() 
{
	cout << "func�Ѿ����ã�����" << endl;
}

void func(int a)
{
	cout << "func(int a)�Ѿ����ã�����" << endl;
}

void func(double a)
{
	cout << "func(double a)�Ѿ����ã�����" << endl;
}

void func(int a,double b)
{
	cout << "func(int a,double b)�Ѿ����ã�����" << endl;
}

void func(double a, int b)
{
	cout << "func(double a,int b)�Ѿ����ã�����" << endl;
}

//!!!!!!!!�����ķ���ֵ��ͬ������Ϊ�������ص�����

int main3() 
{
	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 3);


	system("pause");

	return 0;
}