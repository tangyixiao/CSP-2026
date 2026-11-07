#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,ans;
string s;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	s+=" ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		int x;
		char c;
		cin>>x>>c;
		for(int j=0; j<x; j++)
		{
			s+=c;
		}
	}
	int m=s.size();
	for(int i=1; i<=m; i++)
	{
		if(s[i]!=s[m-i])
		{
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
}
