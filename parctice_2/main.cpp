#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <random>
#include <ctime>
#include <cstdlib>
#include <unordered_map>
#include <utility>
#include <climits>

using namespace std;

 //нахождение ближайшей пары точек среди заданного множества точек 
void task1(vector <int>& arr) {
	setlocale(LC_ALL, "ru");
	double min = 100000;
	double distance;
	vector<int> result;

	if (arr.size() % 2 == 0) {
		for (int i = 0; i < arr.size(); i += 2) {
			distance = sqrt(pow(arr[i], 2) + pow(arr[i + 1], 2));
			if (distance < min) {
				min = distance;
				result = { arr[i], arr[i + 1] };
			}
		}
		cout << "The minimum Euclidean distance is: " << (double)min << endl;
		cout << "Coordinates: " << '(' << result[0] << ',' << result[1] << ')' << endl;
	}
	else {
		cout << "Not all coordinates have been entered." << endl;
	}
}

//поиск нахождения медианы в неотсортированном массиве 
double task3(vector <int>& arr, int n) {
	sort(arr.begin(), arr.end());
	if (n % 2 != 0) {
		return (double)arr[n / 2];
	}
	return (double)(arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
}

//быстрый алгоритм возведения числа в целую степень 
int task4(int num, int n) {
	setlocale(LC_ALL, "ru");
	if (n == 0) {
		return 1;
	}
	else if (n < 0) {
		cout << "An invalid degree value has been introduced." << endl;
		return -1; 
	}

	// Рекурсивное деление
	int half = task4(num, n / 2); 
	if (n % 2 == 0) {
		return half * half; 
	}
	else {
		return num * half * half; 
	}
}

//Алгоритм нахождения наибольшей общей подстроки (LCS)
int task5(const string& first, const string& second, unordered_map<string, int>& memo){
    if(first.empty() || second.empty()){
        return 0;
    }

    string key = first + '|' + second;
    if(memo.find(key)!=memo.end()){
        return memo[key];
    }

    int firts_size = first.length();
    int second_size = second.length();

    if (firts_size == 1 || second_size == 1){
        return (first == second) ? 1:0;
    }

    size_t mid_first = firts_size/2;
    size_t mid_second =second_size/2;
    int lcs1 = task5(first.substr(0, mid_first), second.substr(mid_second), memo);
    int lcs2 = task5(first.substr(mid_first), second.substr(0, mid_second), memo);

    int lcs = max(lcs1, lcs2);
    memo[key] = lcs;

    return lcs;
}

//алгоритм, который разделяет массив на k групп с минимальной разницей в суммах элементов
void findGroups(const vector<int>& arr, vector<vector<int>>& groups, vector<int>& groupSum, int k, int currentIndex, int& minDifference, vector<vector<int>>& bestGroups) {
    if (currentIndex == arr.size()) {
        int maxSum = *max_element(groupSum.begin(), groupSum.end());
        int minSum = *min_element(groupSum.begin(), groupSum.end());
        int difference = maxSum - minSum;

        if (difference < minDifference) {
            minDifference = difference;
            bestGroups = groups;
        }
        return;
    }

    for (int i = 0; i < k; i++) {
        groups[i].push_back(arr[currentIndex]);
        groupSum[i] += arr[currentIndex];

        findGroups(arr, groups, groupSum, k, currentIndex + 1, minDifference, bestGroups);

        groupSum[i] -= arr[currentIndex];
        groups[i].pop_back();
    }
}

void task7_8(const vector<int>& arr, int k) {
    vector<vector<int>> groups(k);
    vector<int> groupSum(k, 0);
    int minDifference = INT_MAX;
    vector<vector<int>> bestGroups(k);

    findGroups(arr, groups, groupSum, k, 0, minDifference, bestGroups);

    cout << "Minimum difference in amounts: " << minDifference << endl;
    for (int i = 0; i < k; i++) {
        cout << "Group " << i + 1 << ": ";
        for (int num : bestGroups[i]) {
          cout << num << " ";
        }
        cout << endl;
    }
}


//проба на двоичные числа
/*int test1(int a, int b) {
	int sum1, sum2, mult1, mult2, mult3, dif, end;
	int fra, frb, sca, scb;

	fra = a / 10;
	sca = a % 10;
	frb = b / 10;
	scb = b % 10;

	sum1 = fra + sca;
	sum2 = frb + scb;
	mult1 = fra * frb;
	mult2 = sca * scb;

	mult3 = (sum1 * sum2) - mult1 - mult2;
	end = mult1 * 100 + mult3 * 10 + mult2;

	return end;

}*/


int main(){
	int num, b, size, n, step;

	//Тестовой массив для проверки
	vector <int> arr = { 1, 2, 3, 4, 5, 6 };

	//Создание рандомного динамического массива
	cout << "Enter the size of the array:";
	cin >> size;
	vector<int> array(size);
	srand(time(NULL));
	cout << "Your array looks like this:";
	for (int i = 0; i < size; i++) {
		array[i] = rand()%100;
		cout << array[i] << ' ';
	}
	cout << endl;
	cout << endl;

	//1 задание
	task1(array);

  //2 задание 
  
	//3 задание
	cout << "Median: " << task3(array, array.size()) << endl;

	cout << endl;
	//4 задание
	cout << "Enter the number and the degree of elevation: ";//Ввод числа и степень его возведения
	cin >> num >> n;
	cout << "Result: " << task4(num, n) << endl;

  cout << endl;
  //5 задание
  string first = "ABCABCZXY";
  string second = "ABCZXYABC";

  unordered_map<string, int> memo;
  int result = task5(first, second, memo);

  cout << "The length of the largest common substring: " << result << endl;

  //6 задание
	
  //7 и 8 заадание 
	vector<int> array_1 = {15, 20, 25, 30, 35, 40, 50};
  int k = 2;

  task7_8(array_1, k);

  return 0;
	/*cout << "Алгоритм Карацубы. Введите два числа: ";
	cin >> a >> b;
	cout << "Результат: ";*/
}
