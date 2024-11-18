#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<double> rowAverages(m);
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        rowAverages[i] = static_cast<double>(rowSum) / n;
    }

    vector<double> colAverages(n);
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += matrix[i][j];
        }
        colAverages[j] = static_cast<double>(colSum) / m;
    }

    bool isRowAverageSame = true;
    for (int i = 1; i < m; i++) {
        if (rowAverages[i] != rowAverages[0]) {
            isRowAverageSame = false;
            break;
        }
    }
    bool isColAverageSame = true;
    for (int j = 1; j < n; j++) {
        if (colAverages[j] != colAverages[0]) {
            isColAverageSame = false;
            break;
        }
    }
    if (isRowAverageSame && isColAverageSame) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
