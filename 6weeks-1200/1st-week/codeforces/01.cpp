#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<int>p(n);
    iota(p.begin(),p.end(),1);
  for(int i=n&1;i<n-2;i+=2)
  {
    swap(p[i],p[i+1]);
  }
  for(auto it:p)
  {
    cout<<it<<" ";
  }
  cout<<endl;
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