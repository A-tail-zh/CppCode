#include "SqList.h"

int main() {
    SqList L;
    InitList(L);

    ListInsert(L, 1, 10);
    ListInsert(L, 2, 20);
    ListInsert(L, 3, 30);

    PrintList(L);  // �����10 20 30

    int pos = LocateElem(L, 20);
    cout << "Ԫ��20��λ�ã�" << pos << endl;

    int del;
    ListDelete(L, 2, del);
    cout << "ɾ��Ԫ�أ�" << del << endl;

    PrintList(L);  // �����10 30
    cout << "����" << Length(L) << endl;
    return 0;
}
