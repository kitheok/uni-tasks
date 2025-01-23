#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(i + 1);
        for (int j = 0; j <= i; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> max_count(n, vector<int>(n, 0));


    for (int i = 0; i < n; i++) {
        max_count[n - 1][i] = arr[n - 1][i];
    }


    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            max_count[i][j] = arr[i][j] + max(max_count[i + 1][j], max_count[i + 1][j + 1]);
        }
    }

    cout << max_count[0][0] << endl;

    return 0;
}