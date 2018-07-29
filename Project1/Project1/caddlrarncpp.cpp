#include <vector>

using namespace std;

int main(void)
{
	// 初始化一个容器
	vector<int> stu_one;
	// 初始一个大小为10的向量
	vector<int> stu_two(10);
	// 初始一个大小为10的向量且初始值为1的向量
	vector<int> stu_three(10, 1);
    // 用stu_one初始化stu_four
	vector<int> stu_four(stu_one);
	// 将a向量中从第0个到第2个(共3个)作为向量b的初始值
	vector<int> stu_five(stu_one.begin(), stu_one.begin() + 2);

	return 0;
}