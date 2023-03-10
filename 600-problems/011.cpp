#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n,k;
cin>>n>>k;

for(int i=1;i<=n/2;i++)
{
    for(int j=i;j<=n/2;j++)
    {
        cout<<"YES"<<endl;
        return ;
if((i+k)*j%4==0)
{
    cout<<i<<" "<<j<<" ";
}
    }
}
cout<<"No"<<endl;

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