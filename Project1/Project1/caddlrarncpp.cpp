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

    // ���������Ĵ�С
	int size = mapStudent.size();
	std::cout <<"size: "<< size << std::endl;

	// ���ݱ�������������
	//std::map<int, std::string>::iterator iter;
	//for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
	//{
	//	std::cout << iter->first << " " << iter->second << std::endl;
	//}

	// ���ݱ����������������
	//std::map<int, std::string>::reverse_iterator iter;
	//for (iter = mapStudent.rbegin(); iter != mapStudent.rend(); iter++)
	//{
	//	std::cout << iter->first << " " << iter->second << std::endl;
	//}

	// �������
	for (int index = 1; index <= size; index++)
	{
		std::cout << mapStudent[index] << std::endl;
	}
	return 0;
}