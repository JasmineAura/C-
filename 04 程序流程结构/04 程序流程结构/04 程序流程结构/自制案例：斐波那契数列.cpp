#include<iostream>
using namespace std;

int main100() 
{
	//쳲���������
	//�ص㣺��һ�����ֵ���ǰ������֮��
	//1.����ǰ2��������
	long long a = 0;//��һ����
	long long b = 1;//�ڶ�����
	long long c = 0;//��������
	//2.�û��������е�����
	int nums = 0;
	cout << "����������:" << endl;
	cin >> nums;
	//3.��������
	for (int i = 2; i < nums; i += 1) 
	{
		c = a + b;
		cout << c << endl;
		a = b;
		b = c;
	}
	system("pause");

	return 0;
}