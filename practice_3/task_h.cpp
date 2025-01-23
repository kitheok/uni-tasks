#include <fstream>
#include <vector>
using ll = long long;

using namespace std;
int main() {
    ifstream input("peacefulsets.in");
    ofstream output("peacefulsets.out");

    const int MAX = 2020;
    vector<vector<ll>> arr(MAX, vector<ll>(MAX, 0));
    fill(arr[0].begin(),arr[0].end(),1);


    for (int sum = 1; sum < MAX; sum++){
        for (int mx = 1; mx < MAX; mx++){
            arr[sum][mx] = arr[sum][mx-1] + (mx <= sum ? arr[sum-mx][mx/2] : 0);
        }
    }

    int n;
    input >> n;
    input.close();

    output << arr[n][n] << endl;
    output.close();

    return 0;
}