#include <map>
#include <string>
#include <iostream>

int main(void)
{
	// ��������map<����������������> ����;
	std::map<int,std::string> mapStudent;
	mapStudent.insert(std::pair<int,std::string>(1, "student_one"));
	mapStudent.insert(std::pair<int,std::string>(2, "student_two"));
	mapStudent.insert(std::pair<int,std::string>(3, "student_three"));

	std::map<int, std::string>::iterator iter = mapStudent.begin();
	std::map<int, std::string>::iterator itend = mapStudent.end();
	for (; iter != itend; iter++)
	{
		std::cout << iter->first << ' ' << iter->second << std::endl;
	} 
	return 0;
}