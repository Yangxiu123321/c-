//�����֣������鷽ʽ�������ݣ��������˵��  

#include <map>  

#include <string>  

#include <iostream>  

using namespace std;

int main(void)

{

	map<int, string> mapStudent;

	mapStudent.insert(std::pair<int,std::string>(1,"stu_one"));
	mapStudent.insert(std::pair<int, std::string>(2, "std_two"));
	mapStudent.insert(std::pair<int, std::string>(3, "std_three"));

    // erase�Ƴ�map�е�Ԫ��
	// �õ�����ɾ��
	map<int, std::string>::iterator iter;

	iter = mapStudent.find(1);
	mapStudent.erase(iter);
	int n = mapStudent.erase(1);
	// ��Ƭɾ��
	mapStudent.erase(mapStudent.begin(), mapStudent.end());
	cout << mapStudent.size() << std::endl;
	return 0;
}