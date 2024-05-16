#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <climits>

using namespace std;

/*2 вариант: Написать процедуру(ы), которая находит минимальный элемент в стеке.*/

struct Node {
	int head;
	Node* next;
	Node(int val1) :head(val1), next(nullptr){}
};

class Min {
private:
	Node* top;
	int minelm;
public:
	Min() :top(nullptr), minelm(INT_MAX) {}

	void push(int val) {
		Node* newnode = new Node(val);
		if (val < minelm) {
			newnode->head = 2 * val - minelm;
			minelm = val;
		}
		newnode->next = top;
		top = newnode;
	}

	int minim() {
		if (top == nullptr) {
			cout << "Стек пуст." << endl;
			return INT_MAX;
		}
		return minelm;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	Min stack;
	stack.push(1);
	stack.push(20);
	stack.push(-87);
	stack.push(0);
	stack.push(154);

	cout << "Минимальный элемент в стеке: " << stack.minim() << endl;
}

