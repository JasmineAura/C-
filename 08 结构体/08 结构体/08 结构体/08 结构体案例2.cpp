#include<iostream>
using namespace std;
#include<string>

//案例描述
/*设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数
组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。*/

//创建英雄结构体
struct hero 
{
	string name;
	int age;
	string sex;
	
};

//通过年龄进行冒泡排序
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
//打印排序后的英雄信息
void printHero(hero arr[]) 
{
	for (int i = 0; i < 5; i++) 
	{
		cout << arr[i].name << "  " << arr[i].age << "  " << arr[i].sex << endl;
	}
}

int main() 
{
	//创建英雄数组
	hero Array[5] = 
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	//排序
	bubbleSort(Array, 5);
	//打印
	printHero(Array);

	system("pause");

	return 0;
}