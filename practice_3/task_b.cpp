#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    ifstream input("lepus.in");
	ofstream output("lepus.out");
    int n;
    input >> n;
    vector<char> arr(n);
    for (int i = 0; i < n; i++){
        input >> arr[i];
    }
    input.close();

    vector <int> max_count(n + 1, -1);
    max_count[1] = 0;

    for (int i = 1; i <= n; i++){
        if (max_count[i] == -1) continue;

        for (int j = 1; j <= 5; j+=2){
            int next = i + j;

            if (next <= n) {
                if (arr[next-1] == 'w') continue;

                int have_grass;
                if (arr[next - 1] == '"') have_grass = 1;
                else have_grass = 0;

                int count = max_count[i] + have_grass;

                int result;
                if (max_count[next] > count) result = max_count[next];
                else result = count;

                max_count[next] = result; 
            }
        }
    }
    output << max_count[n] << endl;
    output.close();
    return 0;
}