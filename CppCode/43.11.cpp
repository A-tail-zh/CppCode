#include<iostream>
using namespace std;

typedef struct CDNode {
	int data;
	struct CDNode* pre, * next;
}CDNode,*CDListNode;

// 初始化循环双链表（带头节点）
bool InitCDList(CDListNode& L) {
    L = new CDNode;
    L->next = L;
    L->pre = L;
    return true;
}

// 尾插法建立循环双链表
void CreateCDList_Tail(CDListNode& L, int arr[], int n) {
    CDNode* r = L;
    for (int i = 0; i < n; i++) {
        CDNode* s = new CDNode;
        s->data = arr[i];
        s->next = L;   // 新结点指向头结点
        s->pre = r;    // 新结点的前驱指向尾结点
        r->next = s;   // 尾结点的后继指向新结点
        L->pre = s;    // 头结点的前驱更新为新结点
        r = s;         // 尾结点后移
    }
}

// 打印循环双链表
void PrintCDList(CDListNode L) {
    CDNode* p = L->next;
    while (p != L) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}


bool isCircularDoublyLinkedListSymmetric(CDListNode L) {
	if (L == NULL || L->next == NULL) return false;
	CDNode* p = L->next, * q = L->pre;
	while (q != p && q->next != p) {
		if (q->data != p->data) {
			return false;
			
		}
		p = p->next;
;		q = q->pre;
	}
	return true;
}

// 测试函数
void TestSymmetry(int arr[], int n) {
    CDListNode L;
    InitCDList(L);
    CreateCDList_Tail(L, arr, n);
    PrintCDList(L);
    if (isCircularDoublyLinkedListSymmetric(L))
        cout << " 对称" << endl;
    else
        cout << " 不对称" << endl;
    cout << "-----------------------" << endl;
}

int main() {
    int a1[] = { 1, 2, 3, 2, 1 };
    int a2[] = { 1, 2, 3, 4, 5 };
    int a3[] = { 1 };
    int a4[] = { 1, 1 };
    int a5[] = { 1, 2, 2, 1 };

    cout << "测试循环双链表对称性：" << endl;
    TestSymmetry(a1, 5);
    TestSymmetry(a2, 5);
    TestSymmetry(a3, 1);
    TestSymmetry(a4, 2);
    TestSymmetry(a5, 4);

    return 0;
}
