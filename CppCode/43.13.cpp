#include<iostream>
using namespace std;

typedef struct DNode {
	int data;
	struct DNode* next, * pre;
	int freq;
}DNode,*DListNode;

void initDListNode(DListNode &L) {
	L->freq = 0;
	L->next = L->pre = NULL;
}

DListNode Locate(DListNode &L,int x) {
	if (L->next == NULL || L == NULL)return nullptr;
	DNode* p = L->next;
	while (p->freq != x && p != NULL) {
		p = p->next;
	}
	if (p == NULL)return nullptr;
	p->freq += 1;
	DNode* cur = p;
	DNode* q = p->pre;
	while (q->freq > p->freq && q != L) {
		q = q->next;
	}
	q->next->pre = cur;
	cur->pre = q;
	cur->next = q->next;
	q->next = cur;



	return q;
}