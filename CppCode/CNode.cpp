#include<iostream>
#include"CNode.h"
using namespace std;
int main() {
    CNode* L;
    initCNode(L);

    cout << "�ò��빹��ѭ��������..." << endl;
    insertCNode(L, 1, 10);
    insertCNode(L, 2, 20);
    insertCNode(L, 3, 30);
    insertCNode(L, 4, 40);
    cout << "��ǰ����" << endl;
    printCNode(L);

    cout << "����" << length(L) << endl;

    cout << "ɾ����2����㣺" << endl;
    int delValue;
    if (deleteCNode(L, 2, delValue)) {
        cout << "ɾ���ɹ���ֵ = " << delValue << endl;
    }
    else {
        cout << "ɾ��ʧ��" << endl;
    }
    printCNode(L);

    cout << "���ҵ�2����㣺" << endl;
    CNode* p = getElem(L, 2);
    if (p != nullptr && p != L)
        cout << "��2�����ֵ = " << p->data << endl;
    else
        cout << "��2����㲻����" << endl;

    return 0;
}
