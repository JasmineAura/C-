#include<iostream>
using namespace std;
//�ַ���----������ʾ������ĸ
/*
	�÷��� char  ������ = '�ַ�'
	1.����ʱ�����õ�����������
	2.ֻ����һ���ַ������������ַ���
	�ַ���ֻռ��1���ֽ�
*/
int main4() 
{
	//������ʽ
	char ch = 'a';
	cout << ch << endl;
	//�ַ��ͱ�����ռ�ڴ��С
	cout << "�ַ��ͱ���ռ���ڴ�Ϊ��" << sizeof(char) << endl;
	//�ַ��ͱ�����������
	/*
	1.char ch2="b"  #�����õ�����
	2.char ch3 = 'cdefg' #ֻ����һ����ĸ�����������ַ���
	*/
	//�ַ��ͱ�����Ӧ��ASCII����
	//a-97 b-98   A-65 B-66
	cout << (int)ch << endl;
	system("pause");

	return 0;
}