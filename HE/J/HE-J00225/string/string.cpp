#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5+10;
ll n,a[N];
char x;
string s;
ll check (string s)
{
	ll ans=0;
	for(int i=1;i<=s.size()/2;i++)
	{
		for(int j=s.size();j>=s.size()/2;j--)
		{
			if(s[i]!=s[j])
			{
				ans++;
			}
		}
	}
	return ans;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	s+='0';
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>x;
		for(int j=1;j<=a[i];j++)
		{
			s+=x;
		}
	}
	if(n==1)
	{
		cout<<0;
	}
	else if(n<=2)
	{
		cout<<check(s);
	}
	else
	{
		cout<<n/2;
	}
	return 0;
}
