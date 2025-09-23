#include<iostream>
#include "SqList.h"
using namespace std;


bool DeleteMinElement(SqList &L,int &e) {
	if(Empty(L)) return false;
	int min = 0;
	for (int i = 1; i < L.length; i++) {
		min = L.data[min] > L.data[i] ? i : min;
	}
	e = L.data[min];
	L.data[min] = L.data[--L.length];
	return true;
}

int main() {
	SqList L;
	InitList(L);

	ListInsert(L, 1, 10);
	ListInsert(L, 2, 20);
	ListInsert(L, 3, 30);
	PrintList(L);
	int n = 0;
	cout << DeleteMinElement(L, n) << endl;
	PrintList(L);
	cout << n;
	return 0;
}
