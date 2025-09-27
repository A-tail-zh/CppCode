#include<iostream>
#include"DNode.h"
using namespace std;

int main() {
    DLinkList L;
    int deletedValue;

    // ��ʼ��˫������
    initDLinkList(L);
    cout << "��ʼ��˫������ɹ���" << endl;

    // �����������
    cout << "\n����5��Ԫ�ص�������..." << endl;
    insertDNode(L, 1, 10);  // λ��1����10
    insertDNode(L, 2, 20);  // λ��2����20
    insertDNode(L, 3, 30);  // λ��3����30
    insertDNode(L, 1, 5);   // λ��1����5����ͷ��
    insertDNode(L, 5, 40);  // λ��5����40����β��

    cout << "��ǰ����Ԫ��: ";
    printDList(L);  // Ԥ�����: 5 10 20 30 40

    // ���Բ�����Чλ��
    if (!insertDNode(L, 8, 100)) {
        cout << "����λ��8ʧ�ܣ���Чλ�ã�" << endl;
    }

    // ����ɾ������
    cout << "\nɾ����2��Ԫ��..." << endl;
    if (deleteDNode(L, 2, deletedValue)) {
        cout << "ɾ����Ԫ��ֵΪ: " << deletedValue << endl;  // Ԥ��ɾ��10
    }
    cout << "ɾ��������Ԫ��: ";
    printDList(L);  // Ԥ�����: 5 20 30 40

    // ����ɾ����βԪ��
    cout << "\nɾ�����һ��Ԫ��..." << endl;
    if (deleteDNode(L, 4, deletedValue)) {
        cout << "ɾ����Ԫ��ֵΪ: " << deletedValue << endl;  // Ԥ��ɾ��40
    }
    cout << "ɾ��������Ԫ��: ";
    printDList(L);  // Ԥ�����: 5 20 30

    // ����ɾ����Чλ��
    if (!deleteDNode(L, 5, deletedValue)) {
        cout << "ɾ��λ��5ʧ�ܣ���Чλ�ã�" << endl;
    }

    return 0;
}
