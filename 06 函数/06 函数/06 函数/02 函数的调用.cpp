#include<iostream>
using namespace std;

//����һ���ӷ�����
int add(int num1, int num2) 
{
	int sum = num1 + num2;
	return sum;
}

int main2() 
{
	//����add����
	int a = 10;
	int b = 20;

	int c = add(a, b);
	cout << "sum=" << c << endl;





	system("pause");

	return 0;
}