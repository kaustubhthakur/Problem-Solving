#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 int t;
 cin>>t;
 while(t--)
 {
   int n;
   cin>>n;
   if(n%2==0)
   {
    cout<<n/2<<endl;
   }
   else if(n==1)
   {
    cout<<1<<endl;
   }
   if(n%2==1)
   {
    cout<<n/2+1<<endl;
   }
 }

    return 0;
}