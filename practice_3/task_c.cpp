#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    ifstream input("knight.in");
	ofstream output("knight.out");
    int n, m;
    input >> n >> m;
    input.close();

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

    output << desk[n - 1][m - 1] << endl;
    output.close();
    return 0;
}