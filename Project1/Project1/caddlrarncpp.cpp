#include <iostream>
#include <vector>
using namespace std;
void main(void)
{
	//����vector��Ԥ�����ڴ�
	vector<int> inve1(10,-1);//10��Ԫ��
	cout << inve1[0] << endl;

	//����
	vector<int> inve2(inve1);
	cout << inve2[9] << endl;

	//��ĩβ���һ����
	inve1.push_back(19);
	cout << inve1[10] << endl;
	//inve1[11] = 20;���󣬱���Ҫ��֪Ԫ�ز�����������
	
}

