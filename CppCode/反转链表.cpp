#include <iostream>
#include "list_node.h"
using namespace std;

int main() {
    ListNode node5 = { 5, nullptr };
    ListNode node4 = { 4, &node5 };
    ListNode node3 = { 3, &node4 };
    ListNode node2 = { 2, &node3 };
    ListNode node1 = { 1, &node2 };

    ListNode* list = &node1;

    // 反转链表
    ListNode* prev = nullptr;
    ListNode* curr = list;
    while (curr) {
        ListNode* next = curr->next; // 保存下一个节点
        curr->next = prev;          // 反转当前节点的指针
        prev = curr;                // 移动 prev 指针
        curr = next;                // 移动 curr 指针
    }
    list = prev; 

    // 打印链表
    ListNode* p = list;
    while (p) {
        cout << p->value << " -> ";
        p = p->next;
    }
    cout << "nullptr" << endl;

    return 0;
}