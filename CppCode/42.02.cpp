#include<iostream>
#include"LNode.h"
#include<climits>//ʹ��INT_MAX
//���ߺ궨��
//#define INT_MAX 0x7fffffff

void deleteMinNumber(LNode* L) {
	if (L->next == NULL)return;
	LNode* p = L->next;
	int min = INT_MAX;
	//�ҵ���С��Ԫ��
	while (p != NULL) {
		min = min <= p->data ? min : p->data;
		p = p->next;
	}
	p = L;
	while (p->next != nullptr) {
		if (p->next->data == min) {
			LNode* s = p->next;
			p->next = s->next;
			delete s;
			return;
		}
		else {
			p = p->next;
		}
	}

}



// ���Ժ���
void testDeleteMinNumber() {
	LNode* L;
	InitList(L);

	cout << "�������������ݣ���9999������: ";
	List_TailInsert(L);

	cout << "ԭʼ����: ";
	PrintList(L);

	deleteMinNumber(L);

	cout << "ɾ����Сֵ�������: ";
	PrintList(L);
}

int main() {
	testDeleteMinNumber();
	return 0;
}