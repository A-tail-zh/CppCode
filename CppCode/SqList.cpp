#include "SqList.h"

int main() {
    SqList L;
    InitList(L);

    ListInsert(L, 1, 10);
    ListInsert(L, 2, 20);
    ListInsert(L, 3, 30);

    PrintList(L);  // 输出：10 20 30

    int pos = LocateElem(L, 20);
    cout << "元素20的位置：" << pos << endl;

    int del;
    ListDelete(L, 2, del);
    cout << "删除元素：" << del << endl;

    PrintList(L);  // 输出：10 30
    cout << "表长：" << Length(L) << endl;
    return 0;
}
