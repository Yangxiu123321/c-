#include <windows.h>
#include <iostream>

int main(void)
{
	int array[1000] = { 1,1,1 };
	array[999] = 100;
	ZeroMemory(array,sizeof(array));
	std::cout << array[999] << std::endl;
	return 0;
}