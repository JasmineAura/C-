#include<iostream>
using namespace std;

int main1() 
{
	/*
	����if���
	�û����������������600����ϲ����1��
	*/
	int score = 0;
	cout << "���������ķ�����" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;
	if (score > 600) 
	{
		cout << "��ϲ��������һ��" << endl;
	}
	else cout << "���ź�����û�п���һ����ѧ" << endl;

	system("pause");

	return 0;
}