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

    // count����map���Ƿ���key������1���У�����0��û�С�
	int isKey = 0;
	isKey = mapStudent.count(3);
	std::cout << isKey << std::endl;
	return 0;
}