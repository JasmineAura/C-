#include<iostream>
using namespace std;

int main() 
{
	//goto
	//������������ת���
	//�����ǵ����ƴ��ڣ�ִ�е�goto���ʱ������ת����ǵ�λ��

	cout << "1xxxxxxx" << endl;
	cout << "2xxxxxxx" << endl;
	goto FLAG;
	cout << "3xxxxxxx" << endl;
	cout << "4xxxxxxx" << endl;
	FLAG:
	cout << "5xxxxxxx" << endl;



	system("pause");

	return 0;
}