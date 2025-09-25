#include<iostream>

using namespace std;

//算法思想：创建一个长度为n的数组作为计数器，遍历A数组，在创建数组里的位置进行+1，
// 最后遍历创建数组，如果里面出现超过n/2的直接输出，否则遍历完输出 -1；

//时间复杂度：O(n) 空间复杂度：O(n)

int findMainElement(int A[],int n) {
    int* num = new int[n](); // () 初始化为 0
    for (int i = 0; i < n; i++) {
        if (A[i] < n) 
            num[A[i]]++;
    }
    int result = -1;
    for (int i = 0; i < n; i++) {
        if (num[i] > n / 2) {
            result = i;
            break;
        }
    }
    delete[] num; // 释放内存
    return result;
}

//算法思想：首先遍历数组，找出出现次数最多的元素，
// 将其与n/2进行比较，判断是否是主元素

//时间复杂度：O(n) 空间复杂度：O(1)

int Majority(int A[], int n) {
    int c = A[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (c == A[i]) count++;
        else {
            if (count > 0) count--;
            else {
                c = A[i];
                count = 1;
            }
        }
    }

    if (count <= 0) return -1; 

    int finalCount = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == c) finalCount++;
    }
    return finalCount > (n / 2) ? c : -1;
}


int main() {
    int num1[] = {0,5,5,3,5,7,5,5};
    int num2[] = { 0,5,5,3,5,1,5,7 };
    cout << findMainElement(num1,8) << endl;
    cout << findMainElement(num2,8) << endl;
    cout << Majority(num1,8) << endl;
    cout << Majority(num2,8) << endl;
	return 0;
}