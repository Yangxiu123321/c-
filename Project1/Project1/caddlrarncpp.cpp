#include <vector>

using namespace std;

int main(void)
{
	// ��ʼ��һ������
	vector<int> stu_one;
	// ��ʼһ����СΪ10������
	vector<int> stu_two(10);
	// ��ʼһ����СΪ10�������ҳ�ʼֵΪ1������
	vector<int> stu_three(10, 1);
    // ��stu_one��ʼ��stu_four
	vector<int> stu_four(stu_one);
	// ��a�����дӵ�0������2��(��3��)��Ϊ����b�ĳ�ʼֵ
	vector<int> stu_five(stu_one.begin(), stu_one.begin() + 2);

	return 0;
}