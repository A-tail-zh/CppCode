#include<iostream>

using namespace std;

//算法思想：
// 使用三个下表变量从小到大遍历数组，当三个下表变量指向的元素相等时，
// 输出并向前推进指针，否则仅移动小于最大元素的下表变量，直到某个下标变量超出数组范围，
// 即可停止

//时间复杂度O(n) 空间复杂度O(1)

bool min(int a, int b, int c) {
	return (a < b && a < c);
}


void printCommonElements(int num1[], int num2[], int num3[], int n) {
	int i = 0, j = 0, k = 0;
	while (i < n && j < n && k < n) {
		if (num1[i] == num2[j] && num2[j] == num3[k]) {
			cout << num1[i] << " " << endl;
			i++;
			j++;
			k++;
		}
		else if (min(num1[i], num2[j], num3[k])) i++;
		else if (min(num2[j], num1[i], num3[k]))j++;
		else k++;
	}
}
int main() {
	int num1[] = { 1,2,3 };
	int num2[] = { 2,3,4 };
	int num3[] = { -1,0,2 };
	printCommonElements(num1, num2, num3, 3);

	return 0;
}