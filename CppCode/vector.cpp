#include <iostream>
#include <vector>
using namespace std;

int main() {

	//Ĭ�ϳ�ʼ��
	vector<int> v1;

	//�б��ʼ����������ʼ����
	vector<char> v2 = {'a','v','g'};
	vector<char> v3{ 'a','v','g' };
	//ֱ�ӳ�ʼ��
	vector <char> v4(2);
	vector <int> v5(3,100);

	//����Ԫ��
	cout << v5[0];

	//��������
	for (int i = 0; i < v5.size(); i++) {
		cout << v5[i] << " ";
	}

	v5.push_back(69);

	for (int num : v5) {
		cout << num << " ";
	}

	return 0;
}