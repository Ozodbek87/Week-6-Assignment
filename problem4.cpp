#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string input;
    vector<int> parkingRow;
    int n;
    cin >> n;
    cin.ignore();
    getline(cin, input);


    stringstream ss(input);
    int spot;
    while (ss >> spot) {
        parkingRow.push_back(spot);
    }int count = 0;
    for (int i = 0; i < parkingRow.size(); i++) {
        if (parkingRow[i] == 0 &&
            (i == 0 || parkingRow[i - 1] == 0) &&
            (i == parkingRow.size() - 1 || parkingRow[i + 1] == 0)) {

            parkingRow[i] = 1;
            count++;
            if (count == n) {
                break;
            }
            }
    }

    if (count == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

