#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char grid[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>grid[i][j];
     
        }
    }
    set<int>st;
    for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
{
st.insert(grid[i][j]);
}}
cout<<st.size()-1<<endl;

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