#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input("joseph.in");
    ofstream output("joseph.out");

    int n, p;
    input >> n >> p;

    int result = 0;

    for (int i = 2; i <= n; i++) {
        result = (result + p) % i;
    }

    output << result + 1 << endl;

    input.close();
    output.close();
    return 0;
}