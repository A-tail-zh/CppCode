#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main() {
	ifstream infile("input.txt");
	ofstream outfile("output.txt");

	//1.���յ��ʶ�ȡ
	cout << "�����ʶ�ȡ" << endl;
	string world;
	while (infile >> world) {
		cout << world << endl;
	}

	//2.�����ж�ȡ
	cout << "���ж�ȡ" << endl;
	string line;
	while (getline(infile, line)) {
		cout << line << endl;
	}

	//3.�����ַ���ȡ
	cout << "���ַ���ȡ" << endl;
	char ch;
	while (infile.get(ch)) {
		cout << ch << endl;
	}

	//д���ļ�
	outfile << "Hello World!" << endl;


	return 0;

}