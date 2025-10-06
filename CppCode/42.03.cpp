#include<iostream>
#include"LNode.h"

using namespace std;

void Inversion(LNode* &L) {
	LNode* pre = NULL;
	LNode* cur = L->next;
	LNode* next = NULL;
	while (cur != NULL) {
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}
	L->next = pre;
}

// 主函数测试
int main() {
    LNode* L;
    InitList(L);

    // 建表
    List_TailInsert(L);

    cout << "原链表：" << endl;
    PrintList(L);

    // 逆置
    Inversion(L);

    cout << "逆置后链表：" << endl;
    PrintList(L);

    return 0;
}