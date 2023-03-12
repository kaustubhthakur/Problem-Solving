#include<bits/stdc++.h>
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
using namespace std;
const int inf = 1e9 + 7;
 
bool equals(vector<int>&a, vector<int>&b, int n){
    int dif = inf;
    forn(i, n){
        if(b[i] != 0) dif = min(dif, a[i] - b[i]);
    }
    if(dif < 0) return false; 
    if(dif == inf) return true;
    forn(i, n){
        if(a[i] - b[i] > dif) return false;
        if(b[i] != 0 && a[i] - b[i] < dif) return false;
    }
    return true;
}
 
void solve(){
    int n;
    cin >> n;
    vector<int>a(n), b(n);
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    cout << (equals(a, b, n) ? "YES\n" : "NO\n");
 
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}