#include <bits/stdc++.h>
using namespace std;
int s,b;
char c[200000000001];
int main()
{
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>s;
	for(int i=0;i<s;i++)
	{
		int x;
		char y;
		cin>>x;
		cin>>y;
		for(int z=0;z<x;z++)
		{
			c[b]=y;
			b++;
		}
	}
	int ans=0;
	for(int i=0;i<b/2;i++)
	{
		if(c[i]!=c[b-i-1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
