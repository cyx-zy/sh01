#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//�����ռ�
namespace A
{
	int a;
	void func()
	{

	}
}
//�����ռ����Ƕ�������ռ�
namespace make
{
	int a = 0;
	namespace B
	{
		int b = 10;
	}
}

int main()
{
	int mya = 20;
	cout << "mya = " << mya << endl;
	cout << "mya = " << make:: B::b<< endl;
	system ("pause");
	return 0;
}