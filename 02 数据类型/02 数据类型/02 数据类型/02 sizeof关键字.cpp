#include<iostream>
using namespace std;

int main2() 
{
	//���� short(2)     int(4)      long(4)      long long(8)
	//����sizeof�������������ռ�ڴ��С
	//�﷨sizeof(��������/����)
	//   short  <  int  <=  long  <=  long long
	short num1 = 10;
	cout << "short����������ռ�ڴ�Ϊ��" << sizeof(short) << endl;
	cout << "short����������ռ�ڴ�Ϊ��" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "int����������ռ�ڴ�Ϊ��" << sizeof(int) << endl;
	cout << "int����������ռ�ڴ�Ϊ��" << sizeof(num2) << endl;
	long num3 = 10;
	cout << "long����������ռ�ڴ�Ϊ��" << sizeof(long) << endl;
	cout << "long����������ռ�ڴ�Ϊ��" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long long����������ռ�ڴ�Ϊ��" << sizeof(long long) << endl;
	cout << "long long����������ռ�ڴ�Ϊ��" << sizeof(num4) << endl;
	system("pause");

	return 0;
}