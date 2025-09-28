#include<iostream>

using namespace std;

//循环单链表
//带头节点
typedef struct CNode {
	int data;
	struct CNode* next;
}CNode,*CListNode;

//初始化
bool initCNode(CListNode& L) {
	L = new CNode;
	L->data = 0;
	L->next = L;
	return true;
}

//求表长
int length(CListNode L) {
	int len = 0;
	CNode* p = L->next;
	while (p != L) {
		p = p->next;
		len++;
	}
	return len;
}

//按序号查找
CNode* getElem(CListNode L, int i) {
	if (i < 1) return nullptr;
	CNode* p = L->next; // 从首元结点开始
	int j = 1;
	while (p != L && j < i) {
		p = p->next;
		j++;
	}
	if (p == L) return nullptr; // 说明越界
	return p;
}


//插入
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

//删除
bool deleteCNode(CListNode& L, int i, int& e) {
	if (i < 1) return false;
	CNode* p = L;   // 从头节点开始，找第 i-1 个节点
	int j = 0;
	while (p->next != L && j < i - 1) {
		p = p->next;
		j++;
	}
	if (p->next == L || j != i - 1) return false; // 越界或无此元素
	CNode* q = p->next;
	e = q->data;
	p->next = q->next;
	delete q;
	return true;
}



//打印
void printCNode(CListNode L) {
	CNode* p = L->next;
	while (p != L) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}