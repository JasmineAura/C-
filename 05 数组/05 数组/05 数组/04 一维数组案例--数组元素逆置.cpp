#include<iostream>
using namespace std;

int main4() 
{
	//**����������**������һ��5��Ԫ�ص����飬���ҽ�Ԫ������.
	//(��ԭ����Ԫ��Ϊ��1, 3, 2, 5, 4; ���ú�������Ϊ:4, 5, 2, 3, 1);

	//����˼·��forѭ����������
	int arr[5] = { 1,3,2,5,4 };
	for (int i = 4; i > -1; i--) 
	{
		cout << arr[i];
	}
	cout << endl;



	system("pause");

	return 0;
}