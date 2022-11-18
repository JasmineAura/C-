#include<iostream>
using namespace std;

int main() 
{
	//goto
	//可以无条件跳转语句
	//如果标记的名称存在，执行到goto语句时，会跳转到标记的位置

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