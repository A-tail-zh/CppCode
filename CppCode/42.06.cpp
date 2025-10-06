#include <iostream>
#include "LNode.h"
using namespace std;

void Split_A_Forward_B_Reverse(LNode* L, LNode*& A, LNode*& B) {
    A = new LNode; A->next = nullptr;
    B = new LNode; B->next = nullptr;
    LNode* pa = A;  // A βָ�룬����β��
    LNode* p = L->next;
    int flag = 1;

    while (p) {
        LNode* cur = p;
        p = p->next;

        if (flag == 1) {
            // A ����β�壩
            pa->next = cur;
            cur->next = nullptr;
            pa = cur;
        }
        else {
            // B ����ͷ�壩
            cur->next = B->next;
            B->next = cur;
        }
        flag = -flag; // ����
    }
}


int main() {
    LNode* L;
    InitList(L);
    cout << "�������������ݣ���9999��������" << endl;
    List_TailInsert(L);

    cout << "ԭ����" << endl;
    PrintList(L);

    LNode* A;
    LNode* B;
    Split_A_Forward_B_Reverse(L, A, B);

    cout << "A����" << endl;
    PrintList(A);
    cout << "B����" << endl;
    PrintList(B);

    return 0;
}