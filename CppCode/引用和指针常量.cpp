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
	//����û�е�ַ
	cout << "a�ĵ�ַ: " << &a << endl; // a�ĵ�ַ: 0x7ffeefbff5ac
	cout << "p�ĵ�ַ: " << &p << endl; // p�ĵ�ַ: 0x7ffeefbff5ac
	cout << "ref�ĵ�ַ: " << &ref << endl; // ref�ĵ�ַ: 0x7ffeefbff5ac

	//��ָ�������
	int* ptr = &a;
	int*& refPtr = ptr;
	*refPtr = 40;
	cout << "a: " << a << endl; // a: 40

	return  0;
}