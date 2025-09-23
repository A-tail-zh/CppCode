#include<iostream>
using namespace std;
void swap(int num[],int l,int r) {
	int temp = num[l];
	num[l] = num[r];
	num[r] = temp;
}

void exchangeThePositionsOfAAndB(int num[],int m,int n) {
	int length = m + n;
	for(int i = 0; i<length/2;i++)
		swap(num, i, m + n - 1-i);
	for(int i = 0; i < n/2;i++)
		swap(num,i,n - 1 -i);
	for (int i = n; i < n + (length -n) / 2; i++) {
		swap(num, i, length+n-i -1);
	}
}

int main() {
	int num[] = { 1,5,6,9,7,5,2,7,4,9 };
	for (int i : num) {
		cout << i << " ";
	}
	cout << endl;
	exchangeThePositionsOfAAndB(num, 4, 6);
	for (int i : num) {
		cout << i << " ";
	}

	return 0;
}