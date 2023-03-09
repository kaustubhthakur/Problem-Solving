#include <bits/stdc++.h>
using namespace std;
void solve()
{
string str;
int ans =0;
map<int,char> mp;
for(int i=0;i<str.length();i++)
{
    cin>>str[i]; 
     mp[str[i]]++;
}

for(int i=0;i<str.length();i+=2)
{
  
    if(mp[str[i]])
    {
        ans+=1;
    }
}
cout<<ans<<endl;
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