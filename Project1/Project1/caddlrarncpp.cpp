#include <stdio.h>
#include <iostream>
#include <string>
#include <windows.h>
#include <process.h>
using namespace std;
using std::string;

/*定义一个线程类*/
class ThreadX {

private:
	int loopStart;
	int loopEnd;
	int disFrequency;
public:
	string threadName;
	static unsigned _stdcall ThreadStaticEntryPoint(void* pThis);
	void ThreaEntryPoint();
	ThreadX(int startValue, int endValue, int frequency);
};

//定义构造函数
ThreadX::ThreadX(int startValue,int endValue,int frequency)
{
	loopStart = startValue;
	loopEnd = endValue;
	disFrequency = frequency;
}

// In C++ you must employ a free (C) function or a static
// class member function as the thread entry-point-function.
// Furthermore, _beginthreadex() demands that the thread
// entry function signature take a single (void*) and returned
// an unsigned.


//_stdcall定义入口参数是从右向左入栈，与WINAPI类似
 unsigned _stdcall ThreadX:: ThreadStaticEntryPoint(void* pThis)
{
	ThreadX *pthx = (ThreadX*)pThis;

	//now call the true entry-point-function
	pthx->ThreaEntryPoint();

	return 1;
}

void ThreadX::ThreaEntryPoint()
{
	for (int i = loopStart; i < loopEnd; i++)
	{
		if (i % disFrequency == 0)
		{
			printf("%s:i = %d\n",threadName.c_str(),i);
		}
	}

	printf("%s thread terminating\n",threadName.c_str());
}


int main(int argc,char *argv)
{
	// All processes get a primary thread automatically. This primary
	// thread can generate additional threads.  In this program the
	// primary thread creates 2 additional threads and all 3 threads
	// then run simultaneously without any synchronization.  No data
	// is shared between the threads.

	// We instantiate an object of the ThreadX class. Next we will
	// create a thread and specify that the thread is to begin executing
	// the function ThreadEntryPoint() on object o1. Once started,
	// this thread will execute until that function terminates or
	// until the overall process terminates.

	ThreadX *o1 = new ThreadX(0,1000000,2000);

	// When developing a multithreaded WIN32-based application with
	// Visual C++, you need to use the CRT thread functions to create
	// any threads that call CRT functions. Hence to create and terminate
	// threads, use _beginthreadex() and _endthreadex() instead of
	// the Win32 APIs CreateThread() and EndThread().

	// The multithread library LIBCMT.LIB includes the _beginthread()
	// and _endthread() functions. The _beginthread() function performs
	// initialization without which many C run-time functions will fail.
	// You must use _beginthread() instead of CreateThread() in C programs
	// built with LIBCMT.LIB if you intend to call C run-time functions.

	// Unlike the thread handle returned by _beginthread(), the thread handle
	// returned by _beginthreadex() can be used with the synchronization APIs

	HANDLE  hth1;

	unsigned uiThread1ID;

	hth1 = (HANDLE)_beginthreadex(NULL, //security
		0,//stack size
		ThreadX::ThreadStaticEntryPoint,
		o1,//arg list
		//CREATE_SUSPENDED,
		0,
		&uiThread1ID
	);

	if (hth1 == 0)
	{
		printf("Failed to create thread 1\n");
	}

	DWORD dwExitCode;

	//Retrieves the termination status of the specified thread.
	GetExitCodeThread(hth1,&dwExitCode);
	printf("initial thread 1 exit code = %u\n",dwExitCode); // should be STILL_ACTIVE = 0x00000


	// The System::Threading::Thread object in C++/CLI has a "Name" property.
	// To create the equivalent functionality in C++ I added a public data member
	// named threadName.

	o1->threadName = "t1";

	ThreadX *o2 = new ThreadX(-1000000,0,2000);

	HANDLE hth2;

	unsigned uiThread2ID;

	hth2 = (HANDLE)_beginthreadex(NULL,         // security
		0,            // stack size
		ThreadX::ThreadStaticEntryPoint,
		o2,           // arg list,传入指定的线程中(ThreadStaticEntryPoint)
		CREATE_SUSPENDED,  // so we can later call ResumeThread(),暂时悬挂线程，待会用ResumeThread运行
		&uiThread2ID);

	if (hth2 == 0)
	{
		printf("Failed to create thread 2\n");
	}
	
	GetExitCodeThread(hth2, &dwExitCode);  // should be STILL_ACTIVE = 0x00000103 = 259
	printf("initial thread 2 exit code = %u\n", dwExitCode);

	o2->threadName = "t2";

	//ResumeThread(hth1);

	ResumeThread(hth2);

	// In C++/CLI the process continues until the last thread exits.
	// That is, the thread's have independent lifetimes. Hence
	// Jaeschke's original code was designed to show that the primary
	// thread could exit and not influence the other threads.

	// However in C++ the process terminates when the primary thread exits
	// and when the process terminates all its threads are then terminated.
	// Hence if you comment out the following waits, the non-primary
	// threads will never get a chance to run.

	WaitForSingleObject(hth1,INFINITE);

	WaitForSingleObject(hth2, INFINITE);

	GetExitCodeThread(hth1, &dwExitCode);
	printf("thread 1 exited with code %u\n", dwExitCode);

	GetExitCodeThread(hth2, &dwExitCode);
	printf("thread 2 exited with code %u\n", dwExitCode);

	CloseHandle(hth1);

	CloseHandle(hth2);

	delete o1;
	o1 = NULL;

	delete o2;
	o2 = NULL;

	printf("Primary thread terminating.\n");
}