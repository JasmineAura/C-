#include<iostream>
using namespace std;

int main2() 
{
	//�Ƿ���Խ�����Ϸ������12�꣬���ɽ��룬���򲻿���
	int age = 0;
	cout << "�������������:" << endl;
	cin >> age;
	cout << "�������Ϊ��" << age << "��" << endl;
	if (age >= 12) 
	{
		cout << "����Խ�����Ϸ" << endl;
	}
	else cout << "��δ��12���꣬���ɽ�����Ϸ" << endl;

	system("pause");

	return 0;
}