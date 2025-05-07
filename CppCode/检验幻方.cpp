#include<iostream>
using namespace std;

int main() {
	const int n = 3;
	int arr[n][n] = {
		{ 8, 1, 6 },
	    { 3, 5, 7 },
		{ 4, 9, 2 }
	};
	int targe = (1 + n * n) * n / 2;
	//检验每一行
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += arr[i][j];
		}
		if (sum != targe) {
			cout << "不是幻方" << endl;
			return  0;
		}
	}
	//检验每一列
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += arr[j][i];
		}
		if (sum != targe) {
			cout << "不是幻方" << endl;
			return 0;
		}
	}
	//检验对角线
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++) {
		sum1 += arr[i][i];
		sum2 += arr[i][n - 1 - i];
	}
	if (sum1 != targe || sum2 != targe) {
		cout << "不是幻方" << endl;
		return 0;
	}


	return 0;
}