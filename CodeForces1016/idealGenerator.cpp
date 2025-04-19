#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> inputs(t);

    // Read all inputs first
    for (int i = 0; i < t; ++i) {
        cin >> inputs[i];
    }

    // Process and print all outputs
    for (int i = 0; i < t; ++i) {
        if (inputs[i] % 2 == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
