#include <iostream>
#include "Windows.h"
#include <string>
#include <cstring>
#include <vector>
void main(int argc,char *argv[])
{
	//定义一个数组
	//std::vector<std::vector<int>>data(10);
	std::vector<std::vector<int>>data;
	std::vector<int>line;
	for (int i = 0; i < 10; i++) {
		data.push_back(line);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			data[i].push_back(j);
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < data[i].size(); j++) {
			std::cout << data[i][j];
		}
		std::cout << std::endl;
	}
	system("pause");
}