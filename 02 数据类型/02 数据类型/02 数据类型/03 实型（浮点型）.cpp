#include<iostream>
using namespace std;
/*
	��������������ʾС��
	float(7λ��Ч����)ռ��4�ֽ�
	double(15~16λ��Ч����)ռ��8�ֽ�
	Ĭ������£�����һ��С������ʾ6λ
*/
int main3() 
{
	float f1 = 3.142f;
	cout << f1 << endl;
	double d1 = 3.142;
	cout << d1 << endl;
	//������ռ�ռ�
	cout << "floatռ�õ��ڴ�Ϊ��" << sizeof(float) << endl;
	cout << "doubleռ�õ��ڴ�Ϊ��" << sizeof(double) << endl;
	//��ѧ������
	float f2 = 3e2;//3e2=3*10^2=300
	float f3 = 3e-2;//3e-2=3*10^-2=0.03
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;
}