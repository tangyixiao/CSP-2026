#include <bits/stdc++.h>
using namespace std;
long long int all=0;
int n;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int ct;
		char st;
		cin>>ct>>st;
		for(int j=0;j<ct;j++)
		{
			s+=st;
		}
	}
	for(int i=0;i<s.length()/2;i++)
	{
		if(s[i]!=s[s.length()-1-i])
		{
			all++;
		}
	}
	cout<<all;
}