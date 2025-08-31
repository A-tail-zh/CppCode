#include <iostream>

using namespace std;

const int MAX_HEAP_SIZE = 1000;

//小根堆
struct ArrayMinHeap{
private:
	int data[MAX_HEAP_SIZE];
	int heapSize = 0;

public:

	void printfHeap() {
		cout << "堆如下：" << endl;
		for (int i = 0; i < heapSize; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}

	
	void push(int value) {
		if (isFall()) return;
		data[heapSize] = value;
		heapSize++;
		heapifyUp(heapSize - 1);

	}
	
	int pop() {
		int number = data[0];
		swap(data[0], data[heapSize - 1]);
		heapSize--;
		heapifyDown(0);
		return number;
	}

	bool isEmpty() {
		return heapSize == 0;
	}

	bool isFall() {
		return heapSize == MAX_HEAP_SIZE;
	}

	int top() {
		return  data[0];
	}

	int size() {
		return heapSize;
	}

private:
	//父节点：(i - 1)/2
	//子节点：2i+1,2i+2
	void heapifyUp(int index) {
		while (index > 0) {
			int parent = (index - 1) / 2;
			if (data[index] >= data[parent]) break;
			swap(data[index], data[parent]);
			index = parent;		
		}
	}

	void heapifyDown(int index) {
		while (true) {
			int left = index * 2 + 1;
			int right = index * 2 + 2;
			int smallest = index;
			if ( left < heapSize && data[left] < data[smallest]) smallest = left;
			if ( right < heapSize && data[right] < data[smallest]) smallest = right;
			if (smallest == index) break;
			swap(data[smallest], data[index]);
			index = smallest;
		}
	}
};


int main() {
	ArrayMinHeap heap;
	heap.push(3);
	heap.push(9);
	heap.push(4);
	heap.push(1);
	heap.push(45);

	heap.printfHeap();

	cout << "堆顶元素: " << heap.top() << endl;

	cout << "依次弹出: ";
	while (!heap.isEmpty()) {
		cout << heap.pop() << " ";
	}
	cout << endl;

	
	return 0;
}