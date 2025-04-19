#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> st(t);

    // Read all inputs first
    for (int i = 0; i < t; ++i) {
        cin >> st[i];
    }

    // Process each input
    for (int i = 0; i < t; ++i) {
        string s = st[i];
        int len = s.size();

        // Count leading zeros
        int leadingZeros = 0;
        for (char c : s) {
            if (c == '0') leadingZeros++;
            
        }

        // Count trailing zeros
        int trailingZeros = 0;
        while(s.back()=='0'){
            trailingZeros++;
            s.pop_back();
        }

        int toKeep = 1 + leadingZeros - trailingZeros;
        int ans = len - toKeep;
        cout << ans << endl;
    }

    return 0;
}
