#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

//xеш-функция для строки
long long hashString(const string& s, int prime, int m) {
    long long hashValue = 0;
    for (char ch : s) {
        hashValue = (hashValue * prime + ch) % m;
    }
    return hashValue;
}

//алгоритм Карпа-Рабина
vector<int> rabinKarpSearch(const string& text, const string& pattern) {
    vector<int> result;
    
    int n = text.size();
    int m = pattern.size();
    if (m > n) return result;

    const int prime = 31; //простое число для хеширования
    const int mod = 1e9 + 9; //модуль для предотвращения переполнения

    long long patternHash = hashString(pattern, prime, mod);
    long long textHash = hashString(text.substr(0, m), prime, mod);
    long long primePow = 1;

    //предвычисляем степень prime^(m-1)
    for (int i = 0; i < m - 1; i++) {
        primePow = (primePow * prime) % mod;
    }

    for (int i = 0; i <= n - m; ++i) {
        //проверяем хеши
        if (patternHash == textHash) {
            //если хеши совпадают -> проверяем символы
            if (text.substr(i, m) == pattern) {
                result.push_back(i); //запоминаем найденое совпадение
            }
        }

        //вычисляем новый хеш, если не достигли конца текста
        if (i < n - m) {
            textHash = (textHash - text[i] * primePow) % mod; //удаляем старый символ
            textHash = (textHash * prime + text[i + m]) % mod; //добавляем новый символ
            if (textHash < 0) {
                textHash += mod; //избегаем отрицательных хешей
            }
        }
    }

    return result;
}

int main() {
    string filename;
    cout << "Enter the name of the text file:";
    cin >> filename;

    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    string text;
    string line;
    while (getline(file, line)) {
        text += line + '\n'; //чтение всего текста
    }
    file.close();

    string pattern;
    cout << "Enter a search pattern: ";
    cin.ignore(); //очищаем буфер ввода
    getline(cin, pattern);

    vector<int> occurrences = rabinKarpSearch(text, pattern);

    if (occurrences.empty()) {
        cout << "Substring not found." << endl;
    } else {
        cout << "Substring found by indexes: ";
        for (int index : occurrences) {
            cout << index << " ";
        }
        cout << endl;
    }

    return 0;
}
