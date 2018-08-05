#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> Bob;
	Bob.push_back(1);
	Bob.push_back(10);
	Bob.pop_back();
	int c = Bob.back();
	std::cout << c << std::endl;
}