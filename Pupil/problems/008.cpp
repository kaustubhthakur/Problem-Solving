#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int flag = 1;
    for(int i=1;i<=n;i++)
    {
        if(a[i]%a[1])
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
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