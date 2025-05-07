#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int& ref = a;
	int* const p = &a;

	ref = 20;
	cout << "a: " << a << endl; // a: 20

	*p = 30;
	cout << "a: " << a << endl; // a: 30
	//引用没有地址
	cout << "a的地址: " << &a << endl; // a的地址: 0x7ffeefbff5ac
	cout << "p的地址: " << &p << endl; // p的地址: 0x7ffeefbff5ac
	cout << "ref的地址: " << &ref << endl; // ref的地址: 0x7ffeefbff5ac

	//绑定指针的引用
	int* ptr = &a;
	int*& refPtr = ptr;
	*refPtr = 40;
	cout << "a: " << a << endl; // a: 40

	return  0;
}