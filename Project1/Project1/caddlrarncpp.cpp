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

    // count查找map中是否有key，返回1则有，返回0则没有。
	int isKey = 0;
	isKey = mapStudent.count(3);
	std::cout << isKey << std::endl;
	return 0;
}