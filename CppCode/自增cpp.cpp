#include<iostream>

using namespace std;

void increase(int* n) {
	(*n) +=1 ;
}
int main() {
	int n = 0;
	increase(&n);
	cout << n << endl;

	return 0;
}