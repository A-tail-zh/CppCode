#include<iostream>
using namespace std;
int main() {
	const int n = 8;
	int a[n] = { 1,2,3,4,5,6,7,8 };
	int newArr[n];

	//1.��������
	for (int i = 0; i < n; i++) {
		newArr[i] = a[n - 1 - i];
	}

	//2.ԭ�ؽ�����˫ָ�룩
	int head = 0, tail = n - 1;
	while (head < tail) {
		int temp = a[head];
		a[head] = a[tail];
		a[tail] = temp;
		head++;
		tail--;
	}

	for (int i = 0; i < n; i++) {
		cout << newArr[i] << " ";
	}

	return 0;
}