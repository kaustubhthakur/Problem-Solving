#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str[3][n];
    map<string, int> mp;
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<n;j++)
        {
           cin >> str[i][j]; 
mp[str[i][j]]++;
        }
        
    }
   
   
    for(int i=0;i<3;i++)
    { 
        int ans =0;
        for(int j=0;j<n;j++)
        {
            if(mp[str[i][j]]==1)
            ans +=3;
            else if(mp[str[i][j]]==2)
             ans++;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}