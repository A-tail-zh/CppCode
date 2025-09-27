#include <iostream>
using namespace std;

struct LNode {
	int data;
	LNode* next;
};

// 带头结点
bool InitList(LNode*& L){
	L = new LNode;
	//c语言:
	//L = (LNode*)malloc(sizeof(LNode)); 
	L->next = NULL;
	return true;
}
// 不带头节点
bool InitListWithoutHead(LNode*& L) {
	L = NULL;
	return true;
}

// 求表长
// 带头节点
int length(LNode* L) {
	int length = 0;
	LNode* p = L->next;//跳过头节点
	while (p != NULL) {
		length++;
		p = p->next;
	}
	return length;
}

// 按序号查找
// 带头节点
LNode* GetElem(LNode* L, int i) {
	if (i < 0) return nullptr;  // 非法下标
	LNode* p = L;  // 带头结点，从头结点开始
	while (p != nullptr && i > 0) {
		p = p->next;
		i--;
	}
	return p; // i=0 时返回第 i 个节点；若p为空表示不存在
}

// 按值查找
// 带头节点
LNode* LocateElem(LNode* L, int e) {
	LNode* p = L->next;  // 跳过头结点
	while (p != nullptr) {  // 遍历整个链表
		if (p->data == e)
			return p;       // 找到就返回该结点地址
		p = p->next;        // 继续后移
	}
	return nullptr;         // 没找到
}

// 插入节点操作
// 带头节点
bool ListInsert(LNode* &L,int i,int e) {
	if (i < 1) return false;
	LNode* p = L;  
	int j = 0;
	while(p != NULL && j < i -1) {
		p = p->next;
		j++;
	}
	if (p == NULL) return false;//i是否越界，如果越界直接返回
	LNode* cur = new LNode;
	cur->data = e;
	cur->next = p->next;
	p->next = cur;
	return true;
}

//插入节点操作
//不带头节点
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

	if (p == nullptr) return false;  // i 大于表长+1，插入失败

	// 插入节点
	LNode* s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

//删除节点
//带头节点
bool ListDelete(LNode* &L,int i,int &e) {
	if (i < 1) return false;
	LNode* p = L;
	int j = 0;
	//同插入遍历找出i -1 位置
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

//头插法建表
LNode* List_headInsert(LNode*& L) {
	//初始化
	//带头节点
	L = new LNode;
	L->next = nullptr;
	LNode* s;
	int x;
	cin >> x;
	while (x != 9999) {//9999代表结束
		s = new LNode;
		s->data = x;
		s->next = L->next;
		L->next = s;
		cin >> x;
	}

	return L;
}

//尾插法建表
LNode* List_TailInsert(LNode*& L) {
	//初始化
	//带头节点
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

// 打印链表
void PrintList(LNode* L) {
	LNode* p = L->next;
	while (p != nullptr) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

