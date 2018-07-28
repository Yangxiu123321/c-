//第三种：用数组方式插入数据，下面举例说明  

#include <map>  

#include <string>  

#include <iostream>  

using namespace std;

int main()

{

	map<int, string> mapStudent;

	/// 可以任意改变同一索引号的值
	//mapStudent[1] = "student_one";
	//mapStudent[1] = "student_TWO";

	/// 不能改变
	mapStudent.insert(std::pair<int,std::string>(1,"stu_one"));
	mapStudent.insert(std::pair<int, std::string>(1, "std_two"));

	map<int, string>::iterator iter;

	for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)

		cout << iter->first << ' ' << iter->second << endl;

}