#include<iostream>

using namespace std;

//算法思想：使用两个下标变量，从两个数组开始，数组下标元素小的进行移动，
// 如果一个下标移动到数组的最后位置则固定，只移动另一个下标直到找到中位数

//时间复杂度：O(n) 空间复杂度：O(1)


int findMedian(int num1[], int num2[], int n) {
    int i = 0, j = 0;
    for (int count = 0; count < n - 1; count++) {
        if (i < n && (j >= n || num1[i] < num2[j])) {
            i++;
        }
        else {
            j++;
        }
    }
    if (i < n && (j >= n || num1[i] < num2[j]))
        return num1[i];
    else
        return num2[j];
}


//算法思想：分别求两个序列的的中位数，记为a和b
//如果a=b，则输出结束
//如果a<b，则舍弃第一个序列较小的一半，同时舍去第二个序列的较大的一半
//如果a>b，则舍弃第一个序列较大的一半，同时舍去第一个序列的较大的一半
//重复过程，直到只包含一个元素

//时间复杂度：O(log(n)) 空间复杂度：O(1)

int M_Search(int A[],int B[],int n) {
    int s1 = 0, d1 = n - 1, m1, s2 = 0, d2 = n - 1,m2;
    while (s1 != d1 || s2 != d2) {
        m1 = (s1 + d1) >> 1;
        m2 = (s2 + d2) >> 1;
        if (A[m1] == B[m2]) return A[m1];
        else if(A[m1] < B[m2]) {
            if ((s1 + d1) % 2 == 0) {
                s1 = m1;
                d2 = m2;
            }
            else
            {
                s1 = m1 + 1;
                d2 = m2;
            }
        }
        else
        {
            {
                if ((s1 + d1) % 2 == 0) {
                    d1 = m1;
                    s2 = m2;
                }
                else
                {
                    {
                        d1 = m1;
                        s2 = m2 + 1;
                    }
                }
            }
        }
    }
    return A[s1] < B[s2] ? A[s1] : B[s2];
}


int main() {
	int s1[] = {11,13,15,17,19 };
	int s2[] = {2,4,6,8,20};
	cout << findMedian(s1, s2, 5);
    cout << endl;
	cout << M_Search(s1, s2, 5);
	return 0;
}