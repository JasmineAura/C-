#include<iostream>
using namespace std;

//����������ʽ
/*
1. �޲��޷�
2. �в��޷�
3. �޲��з�
4. �в��з�
*/

//1. �޲��޷�
void test1() 
{
	cout << "this is test1" << endl;
}

//2. �в��޷�
void test2(int a) 
{
	cout << "this is test2" << endl;
	cout << a << endl;
}

//3. �޲��з�
int test3() 
{
	cout << "this is test3" << endl;
	return 1000;
}

//4. �в��з�
int test4(int a) 
{
	cout << "this is test 4" << endl;
	return a;
}


int main4() 
{
	//1. �޲��޷���������
	test1();
	//2. �в��޷���������
	test2(100);
	//3. �޲��з���������
	int num1 = test3();
	cout << num1 << endl;
	//4. �в��з��ĺ�������
	int num2 = test4(10000);
	cout << num2 << endl;

	system("pause");

	return 0;
}