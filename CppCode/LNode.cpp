#include <iostream>
#include "LNode.h"
using namespace std;

int main() {
    LNode* L;
    cout << "��β�巨����������һ����������9999������" << endl;
    List_TailInsert(L);  // 

    cout << "������ɣ���������Ϊ��" << endl;
    PrintList(L);

    cout << "����" << length(L) << endl;

    cout << "�ڵ�3��λ�ò���99" << endl;
    ListInsert(L, 3, 99);
    PrintList(L);

    int delValue;
    cout << "ɾ����2��λ�õ�Ԫ��" << endl;
    if (ListDelete(L, 2, delValue)) {
        cout << "ɾ����ֵ�ǣ�" << delValue << endl;
    }
    else {
        cout << "ɾ��ʧ�ܣ�" << endl;
    }
    PrintList(L);

    cout << "����ֵΪ99�Ľڵ㣺" << endl;
    LNode* p = LocateElem(L, 99);
    if (p) cout << "�ҵ��ˣ���ַ��" << p << " ֵ��" << p->data << endl;
    else cout << "û�ҵ�" << endl;

    cout << "���ҵ�4��λ�õĽڵ㣺" << endl;
    p = GetElem(L, 4);
    if (p) cout << "�ҵ��ˣ�ֵ��" << p->data << endl;
    else cout << "��4��λ�ò�����" << endl;

    return 0;
}
