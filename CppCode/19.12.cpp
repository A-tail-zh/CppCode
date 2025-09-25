#include<iostream>

using namespace std;

//�㷨˼�룺����һ������Ϊn��������Ϊ������������A���飬�ڴ����������λ�ý���+1��
// �������������飬���������ֳ���n/2��ֱ������������������� -1��

//ʱ�临�Ӷȣ�O(n) �ռ临�Ӷȣ�O(n)

int findMainElement(int A[],int n) {
    int* num = new int[n](); // () ��ʼ��Ϊ 0
    for (int i = 0; i < n; i++) {
        if (A[i] < n) 
            num[A[i]]++;
    }
    int result = -1;
    for (int i = 0; i < n; i++) {
        if (num[i] > n / 2) {
            result = i;
            break;
        }
    }
    delete[] num; // �ͷ��ڴ�
    return result;
}

//�㷨˼�룺���ȱ������飬�ҳ����ִ�������Ԫ�أ�
// ������n/2���бȽϣ��ж��Ƿ�����Ԫ��

//ʱ�临�Ӷȣ�O(n) �ռ临�Ӷȣ�O(1)

int Majority(int A[], int n) {
    int c = A[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (c == A[i]) count++;
        else {
            if (count > 0) count--;
            else {
                c = A[i];
                count = 1;
            }
        }
    }

    if (count <= 0) return -1; 

    int finalCount = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == c) finalCount++;
    }
    return finalCount > (n / 2) ? c : -1;
}


int main() {
    int num1[] = {0,5,5,3,5,7,5,5};
    int num2[] = { 0,5,5,3,5,1,5,7 };
    cout << findMainElement(num1,8) << endl;
    cout << findMainElement(num2,8) << endl;
    cout << Majority(num1,8) << endl;
    cout << Majority(num2,8) << endl;
	return 0;
}