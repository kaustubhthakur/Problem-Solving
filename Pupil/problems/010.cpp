#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    string fb;
    int cur = 1;
    while(fb.size() < 100)
    {
        if(cur % 3 == 0) fb += "F";
        if(cur % 5 == 0) fb += "B";
        cur++;
    }
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        cout << (fb.find(s) != string::npos ? "YES" : "NO") << endl;
    }
}