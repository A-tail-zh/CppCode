#include<iostream>
#include"DNode.h"
using namespace std;

int main() {
    DLinkList L;
    int deletedValue;

    // 初始化双向链表
    initDLinkList(L);
    cout << "初始化双向链表成功！" << endl;

    // 插入测试数据
    cout << "\n插入5个元素到链表中..." << endl;
    insertDNode(L, 1, 10);  // 位置1插入10
    insertDNode(L, 2, 20);  // 位置2插入20
    insertDNode(L, 3, 30);  // 位置3插入30
    insertDNode(L, 1, 5);   // 位置1插入5（表头）
    insertDNode(L, 5, 40);  // 位置5插入40（表尾）

    cout << "当前链表元素: ";
    printDList(L);  // 预期输出: 5 10 20 30 40

    // 测试插入无效位置
    if (!insertDNode(L, 8, 100)) {
        cout << "插入位置8失败（无效位置）" << endl;
    }

    // 测试删除操作
    cout << "\n删除第2个元素..." << endl;
    if (deleteDNode(L, 2, deletedValue)) {
        cout << "删除的元素值为: " << deletedValue << endl;  // 预期删除10
    }
    cout << "删除后链表元素: ";
    printDList(L);  // 预期输出: 5 20 30 40

    // 测试删除表尾元素
    cout << "\n删除最后一个元素..." << endl;
    if (deleteDNode(L, 4, deletedValue)) {
        cout << "删除的元素值为: " << deletedValue << endl;  // 预期删除40
    }
    cout << "删除后链表元素: ";
    printDList(L);  // 预期输出: 5 20 30

    // 测试删除无效位置
    if (!deleteDNode(L, 5, deletedValue)) {
        cout << "删除位置5失败（无效位置）" << endl;
    }

    return 0;
}
