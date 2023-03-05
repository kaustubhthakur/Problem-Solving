#include <bits/stdc++.h>
using namespace std;
long long Inv(int a,int n)
{
    for(int i=2;i<=n;i++)
    {
        if(((a%n)*(i%n))%n==1)
        return i;
    }
}
int main()

{

    int n,a;
    cin>>n>>a;
    cout<<Inv(n,a);
}