#include<iostream>

using namespace std;

//�㷨˼�룺ʹ�������±���������������鿪ʼ�������±�Ԫ��С�Ľ����ƶ���
// ���һ���±��ƶ�����������λ����̶���ֻ�ƶ���һ���±�ֱ���ҵ���λ��

//ʱ�临�Ӷȣ�O(n) �ռ临�Ӷȣ�O(1)


int findMedian(int num1[], int num2[], int n) {
    int i = 0, j = 0;
    for (int count = 0; count < n - 1; count++) {
        if (i < n && (j >= n || num1[i] < num2[j])) {
            i++;
        }
        else {
            j++;
        }
    }
    if (i < n && (j >= n || num1[i] < num2[j]))
        return num1[i];
    else
        return num2[j];
}


//�㷨˼�룺�ֱ����������еĵ���λ������Ϊa��b
//���a=b�����������
//���a<b����������һ�����н�С��һ�룬ͬʱ��ȥ�ڶ������еĽϴ��һ��
//���a>b����������һ�����нϴ��һ�룬ͬʱ��ȥ��һ�����еĽϴ��һ��
//�ظ����̣�ֱ��ֻ����һ��Ԫ��

//ʱ�临�Ӷȣ�O(log(n)) �ռ临�Ӷȣ�O(1)

int M_Search(int A[],int B[],int n) {
    int s1 = 0, d1 = n - 1, m1, s2 = 0, d2 = n - 1,m2;
    while (s1 != d1 || s2 != d2) {
        m1 = (s1 + d1) >> 1;
        m2 = (s2 + d2) >> 1;
        if (A[m1] == B[m2]) return A[m1];
        else if(A[m1] < B[m2]) {
            if ((s1 + d1) % 2 == 0) {
                s1 = m1;
                d2 = m2;
            }
            else
            {
                s1 = m1 + 1;
                d2 = m2;
            }
        }
        else
        {
            {
                if ((s1 + d1) % 2 == 0) {
                    d1 = m1;
                    s2 = m2;
                }
                else
                {
                    {
                        d1 = m1;
                        s2 = m2 + 1;
                    }
                }
            }
        }
    }
    return A[s1] < B[s2] ? A[s1] : B[s2];
}


int main() {
	int s1[] = {11,13,15,17,19 };
	int s2[] = {2,4,6,8,20};
	cout << findMedian(s1, s2, 5);
    cout << endl;
	cout << M_Search(s1, s2, 5);
	return 0;
}