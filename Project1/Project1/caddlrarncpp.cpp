#include <iostream>
int main()
{/******************
 1.cin.getline()������ȣ��Ƚϴ�һЩ
 �������ȶ����ַ����� char a[20];
 Ȼ�� cin.getline(a,20);�������������
 �����������ͨ�����з���ȷ����β����������
 ���з�
 2.cin.get()�򽫻��з��������������
 �����������������ε���cin.get():
 cin.get(a,20);
 cin.get(b,20);
 ���������������cin.get(b,20)�޷����룬��Ϊ
 ���з�������������У��ڶ��ε���ʱ���ĵ�һ���ַ�����
 ���з��������޷������µ����ݡ���ô������Ӧ�����
 ������������أ�
 ͬ���Ĺ��򣬽�������������cin.get();�������е�����
 ֮�����cin.get();�����Ե����з���


 **************************/
	using namespace std;
	char name[20];
	char club[20];
	cout << "your name" << endl;
	cin.get(name, 20).get();
	cout << "your favoiate club" << endl;
	cin.get(club, 20).get();
	cout << "hello," << name << endl;
	cout << "This is " << club << " for you!" << endl;
	return 0;
}