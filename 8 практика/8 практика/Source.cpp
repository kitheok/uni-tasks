#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <list>


using namespace std;

/*2 �������: �������� ���������(�), ������� ������� ������� �������������� ���� ���������
��������� ������ L (��� ��������� - real).*/


//�������� ����
struct Node {
	double val;
	Node* next;
	Node(double val1):val(val1), next(nullptr){}
};



//������� ���������� �������� �������� �����
double average(Node* start) {
	if (start == nullptr) {
		return 0;
	}

	double sum = 0;
	int counter = 0;
	Node* current = start;

	while (current != nullptr) {
		sum += current->val;
		counter++;
		current = current->next;
	}

	if (counter == 0) {
		return 0;
	}
	return sum / counter;
}

int main() {
	setlocale(LC_ALL, "ru");
	Node* head = new Node(1.2);
	head->next = new Node(6.6);
	head->next->next = new Node(3.1);

	double result = average(head);

	cout << "������� ��������������: " << result;

	while (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	return 0;
}





