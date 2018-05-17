#include <iostream>
#include <vector>
using namespace std;
void main(void)
{
	//创建vector，预分配内存
	vector<int> inve1(10,-1);//10个元素
	cout << inve1[0] << endl;

	//复制
	vector<int> inve2(inve1);
	cout << inve2[9] << endl;

	//在末尾添加一个数
	inve1.push_back(19);
	cout << inve1[10] << endl;
	//inve1[11] = 20;错误，必须要已知元素才能这样操作
	
	//迭代器访问元素
	vector<int>::iterator iter1 = inve1.begin();
	cout << iter1[0] <<" "<< *iter1 << endl;
	for (vector<int>::iterator iter2 = inve2.begin(); iter2 != inve2.end(); ++iter2)
	{
		*iter2 = 0;
	}

}

