#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <stack>
#include <list>

using namespace std;
/*2 вариант: Написать процедуру(ы), которая формирует очередь Queue, включив в нее по одному
разу элементы, которые входят в одну из очередей Queue1 и Queue2.*/
struct Node {
	int head;
	Node* next;
};

struct queue {
	Node* front;
	Node* end;
};

void newelm(queue* q, int head) {
	Node* temp = new Node;
	temp->head = head;
	temp->next = nullptr;
	if (q->end == nullptr) {
		q->end = q->front = temp;
	}
	else {
		q->end->next = temp;
		q->end = temp;
	}
}

int delelm(queue* q) {
	Node* temp = q->front;
	int head = temp->head;
	q->front = q->front->next;
	delete temp;
	return head;
}

bool isthereelm(queue q, int head) {
	Node* temp = q.front;
	while (temp != nullptr) {
		if (temp->head == head) {
			return false;
		}
		temp = temp->next;
	}
	return true;
}

queue check(queue q1, queue q2) {
	queue result;
	result.front = result.end = nullptr;
	while (q1.front != nullptr) {
		int head = delelm(&q1);
		if (isthereelm(q2, head)) {
			newelm(&result, head);
		}
	}

	while (q2.front != nullptr) {
		int head = delelm(&q2);
		if (isthereelm(q1, head)) {
			newelm(&result, head);
		}
	}
	return result;
}

int main() {
	setlocale(LC_ALL, "ru");
	queue q1, q2;
	q1.front = q1.end = q2.front = q2.end = nullptr;

	newelm(&q1, 1);
	newelm(&q1, 2);
	newelm(&q1, 0);
	newelm(&q2, 4);
	newelm(&q2, 5);
	newelm(&q2, 0);
	queue result = check(q1, q2);
	cout << "Очередь, включающая в себя по одному разу элементы из двух других очередей: " << endl;
	while (result.front != nullptr) {
		cout << delelm(&result) << endl;
	}
}