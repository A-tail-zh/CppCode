#include<iostream>
using namespace std;

//算法思想：首先将数组全部元素进行转置，然后对0小标到(n - p -1)下标位置里的元素进行转置
//再将(n - p)下表位置到(n -1)下标位置里的元素进行转置，输出数组即可



//时间复杂度：O(n) 空间复杂度：O(1)

void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void leftMove(int arr[], int p, int n) {
	for (int i = 0; i < n / 2; i++) {
		swap(arr, i, n - i - 1);
	}
	for (int i = 0; i < (n - p) / 2; i++) {
		swap(arr, i, (n - p) - i - 1);
	}
	for (int i = 0; i < p / 2; i++) {
		swap(arr, n - p + i, n - 1 - i);
	}

}

int main() {
	int n[4] = { 1,2,3,4 };
	leftMove(n, 2, 4);
	for (int i : n) {
		cout << i;
	}

	return 0;
}