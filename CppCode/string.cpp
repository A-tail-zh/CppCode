#include<iostream>
#include<string>

using namespace std;

int main() {
	//默认初始化
	string s1;
	//列表初始化（拷贝初始化）
	string s2 = s1;
	string s3 = "Hello world";
	
	
	string s4(10, 'a'); // 10个a
	string s5("hello world");
	cout << s4 << endl;
	cout << s5.size() - 1;

	//字符串拼接
	string s6 = s5 + " " + s4;
	cout << s6 << endl;

	//字符串比较
	cout << (s1 == s2 ? "true" : "false") << endl;
	return 0;

}