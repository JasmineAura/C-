#include<iostream>
using namespace std;

int main2() 
{
	//ָ����ռ�ڴ�ռ�
	int a = 10;
	int * p = &a;
	//��32λϵͳ�£�����ʲô�������ͣ�ָ�붼ռ4���ֽ�
	//��64λϵͳ�£�����ʲô�������ͣ�ָ�붼ռ8���ֽ�
	cout << "sizeof (int *) =" << sizeof(int *) << endl;
	cout << "sizeof (int *) =" << sizeof(float *) << endl;
	cout << "sizeof (int *) =" << sizeof(double *) << endl;
	cout << "sizeof (int *) =" << sizeof(char *) << endl;

	system("pause");

	return 0;
}