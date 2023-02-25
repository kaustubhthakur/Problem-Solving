#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,m;
cin>>n;
while(n--){
	int p=0,t=0;
	cin>>m;
for(int i=0;i<m;i++){
	int x;
	cin>>x;
p+=(x-t)/120;
	
	t=x;
	
}p+=(1440-t)/120;
if(p>=2)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}