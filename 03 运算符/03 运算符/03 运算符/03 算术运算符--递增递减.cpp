#include<iostream>
using namespace std;

int main3() 
{
	//1.ǰ�õ���
	int a = 10;
	++a;// �൱��a+1
	cout << a << endl;
	//2.���õ���
	int b = 10;
	b++;//�൱��b+1
	cout << b << endl;
	//3.ǰ�úͺ��õ�����
	//ǰ�ã��Ƚ���++������б��ʽ����
	int c = 10;
	int d = ++c * 10;
	cout << d << endl;
	//����: �Ƚ��б��ʽ���㣬�����++
	int e = 10;
	int f = e++ * 10;
	cout << f << endl;

	system("pause");

	return 0;
}