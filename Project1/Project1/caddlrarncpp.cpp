#include <iostream>
#include <string>
//����������������е��Ҳ�����
using std::cout;
using std::endl;
using std::cin;
using std::string;

void main(void)
{
	string s("yang is good\r\n");
	//size empty
	cout << s.size() << s.empty() << endl;
	
	//s.size()���ص�ʱstring::size_type���Ϳ�����usigned�ĺܶ����ͣ���֤�㹻��
	
	//����ֵ
	string ss;
	ss = s;
	cout << ss << endl;

	//�������
	string add;
	add = s + ss;
	cout << add << endl;

	//�±�����
	cout << add[0] << endl;

}

