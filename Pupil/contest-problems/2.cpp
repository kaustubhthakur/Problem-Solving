#include <bits/stdc++.h>
using namespace std;
void upper_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')   
			str[i] = str[i] - 32;        
	}
	cout<<str<<endl;
}
int main()
{
string str;
cin>>str;
upper_string(str);
return 0;
}