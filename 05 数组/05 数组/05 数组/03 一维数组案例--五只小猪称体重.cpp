#include<iostream>
using namespace std;

int main3() 
{
	/***����������**
	��һ�������м�¼����ֻС������أ��磺int arr[5] = {300,350,200,400,250};
	�ҳ�����ӡ���ص�С�����ء�
	*/
	int arr[5] = { 300,350,200,400,250 };
	
	//����������һ�����ֵ����������ÿһ��Ԫ�أ����Ԫ�ظ�����������ֵ
	int max = 0;
	for (int i = 0; i < 5; i++) 
	{
		if (max < arr[i]) 
		{
			max = arr[i];
		}
	}
	cout << "���ص�С������Ϊ��" << max << endl;



	system("pause");

	return 0;
}