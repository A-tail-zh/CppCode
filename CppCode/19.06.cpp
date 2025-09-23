#include<iostream>
#include"SqList.h"

using namespace std;

SqList merge(SqList &L1,SqList&L2) {
	SqList L;
	InitList(L);
	int i = 0,j = 0;
	int k = 0;
	while (i < L1.length && j < L2.length) {
		L.data[k++] = L1.data[i] < L2.data[j] ? L1.data[i++] : L2.data[j++];
	}
	while (i < L1.length) {
		L.data[k++] = L1.data[i++];
	}
	while (j < L2.length) {
		L.data[k++] = L2.data[j++];
	}
	L.length = k;
	return L;

}


int main() {
	SqList L;
	SqList L1;
	InitList(L);
	InitList(L1);
	ListInsert(L, 1, 1);
	ListInsert(L, 2, 2);
	ListInsert(L, 3, 2);
	ListInsert(L, 4, 3);
	ListInsert(L, 5, 4);

	ListInsert(L1, 1, 2);
	ListInsert(L1, 2, 4);
	ListInsert(L1, 3, 7);
	ListInsert(L1, 4, 10);
	

	PrintList(merge(L, L1));


	return 0;
}