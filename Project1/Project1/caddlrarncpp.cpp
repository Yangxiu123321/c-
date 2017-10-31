#include <iostream>
int main()
{/******************
 1.cin.getline()与他相比，比较粗一些
 举例：先定义字符数组 char a[20];
 然后 cin.getline(a,20);即把数组的内容
 读入进来。它通过换行符来确定行尾，但不保存
 换行符
 2.cin.get()则将换行符留在输入队列中
 举例：假设我们两次调用cin.get():
 cin.get(a,20);
 cin.get(b,20);
 如果不借助帮助，cin.get(b,20)无法读入，因为
 换行符留在了输入队列，第二次调用时读的第一个字符便是
 换行符，所以无法读入新的内容。那么，我们应该如何
 解决这类问题呢？
 同样的规则，借助不带参数的cin.get();在上例中的两句
 之间加入cin.get();用它吃掉换行符。


 **************************/
	using namespace std;
	char name[20];
	char club[20];
	cout << "your name" << endl;
	cin.get(name, 20).get();
	cout << "your favoiate club" << endl;
	cin.get(club, 20).get();
	cout << "hello," << name << endl;
	cout << "This is " << club << " for you!" << endl;
	return 0;
}