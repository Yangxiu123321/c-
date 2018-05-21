#include <iostream>
#include <bitset>
using std::bitset;
using std::cout;
using std::endl;
using std::string;
void main(void)
{
	//使用指针访问数组元素
	int ia[] = { 0,2,4,6,8 };
	int *ip = ia;
	cout << *ip << endl;

	int *ip2 = ip + 4;
	cout << *ip2 << endl;

	ptrdiff_t n = ip2 - ip;
	cout << "指针距离:" << n << endl;

	//对空指针做减法
	int *ip3 = NULL;
	int *ip4 = NULL;
	ptrdiff_t m = ip3 - ip4;
	cout <<"空指针相减:"<< m << endl;

	ip = &ia[4];
	cout << *ip << endl;
	
	//用指针输出数组元素
	const size_t arr_sz = 5;
	for (int *pbegin = ia, *pend = ia + arr_sz; pbegin != pend; ++pbegin)
	{
		cout << *pbegin << ' ';
		cout << endl;
	}

	//指向const对象的指针
	cout << "指向const对象的指针:" << endl;
	const double pi = 3.14;
	const double *cptr = &pi;
	cout << *cptr << endl;

	//创建动态数组
	printf("创建动态数组:\r\n");

}

