#include<iostream>
using namespace std;

int main4() 
{
	//�û�����߿�����
	/*
	�������600������һ��������500�����϶���������400������3��
	�������㣬��û����
	�ڴ���600�ķ�Χ�У�����700�����ϱ��󣻴���650�������廪������600�������˴�
	*/

	int score = 0;
	cout << "���������ķ�����" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;
	if (score > 600) 
	{
		cout << "��ϲ����һ��" << endl;
		if (score > 700) 
		{
			cout << "��ϲ���ϱ���" << endl;
		}
		else if (score > 650) 
		{
			cout << "��ϲ�����廪" << endl;
		}
		else cout << "��ϲ�����˴�" << endl;
	}
	else if (score > 500) 
	{
		cout << "��ϲ���϶���" << endl;
	}
	else if (score > 400) 
	{
		cout << "��ϲ��������" << endl;
	}
	else cout << "���ź�����û�п��ϱ��ƴ�ѧ" << endl;

	system("pause");

	return 0;
}