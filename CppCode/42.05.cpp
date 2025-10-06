#include<iostream>
#include"LNode.h"
using namespace std;

//˼�룺
//�ȱ������������������L1��L2
//�ó��������ȱ������ȵĲ�ֵ
//Ȼ��������������ͬʱ������������������������������
//�����껹û��ȵ������NULL

LNode* find(LNode* L1, LNode* L2) {
    if (L1 == NULL || L2 == NULL) return NULL;

    LNode* p = L1->next;
    LNode* q = L2->next;

    int length1 = 0, length2 = 0;
    LNode* temp1 = p;
    LNode* temp2 = q;

    // ���㳤��
    while (temp1 != NULL) {
        length1++;
        temp1 = temp1->next;
    }
    while (temp2 != NULL) {
        length2++;
        temp2 = temp2->next;
    }

    // ����
    int diff = length1 - length2;
    if (diff > 0) {
        while (diff--) p = p->next;
    }
    else {
        diff = -diff;
        while (diff--) q = q->next;
    }

    // ͬ��ǰ���ҵ�һ�������ڵ�
    while (p != NULL && q != NULL) {
        if (p == q) return p; // �ж��Ƿ���ͬһ���ڵ�
        p = p->next;
        q = q->next;
    }

    return NULL;
}



int main() {
	return 0;
}