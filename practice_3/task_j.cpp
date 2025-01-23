#include <iostream>
#include <vector>

using namespace std;

int fibonacci(int n){
    if (n <= 1) return n;

    vector<int>arr(n + 1);
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i<=n; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(2*n + 2) << endl;
}