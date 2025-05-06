#include<iostream>

using namespace std;

int main() {
	// 指针的定义
	int* p1;
	long* p2;
	long long* p3;
	cout << "p1在内存中的地址是：" << sizeof(p1) << endl;

	//指针的使用
	int a = 10;
	int b = 20;
	p1 = &a; // p1指向a的地址
	cout << "a的地址是：" << &a << endl;
	cout << "p1是：" << p1 << endl;

	//*p解引用
	*p1 = 100; // 通过指针修改a的值
	cout << "a的值是：" << a << endl;

	//空指针
	int* ptr = nullptr;
	ptr = NULL;
	ptr = 0;

	//void*指针
	int i = 100;
	char ch = 'a';
	void* p = &i; // void*指针可以指向任意类型
	p = &ch; // 也可以指向char类型

	//指向指针的指针
	int** pp = &p1; // pp是指向p1的指针


	//指向常量的指针
	const int c1 = 10;
	const int* pc1 = &c1; // pc1是指向常量的指针

	//指针常量（const指针）
	int* const pc2 = &a; // pc2是指向a的常量指针

	//指针与数组
	int arr[5] = { 1, 2, 3, 4, 5 };
	cout << "arr的地址是：" << arr << endl;

	//指针运算
	int* pArr = arr; // pArr指向数组的首元素
	cout << "pArr的地址是：" << pArr << endl;
	cout << "pArr+1的地址是：" << pArr + 1 << endl; // 指针加1，指向下一个元素
	cout << "pArr[1]的值是：" << pArr[1] << endl; // 通过指针访问数组元素

	return 0;
}