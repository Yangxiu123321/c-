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
	
	//����������Ԫ��
	vector<int>::iterator iter1 = inve1.begin();
	cout << iter1[0] <<" "<< *iter1 << endl;
	for (vector<int>::iterator iter2 = inve2.begin(); iter2 != inve2.end(); ++iter2)
	{
		*iter2 = 0;
	}

}

