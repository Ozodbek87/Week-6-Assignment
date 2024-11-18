#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m,n;

    cin>>m>>n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        cout << rowSum << endl;
    }

    return 0;
}