#include<iostream>
#include"LNode.h"
using namespace std;

void deleteRepeatNumber(LNode*& L) {
    if (L == nullptr || L->next == nullptr) return; // 空表或只有头结点

    LNode* pre = L->next;       // 第一个有效节点
    LNode* cur = pre->next;     // 当前节点

    while (cur != nullptr) {
        if (pre->data == cur->data) {
            pre->next = cur->next;  // 跳过重复节点
            delete cur;             // 释放内存
            cur = pre->next;        // 移到下一个节点
        }
        else {
            pre = cur;              // 前移
            cur = cur->next;
        }
    }
}


int main() {
	return 0;
}