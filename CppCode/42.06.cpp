#include <iostream>
#include "LNode.h"
using namespace std;

void Split_A_Forward_B_Reverse(LNode* L, LNode*& A, LNode*& B) {
    A = new LNode; A->next = nullptr;
    B = new LNode; B->next = nullptr;
    LNode* pa = A;  // A 尾指针，用于尾插
    LNode* p = L->next;
    int flag = 1;

    while (p) {
        LNode* cur = p;
        p = p->next;

        if (flag == 1) {
            // A 正序（尾插）
            pa->next = cur;
            cur->next = nullptr;
            pa = cur;
        }
        else {
            // B 逆序（头插）
            cur->next = B->next;
            B->next = cur;
        }
        flag = -flag; // 交替
    }
}


int main() {
    LNode* L;
    InitList(L);
    cout << "请输入链表数据（以9999结束）：" << endl;
    List_TailInsert(L);

    cout << "原链表：" << endl;
    PrintList(L);

    LNode* A;
    LNode* B;
    Split_A_Forward_B_Reverse(L, A, B);

    cout << "A链表：" << endl;
    PrintList(A);
    cout << "B链表：" << endl;
    PrintList(B);

    return 0;
}