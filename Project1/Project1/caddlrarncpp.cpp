#include <iostream>
#include <bitset>
using std::bitset;
using std::cout;
using std::endl;
using std::string;
void main(void)
{
	//usigned��ʼ��
	bitset<16> b1(0xffff);
	cout << b1[0] << endl;

	//string��ʼ��
	string s1("1100");
	bitset<32> b2(s1);
	for (char i = 0; i < 4; i++)
	{
		cout << b2[i] << endl;
	}
}

