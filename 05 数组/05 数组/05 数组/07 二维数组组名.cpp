#include<iostream>
using namespace std;

int main7() 
{
	//��ά��������
	/*
	* �鿴��ά������ռ�ڴ�ռ�
	* ��ȡ��ά�����׵�ַ
	*/
	//�ڴ�ռ�
	int arr[2][3] = 
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "������ά������ռ�ڴ��СΪ:" << sizeof(arr) << endl;
	cout << "һ�ж�ά������ռ�ڴ��СΪ:" << sizeof(arr[0]) << endl;
	cout << "ÿ��Ԫ����ռ�ڴ��СΪ��" << sizeof(arr[0][0]) << endl;

	cout << "��ά�����������" << sizeof(arr) / sizeof(arr[2]) << endl;
	cout << "��ά�����������" << sizeof(arr[2]) / sizeof(arr[0][0]) << endl;

	//��ַ
	cout << "��ά�����׵�ַ��" << int(arr) << endl;
	cout << "��ά�����һ�е�ַ" << int(arr[0]) << endl;
	cout << "��ά����ڶ��е�ַ" << int(arr[1]) << endl;
	cout << "��һ��Ԫ�ص�ַ" << int(&arr[0][0]) << endl;
	cout << "�ڶ���Ԫ�ص�ַ" << int(&arr[0][1]) << endl;

	//> ��ά�������������������׵�ַ
	//> �ܽ�2���Զ�ά����������sizeofʱ�����Ի�ȡ������ά����ռ�õ��ڴ�ռ��С

	system("pause");

	return 0;
}