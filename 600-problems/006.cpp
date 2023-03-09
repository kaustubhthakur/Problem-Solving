#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        int s;
        cin >> s;
        string result;
        for (int d = 9; d >= 1; d--)
            if (s >= d) {
                result = char('0' + d) + result;
                s -= d;
            }
        cout << result << endl;
    }
}