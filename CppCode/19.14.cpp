#include<iostream>

using namespace std;
//�㷨˼�룺˫ָ��
//ʹ��minNumber��¼��Ԫ����С���룬��ʼΪ�������
//DΪ��ǰ��Ԫ��ľ���
//����s1,s2,s3�ֱ�洢������s1,s2,s3�������±����i=j=k=0,
// ��i<|s1|��j<|s2|��k<|s3|��|s|��ʾ����S��Ԫ�صĸ�����ʱѭ�������a-c
//a �������D;
//b ���D<minNumber �����minNumber = D;
//c ��s1[i],s2[j],s3[k]����Сֵ���±�+1��
//���minNumber

//ʱ�临�Ӷȣ�O(n) �ռ临�Ӷȣ�O(1)

bool min(int a,int b,int c) {
	return (a <= b && a <= c);
}

int abs(int a) {
	return a > 0 ? a : -a;
}

int findMin(int s1[], int s2[], int s3[],int length1,int length2,int length3) {
	int minNumber = INT_MAX,D;
	int i = 0, j = 0, k = 0;
	
	while (i < length1 && j < length2 && k < length3 &&minNumber > 0) {
		D = abs(s1[i] - s2[j]) + abs(s2[j] - s3[k]) + abs(s3[k] - s1[i]);
		minNumber = minNumber < D ? minNumber : D;
		if (min(s1[i], s2[j], s3[k])) i++;
		else if (min(s2[j], s1[i], s3[k])) j++;
		else k++;
	}
	return minNumber;
}


int main() {
	int s1[] = {-1,0,9};
	int s2[] = {-25,-10,10,11};
	int s3[] = {2,9,17,30,41};
	cout << findMin(s1, s2, s3, 3, 4, 5);

	return 0;

}