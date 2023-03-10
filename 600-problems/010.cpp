#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back



void solve() {
    string s; cin >> s;
    set<char> v;
    int ans = 0;
    for (int i = 0; i < sz(s); i++) {
        v.insert(s[i]);
        if (sz(v) > 3) {
            ans++;
            v.clear();
            v.insert(s[i]);
        }
    }
    if (!v.empty()) ans++;
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    forn(tt, t) {
        solve();
    }
}