#include<iostream>
#include"LNode.h"
using namespace std;

void deleteX(LNode*& L,int x) {
	if (L->next == nullptr) return;
	LNode* p = L;
	LNode* s = p->next;
	while (s != NULL) {
		if (s->data == x) {
			p->next = s->next;
			s = p->next;
		}
		else {
			p = s;
			s = s->next;
		}
	}
}

void testDeleteX() {
    LNode* L;
    InitList(L);

    cout << "请输入链表数据（以9999结束）: ";
    List_TailInsert(L);

    cout << "原始链表: ";
    PrintList(L);

    int x;
    cout << "请输入要删除的元素: ";
    cin >> x;

    deleteX(L, x);

    cout << "删除后的链表: ";
    PrintList(L);
}

int main() {
    testDeleteX();
    return 0;
}
