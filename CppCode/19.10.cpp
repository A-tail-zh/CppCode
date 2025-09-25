#include<iostream>
using namespace std;

//�㷨˼�룺���Ƚ�����ȫ��Ԫ�ؽ���ת�ã�Ȼ���0С�굽(n - p -1)�±�λ�����Ԫ�ؽ���ת��
//�ٽ�(n - p)�±�λ�õ�(n -1)�±�λ�����Ԫ�ؽ���ת�ã�������鼴��



//ʱ�临�Ӷȣ�O(n) �ռ临�Ӷȣ�O(1)

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