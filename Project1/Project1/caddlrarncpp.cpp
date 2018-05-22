#include <iostream>
#include <bitset>
using std::bitset;
using std::cout;
using std::endl;
using std::string;

template <typename T>
int compare(const T &v1, const T &v2)
{
	if (v1 < v2)return 1;
	if (v2 < v1)return -1;
	return 0;
}


void main(void)
{
	int a = 0;
	int b = 0;
	int result = 10;
	a = 16; b = 12;
	result = compare(a, b);
	cout << result << endl;
}

