#include<iostream>
using namespace std;

int main7() 
{
	//�����Ӱ���� 
	//10 ~ 9   ����   
	// 8 ~ 7   �ǳ���
	// 6 ~ 5   һ��
	// 5������ ��Ƭ
	int score = 0;
	cout << "�����Ӱ����" << endl;
	cin >> score;
	cout << "��������Ϊ��" << score << endl;
	switch (score) 
	{
	case 10:cout << "����" << endl; break;
	case 9:cout << "����" << endl; break;
	case 8:cout << "�ǳ���" << endl; break;
	case 7:cout << "�ǳ���" << endl; break;
	case 6:cout << "һ��" << endl; break;
	case 5:cout << "һ��" << endl; break;
	default:cout << "��Ƭ" << endl; break;
	}

	//> ע��1��switch����б��ʽ����ֻ�������ͻ����ַ���
	//> ע��2��case�����û��break����ô�����һֱ����ִ��
	//> �ܽ᣺��if���ȣ����ڶ������ж�ʱ��switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����



	system("pause");

	return 0;
}