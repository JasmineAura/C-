#include <iostream>
using namespace std;

//单行注释

/*多行注释*/


/*main有且只有一个
在同一个项目中，如果要多次出现
必须"main1"  "main2"......出现,main永远比main1先加载，以此类推
否则报错，无法运行
*/
int main2()
{
	//cout << "文本" << endl;   输出“文本” 并清除缓存  endl清除缓存
	cout << "hello world" << endl;
	system("pause");

	return 0;
}