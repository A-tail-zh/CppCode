#include<iostream>
#include"LNode.h"
using namespace std;

bool determineTheCommonSubsequence(LNode* a, LNode* b) {
	if (a == nullptr || a->next == nullptr) return false;
	if (b == nullptr || b->next == nullptr) return false;

	LNode* pa = a->next; // ����a�����
	LNode* pb = b->next; // b�����
	LNode* p1, * p2;

	while (pa != nullptr) {
		p1 = pa;
		p2 = pb;

		// ���Դӵ�ǰλ�ÿ�ʼƥ��
		while (p1 != nullptr && p2 != nullptr && p1->data == p2->data) {
			p1 = p1->next;
			p2 = p2->next;
		}

		// ���b�Ѿ�ƥ�����ˣ�˵��b��a��������
		if (p2 == nullptr) return true;

		// �����a����һ������������
		pa = pa->next;
	}

	return false;
}


int main() {
	LNode* A, * B;

	cout << "���������� A���� 9999 ��������" << endl;
	List_TailInsert(A);
	cout << "���������� B���� 9999 ��������" << endl;
	List_TailInsert(B);

	cout << "���� A��";
	PrintList(A);
	cout << "���� B��";
	PrintList(B);

	bool result = determineTheCommonSubsequence(A, B);
	if (result)
		cout << "���� B ������ A ������������" << endl;
	else
		cout << "���� B �������� A ������������" << endl;

	return 0;
}