#include <bits/stdc++.h>
using namespace std;
int n;
char b;
int x;
string s;
long long zong;
long long ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>b;
		zong+=x;
		for(int j=1;j<=x;j++)
		{
			s+=b;
		}
	}
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=s[zong-i-1])
		{
			ans++;
			s[zong-i-1]=s[i];
		}
	}
	cout<<ans;
	return 0;
}
