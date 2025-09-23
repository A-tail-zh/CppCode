#include<iostream>
#include"SqList.h"

using namespace std;

bool DelectSToT(SqList &L,int s,int t) {
	if (s >= t) return false;
	if (Empty(L)) return false;
	int i = 0, j = 0;
	while (i < L.length) {
		if (!(L.data[i] >= s && L.data[i] <= t)) {
			j++;
			i++;
		}
		else {
			while (L.data[i] >= s && L.data[i] <= t) {
				i++;
			}
		}
		L.data[j] = L.data[i];
		
	}
	L.length = j;
	return true;
}


int main() {
	SqList L;
	InitList(L);
	ListInsert(L, 1, 1);
	ListInsert(L, 2, 2);
	ListInsert(L, 3, 2);
	ListInsert(L, 4, 3);
	ListInsert(L, 5, 4);
	cout << DelectSToT(L, 2, 3) << endl;
	PrintList(L);


	return 0;
}