#include<iostream>

using namespace std;

int main() {

	int* pa[5];//指针数组
	int (*ap)[5];//数组指针
	int i = 2;
	int arr[5] = { 1,2,3,4,5 };
	cout << "pa地址的大小" << sizeof(pa) << endl;

	cout << "ap的地址大小" << sizeof(ap) << endl;
	pa[0] = &i;
	ap = &arr;//ap就是指向整个数组

	cout << "*ap的值是：" << *ap << endl;
	cout << "**ap的值是：" << **ap << endl;
	cout << *(*ap + 1) << endl;

	return 0;
}
