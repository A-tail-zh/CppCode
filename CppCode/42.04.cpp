#include<iostream>
#include"LNode.h"

using namespace std;

void deleteRange(LNode* &L ,int i,int j) {
	if (L->next == NULL) return;
	LNode* p = L->next;
	LNode* pre = L;
	LNode* temp;
	while (p != NULL) {
		if (p->data >= i && p->data <= j) {
			temp = p;              // ���浱ǰ�ڵ�
			pre->next = p->next;   // ������ǰ�ڵ�
			p = p->next;           // �ƶ�����һ���ڵ�
			delete temp;           // ɾ����ǰ�ڵ�
		}
		else {
			pre = p;
			p = p->next;
		}
	}
}

int main() {
	return 0;
}
