#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
	// ��ʼ��һ������
	// ������������ʱ���ʼ���������ǰ���Vector�Ķ���/������forѭ�������и�ֵ
	vector<int> stu_one;

	vector<int> stu_two;

	vector<int> stu_three;

	stu_two.push_back(1);
	stu_two.push_back(2);

	std::cout << stu_two[1] << std::endl;

	swap(stu_one, stu_two);

	std::cout << stu_one[1] << std::endl;

	stu_three.assign(stu_one.begin(), stu_one.end());

	std::cout << stu_three[1] << std::endl;

	return 0;
}