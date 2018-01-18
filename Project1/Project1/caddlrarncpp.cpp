#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "time.h"
#include "parallel_for.h"
#include "omp.h"
#include "blocked_range.h"
using namespace std;
using namespace tbb;
int b = 0;

class ApplyFoo
{
	float* const my_a;

public:
	void operator()(const blocked_range<size_t>& range) const
	{
		float* a = my_a;
		//cout << "a";
		for (size_t i = range.begin(); i != range.end(); ++i)
		{
			//cout << "a";
			b++;
		}
	}

	ApplyFoo(float a[]) :my_a(a)
	{
		cout << "s";
	}
};

void ParallelApplyFoo(float a[], size_t n)
{
	parallel_for(blocked_range<size_t>(0, n, 1), ApplyFoo(a), auto_partitioner());
}

void fun1(size_t size) {
	 int a = 0;
	parallel_for(size_t(0), size, [&](size_t i)
	{
		b++;
		for (int i = 0; i<100; i++)
			a++;
	});
	
}

void fun2(size_t size) {
	 int a = 0;
	for(int i=0;i<size;i++)
	{
		b++;
		for (int i = 0; i<1000000; i++)
			a++;
	}
}

void fun4(size_t size) {
	for (int i = 0; i < size; i++) {
		b++;
	}
}
//void parallel_matrix_multiply(double** m1, double** m2, double** result, size_t size)
//{
//	parallel_for(size_t(0), size, [&](size_t i)
//	{
//		for (size_t j = 0; j < size; j++)
//		{
//			double temp = 0;
//			for (int k = 0; k < size; k++)
//			{
//				temp += m1[i][k] * m2[k][j];
//			}
//			result[i][j] = temp;
//		}
//	});
//}

void test()
{
	int a = 0;
	for (int i = 0; i<100000000; i++)
		a++;
}

void main(void) {
	while (true)
	{
		clock_t t1 = clock();
       #pragma omp parallel for
		for (int i = 0; i<8; i++)
			test();
		clock_t t2 = clock();
		std::cout << "time: " << t2 - t1 << std::endl;
		//int start = 0;
		//int a = 0;
		//float xx[1000] = {0,9,8,7,6,5,4,1,1,3};
		//start = clock();//470ms
		////fun1(1000000);//
		//fun2(100);//320ms
		////fun4(6553);
		////ParallelApplyFoo(xx,6553);
		//int time = clock() - start;
		////cout << b << endl;
		//cout << time << endl;
	}
}
