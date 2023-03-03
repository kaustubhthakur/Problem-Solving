#include <bits/stdc++.h>
using namespace std;
int n, T, a[10005];

int main()
{
    for (cin >> T; T; T--)
    {
        cin >> n;
        int flag = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            for (int j = i + 1; j <= n; j++)
                flag |= __gcd(a[i], a[j]) <= 2;
        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}