#include <iostream>
//可以引用左操作数中的右操作数
using std::cout;
using std::endl;

typedef unsigned char uchar;

typedef struct
{
	int handleNear;
	int handleFar;
	int operator[](uchar i)
	{
		if (i == 0) { return handleNear; }
		else if (i == 1) { return handleFar; }
		else { cout << "Camera handle access denied!" << endl; return -1; }
	}
}debug;

void main()
{
	debug exercise;
	exercise.handleFar = 10;
	exercise.handleNear = 12;
	cout << exercise[0] << endl;
	cout << exercise[1] << endl;
}

