#include<iostream>
using namespace std;

int main5() 
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	//��ʼð������
	//�����������=Ԫ�ظ���-1
	//ÿ������Ĵ��� = Ԫ�ظ���-��������-1

	
	for (int i = 0; i < 9 - 1; i++) 
	{
		for (int j = 0; j < 9 - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//�������
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}



	system("pause");

	return 0;
}