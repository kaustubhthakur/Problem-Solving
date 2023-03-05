#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back



void solve() {
    int m; cin >> m;
    string t = to_string(m);
    string s = "1";
    for (int i = 1; i < sz(t); i++) {
        s += '0';
    }
    int k = stoi(s);
    cout << m - k << '\n';
}

int main() {
    int t;
    cin >> t;

    forn(tt, t) {
        solve();
    }
}