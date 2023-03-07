#include<bits/stdc++.h>
using namespace std;
int main()
{int t;cin>>t;while(t--){
	long long x,tt;
	cin>>x>>tt;
	long long q=tt/4*4;
	tt%=4;
	while(tt--){if(x%2)x+=++q;else x-=++q;}
	cout<<x<<endl;
}}