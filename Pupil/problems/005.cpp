#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, ans, i, j, min_v;
    string a;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        cin>>a;
        
        ll box[n];
        
        for(i=0; i<n; i++){
            cin>>box[i];
        }
        ans=0;
        for(i=n-1; i>=0; ){
            
            if(a[i]=='1'){
                min_v=box[i];
                while(i>=0){
                    min_v=min(min_v, box[i]);
                    if(a[i]=='1'){
                        ans=ans+box[i];
                        i--;
                    }else{
                        ans=ans+box[i];
                        i--;
                        ans=ans-min_v;
                        break;
                    }
                }
            }else{
                i--;
            }
        }
        
        cout<<ans<<"\n";
    }
    return 0;
}