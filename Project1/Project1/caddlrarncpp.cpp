#include <iostream>
#include <bitset>
using std::bitset;
using std::cout;
using std::endl;
using std::string;
void main(void)
{
	//ʹ��ָ���������Ԫ��
	int ia[] = { 0,2,4,6,8 };
	int *ip = ia;
	cout << *ip << endl;

	int *ip2 = ip + 4;
	cout << *ip2 << endl;

	ptrdiff_t n = ip2 - ip;
	cout << "ָ�����:" << n << endl;

	//�Կ�ָ��������
	int *ip3 = NULL;
	int *ip4 = NULL;
	ptrdiff_t m = ip3 - ip4;
	cout <<"��ָ�����:"<< m << endl;

	ip = &ia[4];
	cout << *ip << endl;
	
	//��ָ���������Ԫ��
	const size_t arr_sz = 5;
	for (int *pbegin = ia, *pend = ia + arr_sz; pbegin != pend; ++pbegin)
	{
		cout << *pbegin << ' ';
		cout << endl;
	}

	//ָ��const�����ָ��
	cout << "ָ��const�����ָ��:" << endl;
	const double pi = 3.14;
	const double *cptr = &pi;
	cout << *cptr << endl;

	//������̬����
	printf("������̬����:\r\n");

}

