//�����֣������鷽ʽ�������ݣ��������˵��  

#include <map>  

#include <string>  

#include <iostream>  

using namespace std;

int main(void)

{

	map<int, string> mapStudent;
	map<int, string> mapTeacher;

	mapStudent.insert(std::pair<int,std::string>(1,"stu_one"));
	mapStudent.insert(std::pair<int, std::string>(2, "stu_two"));
	mapStudent.insert(std::pair<int, std::string>(3, "stu_three"));

	mapTeacher.insert(std::pair<int, std::string>(1, "tea_one"));
	mapTeacher.insert(std::pair<int, std::string>(2, "tea_two"));
	mapTeacher.insert(std::pair<int, std::string>(3, "tea_three"));
    
	// ��������map�е�����
	mapStudent.swap(mapTeacher);

	map<int, string>::iterator iter;
	for (iter = mapTeacher.begin(); iter != mapTeacher.end(); iter++)
	{
		cout << iter->first << " " << iter->second << std::endl;
	}
	return 0;
}