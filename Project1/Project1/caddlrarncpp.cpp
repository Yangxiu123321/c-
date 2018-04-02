#include "stdio.h"
#include <iostream>
uint32_t swap_endian(uint32_t val)
{
	val = ((val << 8) & 0xFF00FF00) | ((val >> 8) & 0xFF00FF);
	return (val << 16) | (val >> 16);
}
int main()
{
	uint32_t test_val = 1;
	test_val = swap_endian(test_val);
	printf("%x",test_val);
}