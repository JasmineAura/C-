#include<iostream>
using namespace std;

int * func() 
{
	//����new�ؼ��ֿ��Խ����ݿ��ٵ�����
	int * p =  new int(10);
	//ָ�뱾��Ҳ�Ǹ��ֲ�������Ҳ����ջ��
	//ָ�뱣������ݷŵ��˶���
	return p;
	
}


int main3() 
{
	//�ڶ�����������	
	int * p = func();
	cout << *p << endl;
	cout << *p << endl;
	

	system("pause");

	return 0;
}