#include<iostream>
#include"SqList.h"

using namespace std;
//����һ���������ٳ��ȣ�˳��ı�
void DeleteAllX(SqList &L,int x) {
	int i = 0;
	while (i < L.length) {
		if (L.data[i] == x) {
			L.data[i] = L.data[L.length - 1];  
			L.length--;                        
		}
		else {
			i++;  
		}
	}
}

//��������˫ָ�룬���Ա���ԭ����˳��
void DeleteAllX2(SqList& L, int x) {
	int j = 0, i = 0;
	while (i < L.length) {
		if (L.data[i] == x) {
			i++;
		}
		else
		{
			i++;
			j++;
		}
		L.data[j] = L.data[i];
	}

	L.length = j;
}


int main() {
	SqList L;
	InitList(L);
	ListInsert(L, 1, 1);
	ListInsert(L, 2, 2);
	ListInsert(L, 3, 3);
	ListInsert(L, 4, 2);
	ListInsert(L, 5, 4);
	ListInsert(L, 6, 2);
	PrintList(L);
	//DeleteAllX(L, 2);
	//
	//PrintList(L);
	DeleteAllX2(L, 2);
	PrintList(L);
	return 0;
}