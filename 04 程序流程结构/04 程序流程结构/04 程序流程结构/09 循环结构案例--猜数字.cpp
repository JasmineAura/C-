#include<iostream>
using namespace std;
//timeϵͳͷ�ļ�
#include<ctime>

int main9() 
{
	//������
	/*ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´���
	ʾ������ֹ�����С������¶Թ�ϲ���ʤ���������˳���Ϸ��*/


	//������������ӣ���ֹÿ�������һ��
	srand((unsigned int)time(NULL));

	
	//��չ�淨
	//ֻ�ܲ�5�Σ������϶�Ϊʧ��
	int times = 5;

	//1.ϵͳ���������
	int num = rand() % 100 + 1;

	//2.�����������
	int cai = 0;
	cout << "���������µ�����" << endl;
	cin >> cai;
	cout << "�����������Ϊ��" << cai << endl;
	
	//3.ϵͳ�ж��Ƿ���ȷ
	while (cai != num) 
	{
		times--;
		if (cai > num) 
		{
			cout << "��µĹ�����" << endl;
		}
		if (cai < num) 
		{
			cout << "��µĹ�С��" << endl;
		}
		if (times == 0) 
		{
			cout << "���ź�����û������" << endl;
			break;
		}
		
		cout << "�㻹��" << times << "�λ���" << endl;
		cout << "���������µ�����" << endl;
		cin >> cai;

	}
	if (cai == num) 
	{
		cout << "���������¶���" << endl;
	}
	
	




	system("pause");

	return 0;
}