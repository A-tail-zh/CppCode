#include<iostream>

using namespace std;

int main() {
	// ָ��Ķ���
	int* p1;
	long* p2;
	long long* p3;
	cout << "p1���ڴ��еĵ�ַ�ǣ�" << sizeof(p1) << endl;

	//ָ���ʹ��
	int a = 10;
	int b = 20;
	p1 = &a; // p1ָ��a�ĵ�ַ
	cout << "a�ĵ�ַ�ǣ�" << &a << endl;
	cout << "p1�ǣ�" << p1 << endl;

	//*p������
	*p1 = 100; // ͨ��ָ���޸�a��ֵ
	cout << "a��ֵ�ǣ�" << a << endl;

	//��ָ��
	int* ptr = nullptr;
	ptr = NULL;
	ptr = 0;

	//void*ָ��
	int i = 100;
	char ch = 'a';
	void* p = &i; // void*ָ�����ָ����������
	p = &ch; // Ҳ����ָ��char����

	//ָ��ָ���ָ��
	int** pp = &p1; // pp��ָ��p1��ָ��


	//ָ������ָ��
	const int c1 = 10;
	const int* pc1 = &c1; // pc1��ָ������ָ��

	//ָ�볣����constָ�룩
	int* const pc2 = &a; // pc2��ָ��a�ĳ���ָ��

	//ָ��������
	int arr[5] = { 1, 2, 3, 4, 5 };
	cout << "arr�ĵ�ַ�ǣ�" << arr << endl;

	//ָ������
	int* pArr = arr; // pArrָ���������Ԫ��
	cout << "pArr�ĵ�ַ�ǣ�" << pArr << endl;
	cout << "pArr+1�ĵ�ַ�ǣ�" << pArr + 1 << endl; // ָ���1��ָ����һ��Ԫ��
	cout << "pArr[1]��ֵ�ǣ�" << pArr[1] << endl; // ͨ��ָ���������Ԫ��

	return 0;
}