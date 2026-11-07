#include<bits/stdc++.h>
using namespace std;
int const MAXN=2e5+5;
int a[MAXN];
char c[MAXN];
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=c[i];
		}
	}
	long long ans=0;
	for(long long i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-1-i])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
