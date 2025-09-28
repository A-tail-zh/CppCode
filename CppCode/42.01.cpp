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

    cout << "�������������ݣ���9999������: ";
    List_TailInsert(L);

    cout << "ԭʼ����: ";
    PrintList(L);

    int x;
    cout << "������Ҫɾ����Ԫ��: ";
    cin >> x;

    deleteX(L, x);

    cout << "ɾ���������: ";
    PrintList(L);
}

int main() {
    testDeleteX();
    return 0;
}
