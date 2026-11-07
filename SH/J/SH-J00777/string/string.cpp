#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string s,t;
	int cnt = 0;
	while(n--)
	{
		int a;
		cin>>a;
		char c;
		cin>>c;
		for(int i = 1;i<=a;i++)s+=c;
	}
	for(int i = s.size();i>=1;i--)t+=s[i];
	for(int i = 1;i<=s.size();i++)
	{
		if(s[i]!=t[i])cnt++;
	}
	cout<<cnt;
	return 0;	
} 
