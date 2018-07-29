#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
	// 初始化一个容器
	vector<int> stu_one;

	stu_one.insert(stu_one.begin(), 100);
	// 只有第一个有元素了才能在第二个中插入
	stu_one.insert(stu_one.begin() + 1, 10);
	cout << stu_one[1] << endl;

	return 0;
}