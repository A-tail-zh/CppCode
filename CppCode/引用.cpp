#include<iostream>

using namespace std;

int main() {
	int a = 10, b = 25;
	int& ref = a;//����Ҫ��ʼ��
	cout << ref << endl;
	cout << "a�ĵ�ַ�ǣ�" << &a << endl;
	cout << "ref�ĵ�ַ�ǣ�" << &ref << endl;

	ref = 15;
	cout << "a��ֵ�ǣ�" << a << endl;
	//���õ�����
	int& rref = ref;
	rref = 20;
	cout << "a��ֵ�ǣ�" << a << endl;


	//�Գ���������
	const int zero = 0;
	const int& rzero = zero;

	int i = 30;
	const int& ri = i;

	return 0;
}