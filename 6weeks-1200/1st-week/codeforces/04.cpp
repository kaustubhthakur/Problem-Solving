#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    if((n+m)%2==0)
    {
        cout<<"-1"<<" "<<"-1"<<endl;
    }
    else 
    {
        cout<<n/2<<" "<<m/2<<endl;
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