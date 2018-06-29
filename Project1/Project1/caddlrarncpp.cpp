#include "stdio.h"
#include <iostream>
#include<string.h>
#include "Sales_item.h"
using namespace std;
int main(void)
{
	// 多次刷新可能会导致程序执行缓慢
	int num;
	cin >> num;
	// flush为刷新输出缓存区
	cout << num << '\n' << flush;
	cerr << "no" << endl;
	clog << "log" << endl;
}