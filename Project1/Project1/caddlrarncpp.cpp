// https://blog.csdn.net/morewindows/article/details/7421759
//��򵥵Ĵ������߳�ʵ��
#include <stdio.h>

#include <windows.h>

//���̺߳���

DWORD WINAPI ThreadFun(LPVOID pM)

{
	printf("���̵߳��߳�ID��Ϊ��%d\n���߳����Hello World\n", GetCurrentThreadId());

	return 0;

}

//����������ν��������ʵ�������߳�ִ�еĺ�����

int main()

{

	printf("     ��򵥵Ĵ������߳�ʵ��\n");

	printf(" -- by MoreWindows( http://blog.csdn.net/MoreWindows ) --\n\n");

	HANDLE handle = CreateThread(NULL, 0, ThreadFun, NULL, CREATE_SUSPENDED, NULL);
	Sleep(5000);
	printf("start\r\n");
	ResumeThread(handle);
	CloseHandle(handle);
	printf("end\r\n");
	return 0;
}
