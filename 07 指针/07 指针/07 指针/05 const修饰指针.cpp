#include<iostream>
using namespace std;

int main5() 
{
	int a = 10;
	int b = 30;
	//1.const����ָ��(����ָ��)
	const int *p = &a;
	//*p = 20; //���󣬳���ָ��ָ���ֵ�������޸�
	p = &b;

	//2.const���γ�����ָ�볣����
	int * const p2 = &a;
	*p2 = 20;
	//p2 = &b;//����ָ�볣����ָ�򲻿����޸�

	//3.const����ָ��ͳ���
	const int * const p3 = &a;
	//*p3 = 20;//����
	//p3 = &b;//����


	system("pause");

	return 0;

}