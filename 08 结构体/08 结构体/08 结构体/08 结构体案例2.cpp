#include<iostream>
using namespace std;
#include<string>

//��������
/*���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;�����ṹ�����飬��
���д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����*/

//����Ӣ�۽ṹ��
struct hero 
{
	string name;
	int age;
	string sex;
	
};

//ͨ���������ð������
void bubbleSort(hero arr[], int len) 
{
	for (int i = 0; i < len - 1; i++) 
	{
		for (int j = 0; j < len - i - 1; j++) 
		{
			if (arr[j].age > arr[j + 1].age) 
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}
	}
}
//��ӡ������Ӣ����Ϣ
void printHero(hero arr[]) 
{
	for (int i = 0; i < 5; i++) 
	{
		cout << arr[i].name << "  " << arr[i].age << "  " << arr[i].sex << endl;
	}
}

int main() 
{
	//����Ӣ������
	hero Array[5] = 
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	//����
	bubbleSort(Array, 5);
	//��ӡ
	printHero(Array);

	system("pause");

	return 0;
}