#include<iostream>
using namespace std;

int main13() 
{
	//������
	/*������������1��ʼ��������100�� ������ָ�λ����7����
	������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ�
	��������ֱ�Ӵ�ӡ�����*/
	int a = 1;
	int b = 0;

	for (int num = 1; num < 101; num++) 
	{
		//aΪ��λ����bΪʮλ��
		 a = num % 10;
		 b = num / 10;
		 if (a == 7 || b == 7 || num%7==0) 
		 {
			 cout << "������" << endl;
		 }
		 else cout << num << endl;
	}


	system("pause");

	return 0;
}