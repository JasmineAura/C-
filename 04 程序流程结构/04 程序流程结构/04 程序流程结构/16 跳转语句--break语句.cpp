#include<iostream>
using namespace std;

int main16() 
{
	//breakʹ�õļ������
	//1.������switch��������У���������ֹcase������switch
	/*cout << "��ѡ�����������Ѷȣ�" << endl;
	cout << "1����" << endl;
	cout << "2����ͨ" << endl;
	cout << "3������" << endl;
	int select = 0;
	cin >> select;
	switch (select) 
	{
	case 1:cout << "��ѡ����Ǽ��Ѷ�" << endl; break;
	case 2:cout << "��ѡ�������ͨ�Ѷ�" << endl; break;
	case 3:cout << "��ѡ����������Ѷ�" << endl; break;
	}*/

	//2����ѭ���������break
	//��ӡ0~9����4�˳�ѭ��
	/*for (int i = 0; i < 10; i++) 
	{
		if (i == 5) 
		{
			break;
		}
		cout << i << endl;
	}*/

	//3.��Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ��
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			if (j == 5)break;
			cout << "* ";
		}
		cout << endl;
	}


	system("pause");

	return 0;
}