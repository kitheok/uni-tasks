#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <bitset>

using namespace std;
/*На входе: текстовый файл, состоящий из предложений. Предложения (не строки, а именно предложения) оканчиваются точкой.
Получить на выходе – бинарный файл, состоящий из предложений.Вывести содержимое бинарного файла на консоль.*/
void writebin(const string& namefile1, const string& namefile2) {
	setlocale(LC_ALL, "ru");
	ifstream test(namefile1);
	ofstream test1(namefile2, ios::binary | ios::out);
	if (test.is_open() && test1.is_open()) {
		string sentence;
		char end = '.';
		while (getline(test, sentence, end)) {
			test1.write(sentence.c_str(), sentence.size());
		}
		test.close();
		test1.close();
		cout << "Текст был успешно переведен в бинарный файл." << endl;
	}
	else {
		cout << "Текст не переведен в бинарный файл." << endl;
	}
}

void readbin(const string& binfile) {
	setlocale(LC_ALL, "ru");
	ifstream test(binfile, ios::binary);
	if (test.is_open()) {
		string sentence;
		while (getline(test, sentence)) {
			cout << sentence << endl;
		}
		test.close();
	}
	else {
		cout << "Ошибка вывода бинарного файла.";
	}
}

int main() {
	string textfile = "test.txt";
	string binfile = "test1.bin";
	writebin(textfile, binfile);
	readbin(binfile);
}