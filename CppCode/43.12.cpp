#include<iostream>
#include"CNode.h"
using namespace std;

//����ͷ�ڵ�
void linkedList(CNode* h1,CNode* h2) {
	if (!h1 || !h2) return;
	CNode* p = h1, * q = h2;
	while (p->next != h1) {
		p = p->next;
	}
	while (q->next != h2) {
		q = q->next;
	}
	p->next = h2;
	q->next = h1;
}

int main() {
	return 0;
}