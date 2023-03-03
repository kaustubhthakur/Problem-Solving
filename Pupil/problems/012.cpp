#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    int d = x * x + y * y;
    int r = 0;
    while (r * r < d) ++r;
    int ans = 2;
    if (r * r == d) ans = 1;
    if (x == 0 && y == 0) ans = 0; 
    cout << ans << '\n';
  }
}