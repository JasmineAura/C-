#include<iostream>
using namespace std;

int main15() 
{
	//�˷��ھ���
	//����Ƕ��ѭ����ʵ�־žų˷���
	
	//���for���У�С��for����
	
	for (int i = 1; i <=9; i++) 
	{
		cout << endl;
		for (int j = 1; j <= i; j++) 
		{
			cout  << j << "*" << i << "=" << j * i << "\t";
		}
	}



	system("pause");

	return 0;
}