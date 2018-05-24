#include <iostream>
#include <thread>

void print_hello()
{
	printf("hello world\r\n");
}
void main(int argc,char **argv)
{
	std::thread t(print_hello);
	t.join();
}