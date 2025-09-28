#include<iostream>

using namespace std;

//ѭ��������
//��ͷ�ڵ�
typedef struct CNode {
	int data;
	struct CNode* next;
}CNode,*CListNode;

//��ʼ��
bool initCNode(CListNode& L) {
	L = new CNode;
	L->data = 0;
	L->next = L;
	return true;
}

//���
int length(CListNode L) {
	int len = 0;
	CNode* p = L->next;
	while (p != L) {
		p = p->next;
		len++;
	}
	return len;
}

//����Ų���
CNode* getElem(CListNode L, int i) {
	if (i < 1) return nullptr;
	CNode* p = L->next; // ����Ԫ��㿪ʼ
	int j = 1;
	while (p != L && j < i) {
		p = p->next;
		j++;
	}
	if (p == L) return nullptr; // ˵��Խ��
	return p;
}


//����
bool insertCNode(CListNode& L, int i, int e) {
	if (i < 1) return false;
	CNode* p = L;
	int j = 0;
	while (p->next != L && j < i - 1) {
		p = p->next;
		j++;
	}
	if (j != i - 1) return false;
	CNode* s = new CNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

//ɾ��
bool deleteCNode(CListNode& L, int i, int& e) {
	if (i < 1) return false;
	CNode* p = L;   // ��ͷ�ڵ㿪ʼ���ҵ� i-1 ���ڵ�
	int j = 0;
	while (p->next != L && j < i - 1) {
		p = p->next;
		j++;
	}
	if (p->next == L || j != i - 1) return false; // Խ����޴�Ԫ��
	CNode* q = p->next;
	e = q->data;
	p->next = q->next;
	delete q;
	return true;
}



//��ӡ
void printCNode(CListNode L) {
	CNode* p = L->next;
	while (p != L) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}