#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    map<int,char> mp;
    set<char>st;
    for(int i=0;i<n;i++)
    {
        st.insert(str[i]);
        mp[str[i]]++;
    }
int ans =0;
for(int i=0;i<n;i++)
{
    if(mp[str[i]])
    {
        ans+=2;

    }

}
cout<<st.size()*2+n-st.size()<<endl;
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