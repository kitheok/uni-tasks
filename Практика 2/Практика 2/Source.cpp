#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

//1 ������� 
/*���� ������, ���������� ���������� �����. ����� ���������� ����,
������������ � ����� b.*/

int counter(string text) {
	int count = 0;
	stringstream ss(text);
	string word;
	while (ss >> word) {
		if (word[0] == 'b' || word[0] == 'B') {
			count++;
		}
	 }
	return count;
}

void main() {
	string text;
	setlocale(LC_ALL, "ru");
	cout << "������� �����: ";
	getline(cin, text);
	cout << "���-�� ����, ������������ � b: " << counter(text);
}

//2 �������
/*��� ����� �� 60 ��������. ������� ���� �����, ����������� (����� ������
� ��������������� �������� ��������� ������) ��� �������� � ����
�����.*/
//�����, ������� � ����� ��� ��������: jksdnfnsjkd13241hjhj34634njkkj2342nkjkj34j5njknskjnfkjdsn123

//void main() {
//	setlocale(LC_ALL, "ru");
//	string text;
//	cout << "������� �����: ";
//	getline(cin, text);
//	if (text.length() == 60) {
//		string text2 = text;
//		for (int i = 0; i < text.length(); ++i) {
//			if (isdigit(text[i])) {
//				text2[i] = '-';
//			}
//		}
//		cout << text << endl << text2;
//	}
//	else {
//		cout << "������ ����� �� �������� 60 ��������.";
//	}
//}
