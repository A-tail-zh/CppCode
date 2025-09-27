#include <iostream>
using namespace std;

struct DNode {
    int data;
    DNode* prior;
    DNode* next;
};
using DLinkList = DNode*;

void initDLinkList(DLinkList& L) {
    L = new DNode;
    L->data = 0;  // 头节点不存储有效数据
    L->next = nullptr;
    L->prior = nullptr;
}

bool insertDNode(DLinkList L, int i, int e) {
    if (i < 1) return false;
    int j = 0;
    DLinkList p = L;
    while (p != nullptr && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == nullptr) return false;

    DLinkList s = new DNode;
    s->data = e;
    s->next = p->next;
    if (p->next != nullptr)
        p->next->prior = s;
    p->next = s;
    s->prior = p;
    return true;
}

bool deleteDNode(DLinkList L, int i, int& e) {
    if (i < 1) return false;
    int j = 0;
    DLinkList p = L;
    while (p != nullptr && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == nullptr || p->next == nullptr) return false;

    DLinkList s = p->next;
    e = s->data;
    p->next = s->next;
    if (s->next != nullptr)
        s->next->prior = p;
    delete s;
    return true;
}

void printDList(DLinkList L) {
    DLinkList p = L->next;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
