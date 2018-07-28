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

    // erase移除map中的元素
	// 用迭代器删除
	map<int, std::string>::iterator iter;

	iter = mapStudent.find(1);
	mapStudent.erase(iter);
	int n = mapStudent.erase(1);
	// 整片删除
	mapStudent.erase(mapStudent.begin(), mapStudent.end());
	cout << mapStudent.size() << std::endl;
	return 0;
}