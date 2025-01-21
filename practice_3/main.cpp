#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

//Не проходит на тесте 8
void task1(int n, vector<int> &arr) {
	setlocale(LC_ALL, "ru");
	int sum = 0;

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] < 0 && arr[i] != arr[arr.size()-1]) {
			sum += arr[i+1];
			i++;
		}
		else {
			sum += arr[i];
		}
	}

	cout << "Результат: " << sum << endl;
}

//Полностью прошла
int task3(int n, int m) {
	vector<vector<int>> desk(n, vector<int>(m, 0));
	desk[0][0] = 1;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (i - 2 >= 0 && j - 1 >= 0) {
				desk[i][j] += desk[i - 2][j - 1];
			}
			if (i - 1 >= 0 && j - 2 >= 0) {
				desk[i][j] += desk[i - 1][j - 2];
			}
		}
	}

	return desk[n - 1][m - 1];
}

int task9(int s, vector<int> &arr) {
	int N = arr.size();
	vector<int> dp(s + 1, 0); // Массив для хранения максимального веса рюкзака

	// Проходим по каждому слитку
	for (int i = 0; i < N; ++i) {
		// Обходим массив dp в обратном порядке
		for (int j = s; j >= arr[i]; --j) {
			dp[j] = max(dp[j], dp[j - arr[i]] + arr[i]);
		}
	}

	return dp[s];
}

//Полностью прошло
int task11(int n, int rounds) {
	int result = 0; 
	for (int i = 2; i <= n; i++) {
		result = (result + rounds) % i; 
	}
	return result + 1;
}

int main() {
	setlocale(LC_ALL, "ru");

	//Лестница
	int n, N, M, boys, rounds;
	cout << "Введите кол-во ступенек и их номера: ";
	cin >> n;
	vector <int> array(n);

	for (int i = 0; i < array.size(); i++) {
		cin >> array[i];
	}
	task1(n, array);
	cout << endl;

	//Ход конём
	cout << "Введите кол-во строк: ";
	cin >> N;
	cout << "Введите кол-во столбцов: ";
	cin >> M;
	cout << "Результат: " << task3(N, M) << endl;

	//Проблема Иосифа чзх
	cout << endl << "";
	cin >> boys >> rounds;
	cout << task11(boys, rounds);

}