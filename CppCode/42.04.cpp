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
			temp = p;              // 保存当前节点
			pre->next = p->next;   // 跳过当前节点
			p = p->next;           // 移动到下一个节点
			delete temp;           // 删除当前节点
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
