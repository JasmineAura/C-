#include<iostream>
using namespace std;

int main3() 
{
	//�û��������
	//����600������1��
	//����500�����϶���
	//����400����������
	//���������㣬��û����
	int score = 0;
	cout << "���������ķ���" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;
	if (score > 600) 
	{
		cout << "��ϲ��������һ��" << endl;
	}
	else if (score > 500) 
	{
		cout << "��ϲ�������˶���" << endl;
	}
	else if (score > 400) 
	{
		cout << "��ϲ������������" << endl;
	}
	else cout << "���ź�����û�п��ϴ�ѧ" << endl;


	system("pause");

	return 0;
}