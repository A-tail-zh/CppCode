#include<iostream>

using namespace std;

//�㷨˼�룺
// ʹ�������±������С����������飬�������±����ָ���Ԫ�����ʱ��
// �������ǰ�ƽ�ָ�룬������ƶ�С�����Ԫ�ص��±������ֱ��ĳ���±�����������鷶Χ��
// ����ֹͣ

//ʱ�临�Ӷ�O(n) �ռ临�Ӷ�O(1)

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