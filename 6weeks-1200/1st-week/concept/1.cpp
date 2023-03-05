#include <bits/stdc++.h>
using namespace std;
const int MOD =998244353 ;
int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}
long long fact(long long n)
{
    if(n==0 || n==1) return 1;
    else 
    return (n*fact(n-1));
}

void solve()
{

    long long n;
    cin>>n;  
    int cnt =0;
    if(n%2==1)
    {
        cout<<0<<endl;
    }
  else
  {
     long long ans = 1;
    for (int i = 1; i <= n / 2; ++i) {
        ans *= 1LL * i * i % MOD;
        ans %= MOD;
    }
    cout << ans << '\n';
    }
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