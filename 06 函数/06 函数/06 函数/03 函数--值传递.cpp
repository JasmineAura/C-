#include<iostream>
using namespace std;

//* ��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
	//*ֵ����ʱ��  ����βη�����������Ӱ��ʵ�� 

	//�������ֽ��н����ĺ���
	//�����������Ҫ����ֵ��������ʱ����Լ�һ��void
void swap(int num1, int num2)
{
	cout << "����ǰ:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return;//����Ҫ����ֵ��Ҳ���Բ�д

}

int main3() 
{
	int a = 10;
	int b = 20;
	cout << "mian�е� a = " << a << endl;
	cout << "mian�е� b = " << b << endl;
	swap(a, b);
	cout << "mian�е� a = " << a << endl;
	cout << "mian�е� b = " << b << endl;



	system("pause");

	return 0;
}