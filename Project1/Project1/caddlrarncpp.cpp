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

    // 关联容器的大小
	int size = mapStudent.size();
	std::cout <<"size: "<< size << std::endl;

	// 数据遍历（迭代器）
	//std::map<int, std::string>::iterator iter;
	//for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
	//{
	//	std::cout << iter->first << " " << iter->second << std::endl;
	//}

	// 数据遍历（反向迭代器）
	//std::map<int, std::string>::reverse_iterator iter;
	//for (iter = mapStudent.rbegin(); iter != mapStudent.rend(); iter++)
	//{
	//	std::cout << iter->first << " " << iter->second << std::endl;
	//}

	// 数组遍历
	for (int index = 1; index <= size; index++)
	{
		std::cout << mapStudent[index] << std::endl;
	}
	return 0;
}