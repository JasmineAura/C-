#include<iostream>
using namespace std;

//����������
//�ȽϺ������Ƚ�2�����͵Ĵ�С

//��ǰ���߱����������Ĵ���
int max(int a, int b);

//****��������д��Σ�������ֻ��дһ��
int main5() 
{

	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//����
int max(int a, int b)
{
	return a > b ? a : b;
}