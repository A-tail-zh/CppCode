#include <iostream>
#include "LNode.h"
using namespace std;

int main() {
    LNode* L;
    cout << "用尾插法建表，请输入一组整数，以9999结束：" << endl;
    List_TailInsert(L);  // 

    cout << "建表完成，链表内容为：" << endl;
    PrintList(L);

    cout << "表长：" << length(L) << endl;

    cout << "在第3个位置插入99" << endl;
    ListInsert(L, 3, 99);
    PrintList(L);

    int delValue;
    cout << "删除第2个位置的元素" << endl;
    if (ListDelete(L, 2, delValue)) {
        cout << "删除的值是：" << delValue << endl;
    }
    else {
        cout << "删除失败！" << endl;
    }
    PrintList(L);

    cout << "查找值为99的节点：" << endl;
    LNode* p = LocateElem(L, 99);
    if (p) cout << "找到了，地址：" << p << " 值：" << p->data << endl;
    else cout << "没找到" << endl;

    cout << "查找第4个位置的节点：" << endl;
    p = GetElem(L, 4);
    if (p) cout << "找到了，值：" << p->data << endl;
    else cout << "第4个位置不存在" << endl;

    return 0;
}
