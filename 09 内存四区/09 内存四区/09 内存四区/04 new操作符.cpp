#include<iostream>
using namespace std;
//1.new�Ļ����﷨
int * funcc() 
{
	int * p = new int(10);//new���ص��Ǹ��������͵�ָ��
	return p;
}
void test01()
{
	int * p = funcc();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//������ͷŶ��������飬����delete�ؼ����ͷ�
	delete p;
	//cout << *p << endl;//����
}

//2.�ڶ�������new��������
void test02() 
{
	//����10�����͵�����
	int * arr = new int[10];
	for (int i = 0; i < 10; i++) 
	{
		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ��100~109
	}
	//�������
	for (int i = 0; i < 10; i++) 
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	delete[]arr;//�ͷ�����ʱҪ��������
}


int main() 
{
	//test01();
	test02();

	system("pause");

	return 0;
}