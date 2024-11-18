#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, t;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cin >> t;
    for (int i = 0; i < t; i++) {
        int row, col, value;
        cin >> row >> col >> value;

        matrix[row - 1][col - 1] = value;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

