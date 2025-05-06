#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main() {
	ifstream infile("input.txt");
	ofstream outfile("output.txt");

	//1.按照单词读取
	cout << "按单词读取" << endl;
	string world;
	while (infile >> world) {
		cout << world << endl;
	}

	//2.按照行读取
	cout << "按行读取" << endl;
	string line;
	while (getline(infile, line)) {
		cout << line << endl;
	}

	//3.按照字符读取
	cout << "按字符读取" << endl;
	char ch;
	while (infile.get(ch)) {
		cout << ch << endl;
	}

	//写入文件
	outfile << "Hello World!" << endl;


	return 0;

}