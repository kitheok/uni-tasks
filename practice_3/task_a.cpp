#include <iostream>
#include <vector>
#include <fstream>

//задача А. лестница
using namespace std;

int main()
{
	ifstream input("ladder.in");
	ofstream output("ladder.out");
	int n;
	input >> n; //количество ступенек

	if (n <= 0 || n > 100) {
		return 0;
	}

	vector<int> arr(n);
	for (int i = 0; i < n; i++) { //значения ступенек
		input >> arr[i];
	}
	input.close();

	vector <int> max_sum_arr(n + 1);

	max_sum_arr[0] = 0; //нет ступенек
	max_sum_arr[1] = arr[0]; //значение первой ступеньки

	for (int i = 2; i <= n; i++) {
		int sum1 = arr[i - 1] + max_sum_arr[i - 2]; //если поднимаемся на две ступеньки
		int sum2 = arr[i - 1] + max_sum_arr[i - 1]; //если поднимаемся на одну ступеньку

		int result;
		if (sum1 > sum2) result = sum1;
		else result = sum2;
		max_sum_arr[i] = result;
	}

	output << max_sum_arr[n] << endl; //максимальная сумма, которую можно получить поднимаясь по лестнице
	output.close();
	return 0;
}