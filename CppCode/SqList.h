
//链表的静态实现
#define MaxSize 100
#include<iostream>
using namespace std;
struct SqList {
	int data[MaxSize];
	int length;
};

//只读加const
void InitList(SqList& L) {
	L.length = 0;
}

int Length(const SqList& L) {
	return L.length;
}

int LocateElem(const SqList& L, int e) {
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] == e)
			return i + 1;
	}
	return 0;//表示找不到
}

bool ListInsert(SqList& L, int i, int e) {
	if (L.length >= MaxSize) return false;
	if (i < 1 || i > L.length + 1) return false;
	for (int j = L.length; j >= i; j--) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}

bool Empty(const SqList& L) {
	return L.length == 0;
}

bool ListDelete(SqList& L, int i, int &e) {
	if (Empty(L)) return false;
	if (i < 1 || i > L.length) return false;
	e = L.data[i - 1];
	for (int j = i - 1; j < L.length - 1; j++) {
		L.data[j] = L.data[j + 1];
	}
	L.length--;
	return true;
}

void PrintList(const SqList& L) {
	for (int i = 0; i < L.length; i++)
		cout << L.data[i] << " ";
	cout << endl;
}


void DestroyList(SqList& L) {
	L.length = 0;
	for (int i = 0; i < MaxSize; i++) {
		L.data[i] = 0; 
	}
}

