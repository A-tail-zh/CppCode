#include<iostream>
#include"LNode.h"
using namespace std;

void fun(LNode* &A,LNode* B) {
	if (A == NULL || A->next == NULL)return;
	if (B == NULL || B->next == NULL)return;
	LNode* pa = A->next;
	LNode* pb = B->next;
	LNode* pre = A;
	while (pa != NULL && pb != NULL) {
		if (pa->data == pb->data) {
			pre = pa;
			pa = pre->next;
			pb = pb->next;
		}
		else if(pa->data < pb->data) {
			LNode* temp = pa;
			pre->next = pa->next;
			pa = pa->next;
			delete temp;
			
		}
		else
		{
			pb = pb->next;
		}
	}  while (pa != nullptr) {
		LNode* temp = pa;
		pa = pa->next;
		delete temp;
	}
	pa->next = NULL;

}

int main() {
	return 0;
}