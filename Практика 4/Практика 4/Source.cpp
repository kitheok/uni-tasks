#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

//2 �������
void first() {
	/*��� ����, ���������� ������������ �����.��������, ���� � ��� ������ : ���� ��� ����.*/
	
	setlocale(LC_ALL, "ru");
	ifstream file("test1.txt");
	int count1, count2;
	count1 = count2 = 0;
	char word;
	if (file.is_open()) {
		while (file>>noskipws>>word) {
			if (isdigit(word)) {
				count1 += 1;
			}
			else {
				count2 += 1;
			}
		}
		if (count1 > count2) {
			cout << "� ����� ���� ������ ��� ����.";
		}
		else if (count1 < count2) {
			cout << "� ����� ���� ������ ��� ����.";
		}
		else {
			cout << "������ ����.";
		}
	}
	else {
		cout << "�� ������� ������� ����.";
	}
	file.close();
}

void second() {
	/*�� ������� ��������� ����� �������� ������������������ ����� �����, ����������� ���������.�������� ��� ������������� ����� ��
	���� ������������������ � �������� ��������� ����.*/

	setlocale(LC_ALL, "ru");
	ifstream file("test2.txt");
	ofstream file1("test21.txt");
	int number;
	if (file.is_open() && file1.is_open()) {
		string line;
		while (getline(file, line)) {
			istringstream word(line);
			while (word >> number) {
				if (number > 0) {
					file1 << number << ' ';
				}
			}
		}
		file.close();
		file1.close();
	}
	else {
		cout << "�� ������� ������� ����.";
	}
}

int main() {
	first();
	second();
	return 0;
}
