#include<iostream>
#include"LNode.h"
using namespace std;

void deleteRepeatNumber(LNode*& L) {
    if (L == nullptr || L->next == nullptr) return; // �ձ��ֻ��ͷ���

    LNode* pre = L->next;       // ��һ����Ч�ڵ�
    LNode* cur = pre->next;     // ��ǰ�ڵ�

    while (cur != nullptr) {
        if (pre->data == cur->data) {
            pre->next = cur->next;  // �����ظ��ڵ�
            delete cur;             // �ͷ��ڴ�
            cur = pre->next;        // �Ƶ���һ���ڵ�
        }
        else {
            pre = cur;              // ǰ��
            cur = cur->next;
        }
    }
}


int main() {
	return 0;
}