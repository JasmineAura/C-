#include<iostream>
using namespace std;
//��������������ֵ
//1.��Ҫ���ؾֲ�����������
int& test01() 
{
	int a = 10;
	return a;
}

//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02() 
{
	static int a = 10;
	return a;
}


int main4() 
{
	/*int &ref = test01();
	cout << ref << endl;
	cout << ref << endl;*/

	int &ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	test02() = 1000;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}