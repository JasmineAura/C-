#include<iostream>
using namespace std;

//��ӡ���ݵĺ���
void showValue(const int & val) 
{
	//val = 1000;------//���󣬳��������޸�
	cout << val << endl;
}


int main() 
{
	//��������
	//ʹ�ó���:���������βη�ֹ�����
	
	//����const֮�󣬱������������Ϊ int temp = 10; const int &  ref = temp;
	//const int &ref = 10;//���ñ������úϷ����ڴ�ռ�
	//ref = 100;------//����const֮���Ϊֻ���������޸�

	int a = 100;
	showValue(a);


	system("pause");

	return 0;
}