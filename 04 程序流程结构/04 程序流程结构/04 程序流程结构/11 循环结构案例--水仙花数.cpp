#include<iostream>
using namespace std;

int main11() 
{
	//ˮ�ɻ���
	/*
	����������ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
	���磺1^3 + 5^3+ 3^3 = 153
	������do...while��䣬�������3λ���е�ˮ�ɻ���
	*/

	//1.���ñ���
	//�������
	int num = 100;
	
	//��num==a^3+b^3+c^3,����������
	do 
	{
		//abc,��λ��ʮλ����λ
		int a = num / 100;
		int b = (num - 100 * a) / 10;
		int c = num - 100 * a - 10 * b;
		if (num == a*a*a + b*b*b + c*c*c)
		{
			cout << num << endl;
		}
		num++;
	} while (num <= 999);



	system("pause");

	return 0;
}