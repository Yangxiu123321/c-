#include "stdio.h"
#include <iostream>
#include<string.h>
#include "Sales_item.h"
using namespace std;
int main(void)
{
	Sales_item item1, item2;
	if (item1.isbn() == item2)
	{
		std::cin >> item1 >> item2;
		std::cout << item1 + item1 << std::endl;
	}else
	{
		std::cerr << "Data must refer to same ISBN"
			<< std::endl;
		return -1;
	}
}