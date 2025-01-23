#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 300001

using namespace std;

int main() {
    int tests;
    cin >> tests;

    vector<int> count_in_pyramids;

    for (int n = 1; ; n++) {
        int count_in_pyramid = (n * (n + 1) * (n + 2)) / 6;
        if (count_in_pyramid > 300000) break;
        count_in_pyramids.push_back(count_in_pyramid);
    }

    vector<int> results(tests);

    for (int i = 0; i < tests; ++i) {
        int current_test;
        cin >> current_test;

        vector<int> arr(current_test + 1, MAX);
        arr[0] = 0;

        for (int j = 0; j < count_in_pyramids.size(); ++j) {
            for (int k = count_in_pyramids[j]; k <= current_test; ++k) {
                if (arr[k - count_in_pyramids[j]] != MAX) {
                    arr[k] = min(arr[k], arr[k - count_in_pyramids[j]] + 1);
                }
            }
        }
        int check;
        if (arr[current_test] == MAX) check = 1;
        else check = arr[current_test];
        results[i] = check; 
    }

    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }

    return 0;
}
