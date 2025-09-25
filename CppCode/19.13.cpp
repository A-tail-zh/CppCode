#include<iostream>

using namespace std;

//算法思想：使用辅助数组来记录已知数组中元素的出现

//时间复杂度：O(n) 空间复杂度：O(n)

int minInteger(int arr[], int n) {
    int* num = new int[n + 2];  
    for (int i = 1; i <= n + 1; i++) {
        num[i] = i;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n + 1)
            num[arr[i]] = -1;
    }
    int result = n + 1;
    for (int i = 1; i <= n + 1; i++) {
        if (num[i] != -1) {
            result = num[i];
            break;
        }
    }
    delete[] num;
    return result;
}

int main() {
	int arr[] = {-5,3,2,3};
	int arr1[] = {1,2,3};
	cout << minInteger(arr, 4);
	cout << endl;
	cout << minInteger(arr1, 3);

	return 0;
}