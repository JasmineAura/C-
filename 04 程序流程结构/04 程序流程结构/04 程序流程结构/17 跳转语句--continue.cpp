#include<iostream>
using namespace std;

int main17() 
{
	//continue���
	//��==ѭ�����==�У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
	//��0~100֮�䣬�����������ż�������
	for (int i = 0; i <= 100; i++) 
	{
		if (i % 2 == 0) 
		{
			continue;
		}
		cout << i << endl;
	}

	system("pause");

	return 0;
}