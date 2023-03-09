#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R') {
			if (t[i] != 'R') {cout << "NO\n"; return;}
		}
		else {
			if (t[i] == 'R') {cout << "NO\n"; return;}
		}
	}
	cout << "YES\n";
}
int main()
{

int t;
cin>>t;
while(t--)
{
    solve();
}
return 0;
}