#include<iostream>
#include<string>

using namespace std;

int main() {
	//Ĭ�ϳ�ʼ��
	string s1;
	//�б��ʼ����������ʼ����
	string s2 = s1;
	string s3 = "Hello world";
	
	
	string s4(10, 'a'); // 10��a
	string s5("hello world");
	cout << s4 << endl;
	cout << s5.size() - 1;

	//�ַ���ƴ��
	string s6 = s5 + " " + s4;
	cout << s6 << endl;

	//�ַ����Ƚ�
	cout << (s1 == s2 ? "true" : "false") << endl;
	return 0;

}