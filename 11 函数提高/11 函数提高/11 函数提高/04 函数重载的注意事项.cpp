#include<iostream>
using namespace std;

//�������ص�ע������
//1.������Ϊ���ص�����
void fun(int &a) 
{
	cout << "func(int &a)����" << endl;
}

void fun(const int &a)
{
	cout << "func(const int &a)����" << endl;
}
//2.����������������Ĭ�ϲ���
void fun2(int a,int b = 10) 
{
	cout << "fun2(a,b)�ĵ���" << endl;
}
void fun2(int a)
{
	cout << "fun2�ĵ���" << endl;
}


int main() 
{
	int a = 10;
	fun(a);
	fun(10);
	//fun2(10);-----//��������������Ĭ�ϲ��������ֶ�����

	system("pause");

	return 0;
}