#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
        int n; string s; cin>>n>>s;
        int c=0; if(s[0]!=s[n-1])c++;
		for(int i=1; i<n/2; i++){
			if(s[i]!=s[n-i-1]&&s[i-1]==s[n-i])c++;
			if(c>1)break;
		}
		cout<<(c<=1?"Yes":"No")<<'\n';
	}
	return 0;
}