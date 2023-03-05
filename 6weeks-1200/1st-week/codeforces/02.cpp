#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];  
    int l=1,r=n;
    if(m>1)
  {
    int cnt=0;

  
    for(int i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1]+a[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
else 
{
    cout<<(n-1)/2<<endl;
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