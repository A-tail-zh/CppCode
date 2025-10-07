#include<iostream>
#include"LNode.h"
using namespace std;

LNode* C(LNode* A, LNode* B) {
	if (A == nullptr || A->next == nullptr)return NULL;
	if (B == nullptr || B->next == nullptr)return NULL;
	LNode* pa = A->next;
	LNode* pb = B->next;
	LNode* c = new LNode;
	c->next = nullptr;
	LNode* q = c->next;
	while (pa !=NULL && pb != NULL) {
		if (pa->data == pb->data) {
			LNode* cur = new LNode;
			cur->data = pa->data;
			cur->next = nullptr;

			// 链接到 C
			q->next = cur;
			q = cur;

			// 双方后移
			pa = pa->next;
			pb = pb->next;
		}
		else if (pa->data < pb->data) {
			pa = pa->next;
		}
		else {
			pb = pb->next;
		}

	}
	return c;
}

int main() {
	return 0;
}