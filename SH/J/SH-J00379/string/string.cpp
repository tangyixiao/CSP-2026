#include<bits/stdc++.h>
using namespace std;

const int MAXN=2005;
int a[MAXN];
char c[MAXN];
string s;
int n;
long long L;
long long ans;
int lc;

int lca(int x,int y)
{
	if(x==y)
	{
		return x;
	}
	if(x==1||y==1)
	{
		return 1;
	}
	return lca(y%x,x);
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		if(lc==0)
		{
			lc=a[i];
		}
		lc=lca(lc,a[i]);
		L+=a[i];
	}
	L/=lc;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i]/lc;j++)
		{
			s+=c[i];
		}
	}
	for(int i=0;i<L;i++)
	{
		if(s[i]!=s[L-i-1])
		{
			ans+=lc;
			s[L-i-1]=s[i];
		}
	}
	cout<<ans;
	return 0;
}
