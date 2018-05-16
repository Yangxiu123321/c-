#include <iostream>
#include <string>
//可以引用左操作数中的右操作数
using std::cout;
using std::endl;
using std::cin;
using std::string;

void main(void)
{
	string s("yang is good\r\n");
	//size empty
	cout << s.size() << s.empty() << endl;
	
	//s.size()返回的时string::size_type类型可以是usigned的很多类型，保证足够大
	
	//对象赋值
	string ss;
	ss = s;
	cout << ss << endl;

	//对象相加
	string add;
	add = s + ss;
	cout << add << endl;

	//下标索引
	cout << add[0] << endl;

}

