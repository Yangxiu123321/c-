//第三种：用数组方式插入数据，下面举例说明  

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

	std::map<int, std::string>::iterator iter;
	// 查找key map<key,>
	iter = mapStudent.find(2);
	if (iter != mapStudent.end())
	{
		std::cout << "find:" << iter->first << std::endl;
		// 查看迭代器的位置

	}
	else
	{
		std::cout << "not find" << std::endl;
	}
	return 0;
}