#include <iostream>
#include <cmath>
#include <vector>
#include <list>
#include <cstdlib>

using namespace std;

//1 задание
/*Обозначим через a mod b остаток от деления натурального числа a на
натуральное число b. Алгоритм вычисления значения функции F(n), где n —
натуральное число, задан следующими соотношениями:
F(0) = 0;
F(n) = n + F(n − 3), если n mod 3 = 0, и n > 0;
F(n) = n + F(n − (n mod 3)), если n mod 3 > 0
Чему равно значение функции F(26)?*/

int first(int n) {
	if (n == 0) {
		return 0;
	}
	else if ((n % 3 == 0) && (n > 0)) {
		return n + first(n - 3);
	}
	else {
		return n + first(n - (n % 3));
	}
}

void task1() {
	cout << first(26);
}

//2 задание
/*Напишите рекурсивную функцию sum_sub(list), которая будет принимать список
целых чисел. Эта функция будет суммировать все нечётные числа и вычитать все
чётные числа. В конце она будет возвращать получившееся значение.*/

//int sum_sub(list<int> nums){
//	if (nums.empty()) {
//		return 0;
//	}
//	else {
//		int list1 = nums.front();//вводим новую переменную, в которой будут заложен элемент из нашего листа(начиная с самого начала листа)
//		nums.pop_back();//и сразу удаляем этот же элемент из списка
//		if (list1 % 2 == 0) {
//			return list1 - sum_sub(nums);
//		}
//		else {
//			return list1 + sum_sub(nums);
//		}
//	}
//}
//
//void main() {
//	list<int> numbers = { 1, 2, 3, 4, 5 , 6, 7 };
//	cout << sum_sub(numbers);
//}

//задание 3
/*Напишите программу для печати четных или нечетных чисел в заданном
диапазоне с использованием рекурсии.*/

//void third(int a, int b) {
//	setlocale(LC_ALL, "ru");
//	cout << "Чётные: ";
//	for (int i = a; i <= b; i++) {
//		if (i % 2 == 0) {
//			cout << i << ' ';
//		}
//	}
//	cout << endl << "Нечётные: ";
//	for (int i = a; i <= b; i++) {
//		if (i % 2 != 0) {
//			cout << i << ' ';
//		}
//	}
//}
//
//void main() {
//	setlocale(LC_ALL, "ru");
//	third(-20, -5);
//}
