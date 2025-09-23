#include<iostream>
#include"SqList.h"
using namespace std;

void swap(int arr[], int L, int R) {
	int temp = arr[L];
	arr[L] = arr[R];
	arr[R] = temp;
}

void Reverse(SqList &L) {
	for (int i = 0; i < L.length / 2; i++) {
		swap(L.data, i, L.length - i - 1);
	}
}

int main() {
	SqList L;
	InitList(L);
	ListInsert(L,1,1);
	ListInsert(L,2,2);
	ListInsert(L,3,3);
	PrintList(L);
	Reverse(L);
	PrintList(L);


	return 0;

}


