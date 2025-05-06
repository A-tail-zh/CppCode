#include<iostream>
#include<string>
using namespace std;


struct Student {
	string name;
	int age;
	int id;
};

void printStudent(const Student& s) {
	cout << "Name: " << s.name << ", Age: " << s.age << ", ID: " << s.id << endl;
}

int main() {
	Student s1 = { "zhangsan", 20, 1001 };
	Student s2 = { "lisi", 21, 1002 };

	printStudent(s1);
	printStudent(s2);

	// 结构体数组
	Student students[2] = { {"wangwu", 22, 1003}, {"zhaoliu", 23, 1004} };
	for (int i = 0; i < 2; ++i) {
		printStudent(students[i]);
	}

	


	return 0;
}