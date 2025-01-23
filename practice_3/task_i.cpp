#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
    int s, n;
    cin >> s >> n;
    vector <int> weight_each(n);
    
    for (int i = 0; i < n; i++){
        cin >> weight_each[i];
    }

    vector<int>max_weight(s + 1, 0);
    for (int each: weight_each){
        for (int j = s; j >= each; j--){
            max_weight[j] = max(max_weight[j], max_weight[j - each] + each);
        }
    }

    cout << max_weight[s] << endl;

    return 0;
}