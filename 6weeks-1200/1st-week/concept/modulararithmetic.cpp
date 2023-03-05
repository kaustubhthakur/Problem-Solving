// modular arthimetic 
//(a+b)%mod = ((a%mod)+(b%mod))%mod;
#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+5;
int main()
{
    int a,b;
    cin>>a>>b;
    long long dx = a%mod;
    long long dy = b%mod;
    cout<<(dx+dy)%mod;
    return 0;
}