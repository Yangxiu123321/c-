//�����֣������鷽ʽ�������ݣ��������˵��  

#include <map>  

#include <string>  

#include <iostream>  

using namespace std;

int main()

{

	map<int, string> mapStudent;

	/// ��������ı�ͬһ�����ŵ�ֵ
	//mapStudent[1] = "student_one";
	//mapStudent[1] = "student_TWO";

	/// ���ܸı�
	mapStudent.insert(std::pair<int,std::string>(1,"stu_one"));
	mapStudent.insert(std::pair<int, std::string>(1, "std_two"));

	map<int, string>::iterator iter;

	for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)

		cout << iter->first << ' ' << iter->second << endl;

}