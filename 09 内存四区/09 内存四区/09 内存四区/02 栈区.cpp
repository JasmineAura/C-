#include<iostream>
using namespace std;

//ջ����ע������--��Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ͷ�

int* function() //�β�����Ҳ�����ջ��
{
	int a = 10;
	return &a;//���ؾֲ������ĵ�ַ
}

int main2() 
{
	//����function�ķ���ֵ
	int * p = function();
	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ�����֣���Ϊ�����������˱���
	cout << *p << endl;//�ڶ��β��ᱣ��


	system("pause");

	return 0;
}