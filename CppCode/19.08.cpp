#include<iostream>
#include"SqList.h"

using namespace std;

void  findX(SqList &L,int x) {
	int mid = 0;
	int i = 0, j = L.length - 1;
	while (i <= j) {
		 mid = i +((j - i) >> 1);
		if (L.data[mid] == x) {
			if (mid != L.length - 1)
			{
				int temp = L.data[mid];
				L.data[mid] = L.data[mid + 1];
				L.data[mid + 1] = temp;
			}
			return;
		}else if (L.data[mid] > x) {
			j = mid -1;
		}
		else {
			i = mid + 1;
		}
	}
	if (L.length >= MaxSize) { 
		cout << "顺序表已满，无法插入" << endl;
		return;
	}

	for (int k = L.length; k > i; k--) {
		L.data[k] = L.data[k - 1];
	}
	L.data[i] = x;
	L.length++;

}


int main() {
	SqList L;
	InitList(L);
	ListInsert(L,1,1);
	ListInsert(L,2,2);
	ListInsert(L,3, 4);
	ListInsert(L,4,6);
	
	findX(L,3);
	PrintList(L);
	return 0;
}