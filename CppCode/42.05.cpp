#include<iostream>
#include"LNode.h"
using namespace std;

//思想：
//先遍历两个链表算出长度L1，L2
//让长的链表先遍历长度的差值
//然后对两个链表进行同时遍历，如果相等则输出，否则继续遍历
//遍历完还没相等的则输出NULL

LNode* find(LNode* L1, LNode* L2) {
    if (L1 == NULL || L2 == NULL) return NULL;

    LNode* p = L1->next;
    LNode* q = L2->next;

    int length1 = 0, length2 = 0;
    LNode* temp1 = p;
    LNode* temp2 = q;

    // 计算长度
    while (temp1 != NULL) {
        length1++;
        temp1 = temp1->next;
    }
    while (temp2 != NULL) {
        length2++;
        temp2 = temp2->next;
    }

    // 对齐
    int diff = length1 - length2;
    if (diff > 0) {
        while (diff--) p = p->next;
    }
    else {
        diff = -diff;
        while (diff--) q = q->next;
    }

    // 同步前进找第一个公共节点
    while (p != NULL && q != NULL) {
        if (p == q) return p; // 判断是否是同一个节点
        p = p->next;
        q = q->next;
    }

    return NULL;
}



int main() {
	return 0;
}