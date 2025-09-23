#include<iostream>
#include"SqList.h"

using namespace std;

void deleteRepeatElement(SqList &L) {
	int i = 1,j = 1;
	while (i < L.length) {
		if (L.data[i - 1] != L.data[i]) {
			L.data[j] = L.data[i];
			i++;
			j++;
		}
		else
		{
			int k = i;
			while (L.data[i++] != L.data[k]);
		}
	}
	L.length = j;

}

//优化不需要多余循环
void deleteRepeatElement1(SqList& L) {
	if (L.length <= 1) return;

	int write = 1;
	for (int read = 1; read < L.length; read++) {
		if (L.data[read] != L.data[write - 1]) {
			L.data[write] = L.data[read];
			write++;
		}
	}
	L.length = write;
}



int main() {
	SqList L;
	InitList(L);
	ListInsert(L, 1, 1);
	ListInsert(L, 2, 2);
	ListInsert(L, 3, 2);
	ListInsert(L, 4, 3);
	ListInsert(L, 5, 4);
	deleteRepeatElement1(L);

	PrintList(L);


	return 0;
}