#include "iostream"
#include "memory"

int main(void)
{
	/// shared_ptr指针的使用
	int a = 0;
	std::shared_ptr<int> ptra = std::make_shared<int>(a);
	// copy
	std::shared_ptr<int> ptra2(ptra);
	std::shared_ptr<int> ptra3(ptra);
	std::cout <<"shared_ptr:" <<  ptra.use_count() << std::endl;

	/// unique_ptr
	// 绑定动态对象
	std::unique_ptr<int> uptr(new int(10));
	// std::unique_ptr<int> uptr2 = uptr;不能赋值
	// std::unique_ptr<int> uptr2(uptr);// 不能拷贝
	std::unique_ptr<int> uptr2 = std::move(uptr);
	uptr2.release(); // 释放所有权
	

	/// std::weak_ptr()
}