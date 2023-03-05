#include <bits/stdc++.h>
using namespace std;
void solve()
{

int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
cout<<(j==1 || j==i)<<" ";
    }
    cout<<endl;
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