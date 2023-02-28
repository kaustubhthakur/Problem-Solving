#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n,m;
cin>>n>>m;
vector<int>a(n);
for(int i=0;i<n;i++) cin>>a[i];


int sol=0;
map<int,int>mp;
for(int i=0;i<n;i++)
{
    mp[a[i]]++;
if(mp[a[i]]<=m)
{
    sol++;
}
}
cout<<sol<<endl;

}
int main()
{

int t;
cin>>t;
while(t--)
    solve();



    return 0;
}