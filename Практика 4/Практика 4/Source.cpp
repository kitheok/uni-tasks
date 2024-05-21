#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

//2 вариант
void first() {
	/*Дан файл, содержащий произвольный текст.Выяснить, чего в нем больше : букв или цифр.*/
	
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
			cout << "В файле цифр больше чем букв.";
		}
		else if (count1 < count2) {
			cout << "В файле букв больше чем цифр.";
		}
		else {
			cout << "Пустой файл.";
		}
	}
	else {
		cout << "Не удалось открыть файл.";
	}
	file.close();
}

void second() {
	/*Во входном текстовом файле записана последовательность целых чисел, разделенных пробелами.Записать все положительные числа из
	этой последовательности в выходной текстовый файл.*/

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
		cout << "Не удалось открыть файл.";
	}
}

int main() {
	first();
	second();
	return 0;
}
