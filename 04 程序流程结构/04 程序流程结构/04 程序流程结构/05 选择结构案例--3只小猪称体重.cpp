#include<iostream>
using namespace std;

int main5()
{
	//����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�

	//1.����ֻС���������Ϊ����
	int A = 0;
	int B = 0;
	int C = 0;
	//2.��������
	cout << "��ֱ�����A,B,C��ֻС�������" << endl;
	cin >> A;
	cin >> B;
	cin >> C;
	//3.��ʾ����
	cout << "С��A������Ϊ��" << A << "kg" << endl;
	cout << "С��B������Ϊ��" << B << "kg" << endl;
	cout << "С��C������Ϊ��" << C << "kg" << endl;
	//4.�Ƚ�С������
	if (A > B) 
	{
		if (A > C) 
		{
			cout << "AС������" << endl;
		}
		else cout << "CС������" << endl;
	}
	else if (B > C) 
	{
		cout << "BС������" << endl;
	}
	else cout << "CС������" << endl;


	system("pause");

	return 0;
}