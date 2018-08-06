#include <stdio.h>
#include <stdarg.h>
class A
{
public:
	int function1(int a, int b);
	int function2(int a, ...);
};
int A::function1(int a, int b)
{
	return a + b;
}

int A::function2(int a, ...)
{
	va_list ap;
	va_start(ap, a);
	int i;
	int result = 0;
	for (i = 0; i < a; i++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return result;
}
int main()
{
	int tempA, tempB;
	A a;
	tempA = a.function1(1, 2);
	tempB = a.function2(3, 1, 2, 3);
	printf("%d:%d\r\n", tempA, tempB);
	return 0;
}
