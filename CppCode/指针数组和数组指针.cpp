#include<iostream>

using namespace std;

int main() {

	int* pa[5];//ָ������
	int (*ap)[5];//����ָ��
	int i = 2;
	int arr[5] = { 1,2,3,4,5 };
	cout << "pa��ַ�Ĵ�С" << sizeof(pa) << endl;

	cout << "ap�ĵ�ַ��С" << sizeof(ap) << endl;
	pa[0] = &i;
	ap = &arr;//ap����ָ����������

	cout << "*ap��ֵ�ǣ�" << *ap << endl;
	cout << "**ap��ֵ�ǣ�" << **ap << endl;
	cout << *(*ap + 1) << endl;

	return 0;
}
