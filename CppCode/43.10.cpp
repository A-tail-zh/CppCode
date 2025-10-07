#include<iostream>
#include"LNode.h"
using namespace std;

bool determineTheCommonSubsequence(LNode* a, LNode* b) {
	if (a == nullptr || a->next == nullptr) return false;
	if (b == nullptr || b->next == nullptr) return false;

	LNode* pa = a->next; // 遍历a的起点
	LNode* pb = b->next; // b的起点
	LNode* p1, * p2;

	while (pa != nullptr) {
		p1 = pa;
		p2 = pb;

		// 尝试从当前位置开始匹配
		while (p1 != nullptr && p2 != nullptr && p1->data == p2->data) {
			p1 = p1->next;
			p2 = p2->next;
		}

		// 如果b已经匹配完了，说明b是a的子序列
		if (p2 == nullptr) return true;

		// 否则从a的下一个结点继续尝试
		pa = pa->next;
	}

	return false;
}


int main() {
	LNode* A, * B;

	cout << "请输入链表 A（以 9999 结束）：" << endl;
	List_TailInsert(A);
	cout << "请输入链表 B（以 9999 结束）：" << endl;
	List_TailInsert(B);

	cout << "链表 A：";
	PrintList(A);
	cout << "链表 B：";
	PrintList(B);

	bool result = determineTheCommonSubsequence(A, B);
	if (result)
		cout << "链表 B 是链表 A 的连续子链表。" << endl;
	else
		cout << "链表 B 不是链表 A 的连续子链表。" << endl;

	return 0;
}