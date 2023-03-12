#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string str;
  for(int i=0;i<str.length();i++)
  cin>>str[i];

  for(int i=1;i<=str.length();i++)
  {
 if(str[i]%2==1)
 {
    swap(str[i],str[i+1]);
    str[i]++;
 }
  }
cout<<str<<endl;
}
int main()
{ 
  
        solve();
    
    return 0;
}
