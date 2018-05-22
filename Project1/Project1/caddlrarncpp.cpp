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

	///创建动态数组
	printf("创建动态数组:\r\n");
	// 没有初始化
	// int *pia = new int[10];
	// 对数组元素初始化为0
	//int *pia = new int[10]();
	// 对const对象的动态数组初始化(必须初始化)
	//const int *pci_ok = new const int[10]();
	// 输入数组大小
	size_t ndong = 0;
	std::cout << "请输入要动态分配数组的大小:";
	std::cin >> n;
	int *pdong = new int[n]();
	for (int *ptest = pdong; ptest != pdong + n; ++ptest)
	{
		cout << *ptest <<  endl;
	}
	// 数组释放
	delete [] pdong;
}

