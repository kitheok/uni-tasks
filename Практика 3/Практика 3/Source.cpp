#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>

using namespace std;

//2 вариант

void first() {
	//Есть массив, в котором содержится случайные числа. Используя указатель вывести все числа по возрастанию. 
	//Помимо объявления и инициализации массива более он использоваться в программе не должен.
	setlocale(LC_ALL, "ru");
	int const size = 5;
	int array[size] = { 1, 11, 87, 32, 6 };
	cout << "Изначальный массив: ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
	int *first = array;
	//Метод пузырька
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(first + i) > *(first + j)) {
				int temp = *(first + i);
				*(first + i) = *(first + j);
				*(first + j) = temp;
			}
		}
	}
	cout << "Отсортированный массив: ";
	for (int i = 0; i < size; i++) {
		cout << *(first + i) << ' ';
	}
}

void second(char* array) {
	//Есть указатель на массив символов. Разработать функцию, которая поменяет все символы на следующие по алфавиту(a – b, b – c и тд.) 
	//Помимо объявления и инициализации массива более он использоваться в программе не должен.
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
	cout << "Первое задание: " << endl;
	first();
	cout << endl;
	char array[] = "Bim bim bam bam";
	cout << endl << "Второе задание: " << endl << "Изначальный массив с текстом: " << array << endl;
	second(array);
	cout << "Измененный массив с текстом: " << array;

	return 0;
}