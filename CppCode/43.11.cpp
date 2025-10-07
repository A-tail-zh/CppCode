#include<iostream>
using namespace std;

typedef struct CDNode {
	int data;
	struct CDNode* pre, * next;
}CDNode,*CDListNode;

// ��ʼ��ѭ��˫������ͷ�ڵ㣩
bool InitCDList(CDListNode& L) {
    L = new CDNode;
    L->next = L;
    L->pre = L;
    return true;
}

// β�巨����ѭ��˫����
void CreateCDList_Tail(CDListNode& L, int arr[], int n) {
    CDNode* r = L;
    for (int i = 0; i < n; i++) {
        CDNode* s = new CDNode;
        s->data = arr[i];
        s->next = L;   // �½��ָ��ͷ���
        s->pre = r;    // �½���ǰ��ָ��β���
        r->next = s;   // β���ĺ��ָ���½��
        L->pre = s;    // ͷ����ǰ������Ϊ�½��
        r = s;         // β������
    }
}

// ��ӡѭ��˫����
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

// ���Ժ���
void TestSymmetry(int arr[], int n) {
    CDListNode L;
    InitCDList(L);
    CreateCDList_Tail(L, arr, n);
    PrintCDList(L);
    if (isCircularDoublyLinkedListSymmetric(L))
        cout << " �Գ�" << endl;
    else
        cout << " ���Գ�" << endl;
    cout << "-----------------------" << endl;
}

int main() {
    int a1[] = { 1, 2, 3, 2, 1 };
    int a2[] = { 1, 2, 3, 4, 5 };
    int a3[] = { 1 };
    int a4[] = { 1, 1 };
    int a5[] = { 1, 2, 2, 1 };

    cout << "����ѭ��˫����Գ��ԣ�" << endl;
    TestSymmetry(a1, 5);
    TestSymmetry(a2, 5);
    TestSymmetry(a3, 1);
    TestSymmetry(a4, 2);
    TestSymmetry(a5, 4);

    return 0;
}
