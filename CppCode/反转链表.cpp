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

    // ��ת����
    ListNode* prev = nullptr;
    ListNode* curr = list;
    while (curr) {
        ListNode* next = curr->next; // ������һ���ڵ�
        curr->next = prev;          // ��ת��ǰ�ڵ��ָ��
        prev = curr;                // �ƶ� prev ָ��
        curr = next;                // �ƶ� curr ָ��
    }
    list = prev; 

    // ��ӡ����
    ListNode* p = list;
    while (p) {
        cout << p->value << " -> ";
        p = p->next;
    }
    cout << "nullptr" << endl;

    return 0;
}