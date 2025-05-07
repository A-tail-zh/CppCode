#include<iostream>

using namespace std;

int main() {
	int a = 10, b = 25;
	int& ref = a;//必须要初始化
	cout << ref << endl;
	cout << "a的地址是：" << &a << endl;
	cout << "ref的地址是：" << &ref << endl;

	ref = 15;
	cout << "a的值是：" << a << endl;
	//引用的引用
	int& rref = ref;
	rref = 20;
	cout << "a的值是：" << a << endl;


	//对常量的引用
	const int zero = 0;
	const int& rzero = zero;

	int i = 30;
	const int& ri = i;

	return 0;
}