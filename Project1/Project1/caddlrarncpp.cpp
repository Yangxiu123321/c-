#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
	// ��ʼ��һ������
	vector<int> stu_one;

	stu_one.insert(stu_one.begin(), 100);
	// ֻ�е�һ����Ԫ���˲����ڵڶ����в���
	stu_one.insert(stu_one.begin() + 1, 10);
	cout << stu_one[1] << endl;

	return 0;
}