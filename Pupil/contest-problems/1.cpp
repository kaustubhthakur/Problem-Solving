#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string str;
    string st ="meowMEOW";
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    sort(str.begin(),str.end());
    sort(st.begin(),st.end());
    for (int i = 0; i < n; i++)
    {
        
    if(st==str)

        {
            cout << "YES" << endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}