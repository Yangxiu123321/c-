#include "iostream"
#include "memory"

int main(void)
{
	/// shared_ptrָ���ʹ��
	int a = 0;
	std::shared_ptr<int> ptra = std::make_shared<int>(a);
	// copy
	std::shared_ptr<int> ptra2(ptra);
	std::shared_ptr<int> ptra3(ptra);
	std::cout <<"shared_ptr:" <<  ptra.use_count() << std::endl;

	/// unique_ptr
	// �󶨶�̬����
	std::unique_ptr<int> uptr(new int(10));
	// std::unique_ptr<int> uptr2 = uptr;���ܸ�ֵ
	// std::unique_ptr<int> uptr2(uptr);// ���ܿ���
	std::unique_ptr<int> uptr2 = std::move(uptr);
	uptr2.release(); // �ͷ�����Ȩ
	

	/// std::weak_ptr()
}