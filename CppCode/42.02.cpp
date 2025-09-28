#include<iostream>
#include"LNode.h"
#include<climits>//使用INT_MAX
//或者宏定义
//#define INT_MAX 0x7fffffff

void deleteMinNumber(LNode* L) {
	if (L->next == NULL)return;
	LNode* p = L->next;
	int min = INT_MAX;
	//找到最小的元素
	while (p != NULL) {
		min = min <= p->data ? min : p->data;
		p = p->next;
	}
	p = L;
	while (p->next != nullptr) {
		if (p->next->data == min) {
			LNode* s = p->next;
			p->next = s->next;
			delete s;
			return;
		}
		else {
			p = p->next;
		}
	}

}



// 测试函数
void testDeleteMinNumber() {
	LNode* L;
	InitList(L);

	cout << "请输入链表数据（以9999结束）: ";
	List_TailInsert(L);

	cout << "原始链表: ";
	PrintList(L);

	deleteMinNumber(L);

	cout << "删除最小值后的链表: ";
	PrintList(L);
}

int main() {
	testDeleteMinNumber();
	return 0;
}