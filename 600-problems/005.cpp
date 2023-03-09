#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n; cin>>n;
cout<<n<<endl;
for(int i=0;i<n;i++)
{
int k=2;
for(int j=0;j<n;j++)
{
if(j==i) cout<<1<<" ";
else cout<<k++<<" ";
}
 
}
}
}