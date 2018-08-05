#include <iostream>

struct name {
public :
	void init()
	{
		w = 1;
		s = 2;
		a = 3;
	}
	int x = 10;
private:
	int w;
	int a;
	int s;
};

int main(void)
{
	name Yang;
	Yang.init();
	std::cout << Yang.x << std::endl;
}