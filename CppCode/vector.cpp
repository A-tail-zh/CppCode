#include <iostream>
#include <vector>
using namespace std;

int main() {

	//默认初始化
	vector<int> v1;

	//列表初始化（拷贝初始化）
	vector<char> v2 = {'a','v','g'};
	vector<char> v3{ 'a','v','g' };
	//直接初始化
	vector <char> v4(2);
	vector <int> v5(3,100);

	//访问元素
	cout << v5[0];

	//遍历所有
	for (int i = 0; i < v5.size(); i++) {
		cout << v5[i] << " ";
	}

	v5.push_back(69);

	for (int num : v5) {
		cout << num << " ";
	}

	return 0;
}