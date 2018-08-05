#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
#define INDEX 10
	int i = 100;
#undef index
	std::cout << INDEX << std::endl;
}