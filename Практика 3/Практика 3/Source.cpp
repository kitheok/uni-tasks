#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>

using namespace std;

//2 �������

void first() {
	//���� ������, � ������� ���������� ��������� �����. ��������� ��������� ������� ��� ����� �� �����������. 
	//������ ���������� � ������������� ������� ����� �� �������������� � ��������� �� ������.
	setlocale(LC_ALL, "ru");
	int const size = 5;
	int array[size] = { 1, 11, 87, 32, 6 };
	cout << "����������� ������: ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
	int *first = array;
	//����� ��������
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(first + i) > *(first + j)) {
				int temp = *(first + i);
				*(first + i) = *(first + j);
				*(first + j) = temp;
			}
		}
	}
	cout << "��������������� ������: ";
	for (int i = 0; i < size; i++) {
		cout << *(first + i) << ' ';
	}
}

void second(char* array) {
	//���� ��������� �� ������ ��������. ����������� �������, ������� �������� ��� ������� �� ��������� �� ��������(a � b, b � c � ��.) 
	//������ ���������� � ������������� ������� ����� �� �������������� � ��������� �� ������.
	while (*array != '\0') {
		if (*array == 'z') {
			*array = 'a';
		}
		else if ((*array >= 'a' && *array < 'z') || (*array >= 'A' && *array < 'Z')) {
			*array = *array + 1;
		}
		array++;
	}

}

int main() {
	setlocale(LC_ALL, "ru");
	cout << "������ �������: " << endl;
	first();
	cout << endl;
	char array[] = "Bim bim bam bam";
	cout << endl << "������ �������: " << endl << "����������� ������ � �������: " << array << endl;
	second(array);
	cout << "���������� ������ � �������: " << array;

	return 0;
}