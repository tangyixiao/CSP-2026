#include <bits/stdc++.h>
using namespace std;
int n;
long long ans;
string tem="";
bool hw(string s)
{
	for(int i=0;i<=s.size()-1;i++)
	{
		if(s[i]!=s[s.size()-i-1]) return false;
	}
	return true;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int q=0;
		char w;
		cin>>q>>w;
		for(int j=1;j<=q;j++)
		{
			tem=tem+w;
		}
	}
	for(int i=0;i<=tem.size()-1;i++)
	{
		if(tem[i]!=tem[tem.size()-i-1])
		{
			ans++;
		}
	}
	ans/=2;
	cout<<ans;
	return 0;
}