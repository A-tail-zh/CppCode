#include<iostream>
#include"LNode.h"

using namespace std;

void Inversion(LNode* &L) {
	LNode* pre = NULL;
	LNode* cur = L->next;
	LNode* next = NULL;
	while (cur != NULL) {
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}
	L->next = pre;
}

// ����������
int main() {
    LNode* L;
    InitList(L);

    // ����
    List_TailInsert(L);

    cout << "ԭ����" << endl;
    PrintList(L);

    // ����
    Inversion(L);

    cout << "���ú�����" << endl;
    PrintList(L);

    return 0;
}