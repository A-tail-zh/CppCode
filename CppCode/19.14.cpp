#include<iostream>

using namespace std;
//算法思想：双指针
//使用minNumber记录三元组最小距离，初始为最大整数
//D为当前三元组的距离
//集合s1,s2,s3分别存储在数组s1,s2,s3，数组下表变量i=j=k=0,
// 当i<|s1|、j<|s2|、k<|s3|（|s|表示集合S中元素的个数）时循环下面的a-c
//a 计算距离D;
//b 如果D<minNumber 则更新minNumber = D;
//c 将s1[i],s2[j],s3[k]中最小值的下标+1；
//输出minNumber

//时间复杂度：O(n) 空间复杂度：O(1)

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