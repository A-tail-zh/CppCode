#include<iostream>
#include"CNode.h"
using namespace std;
int main() {
    CNode* L;
    initCNode(L);

    cout << "用插入构造循环单链表..." << endl;
    insertCNode(L, 1, 10);
    insertCNode(L, 2, 20);
    insertCNode(L, 3, 30);
    insertCNode(L, 4, 40);
    cout << "当前链表：" << endl;
    printCNode(L);

    cout << "表长：" << length(L) << endl;

    cout << "删除第2个结点：" << endl;
    int delValue;
    if (deleteCNode(L, 2, delValue)) {
        cout << "删除成功，值 = " << delValue << endl;
    }
    else {
        cout << "删除失败" << endl;
    }
    printCNode(L);

    cout << "查找第2个结点：" << endl;
    CNode* p = getElem(L, 2);
    if (p != nullptr && p != L)
        cout << "第2个结点值 = " << p->data << endl;
    else
        cout << "第2个结点不存在" << endl;

    return 0;
}
