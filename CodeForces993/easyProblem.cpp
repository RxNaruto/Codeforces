#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n; // read the number n
        int cnt = 0;

        // Count how many pairs (i, n-i) such that i + (n-i) == n and i in [1, n-1]
        for (int i = 1; i < n; i++) {
            if ((i + (n - i)) == n) {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}