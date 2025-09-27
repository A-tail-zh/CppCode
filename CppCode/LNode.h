#include <iostream>
using namespace std;

struct LNode {
	int data;
	LNode* next;
};

// ��ͷ���
bool InitList(LNode*& L){
	L = new LNode;
	//c����:
	//L = (LNode*)malloc(sizeof(LNode)); 
	L->next = NULL;
	return true;
}
// ����ͷ�ڵ�
bool InitListWithoutHead(LNode*& L) {
	L = NULL;
	return true;
}

// ���
// ��ͷ�ڵ�
int length(LNode* L) {
	int length = 0;
	LNode* p = L->next;//����ͷ�ڵ�
	while (p != NULL) {
		length++;
		p = p->next;
	}
	return length;
}

// ����Ų���
// ��ͷ�ڵ�
LNode* GetElem(LNode* L, int i) {
	if (i < 0) return nullptr;  // �Ƿ��±�
	LNode* p = L;  // ��ͷ��㣬��ͷ��㿪ʼ
	while (p != nullptr && i > 0) {
		p = p->next;
		i--;
	}
	return p; // i=0 ʱ���ص� i ���ڵ㣻��pΪ�ձ�ʾ������
}

// ��ֵ����
// ��ͷ�ڵ�
LNode* LocateElem(LNode* L, int e) {
	LNode* p = L->next;  // ����ͷ���
	while (p != nullptr) {  // ������������
		if (p->data == e)
			return p;       // �ҵ��ͷ��ظý���ַ
		p = p->next;        // ��������
	}
	return nullptr;         // û�ҵ�
}

// ����ڵ����
// ��ͷ�ڵ�
bool ListInsert(LNode* &L,int i,int e) {
	if (i < 1) return false;
	LNode* p = L;  
	int j = 0;
	while(p != NULL && j < i -1) {
		p = p->next;
		j++;
	}
	if (p == NULL) return false;//i�Ƿ�Խ�磬���Խ��ֱ�ӷ���
	LNode* cur = new LNode;
	cur->data = e;
	cur->next = p->next;
	p->next = cur;
	return true;
}

//����ڵ����
//����ͷ�ڵ�
bool ListInsertWithoutHead(LNode*& L, int i, int e) {
	if (i < 1) return false;  

	if (i == 1) {
		LNode* s = new LNode;
		s->data = e;
		s->next = L;
		L = s;  
		return true;
	}


	LNode* p = L;
	int j = 1;
	while (p != nullptr && j < i - 1) {
		p = p->next;
		j++;
	}

	if (p == nullptr) return false;  // i ���ڱ�+1������ʧ��

	// ����ڵ�
	LNode* s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

//ɾ���ڵ�
//��ͷ�ڵ�
bool ListDelete(LNode* &L,int i,int &e) {
	if (i < 1) return false;
	LNode* p = L;
	int j = 0;
	//ͬ��������ҳ�i -1 λ��
	while (p != nullptr && j < i - 1) {
		p = p->next;
		j++;
	}
	if (p == nullptr || p ->next == nullptr) return false;
	LNode* q = p->next;
	e = q->data;
	p->next = q->next;
	delete q;
	return true;
}

//ͷ�巨����
LNode* List_headInsert(LNode*& L) {
	//��ʼ��
	//��ͷ�ڵ�
	L = new LNode;
	L->next = nullptr;
	LNode* s;
	int x;
	cin >> x;
	while (x != 9999) {//9999�������
		s = new LNode;
		s->data = x;
		s->next = L->next;
		L->next = s;
		cin >> x;
	}

	return L;
}

//β�巨����
LNode* List_TailInsert(LNode*& L) {
	//��ʼ��
	//��ͷ�ڵ�
	L = new LNode;
	L->next = nullptr;
	LNode* s,*r;
	r = L;
	int x;
	cin >> x;
	while (x != 9999) {
		s = new LNode;
		s->data = x;
		r->next = s;
		r = s;
		cin >> x;
	}
	r->next = nullptr;
	return L;
}

// ��ӡ����
void PrintList(LNode* L) {
	LNode* p = L->next;
	while (p != nullptr) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

