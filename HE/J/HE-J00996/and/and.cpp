#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+50;
ll a[N],ans,maxx=-1,s;
int n,m;
bool f1,f2;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(a[i]!=i-1) f1=1;
		if(a[i]==0) f2=1;
		if(i==1) s=a[i];
		else s=s&a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==1)
	{
		cout<<maxx;
		return 0;
	}
	if(m==n)
	{
		cout<<s;
		return 0;
	}
	if(!f1||f2)
	{
		cout<<0;
		return 0;
	}
	if(m==2)
	{
		maxx=-1;
		for(int i=1;i<n;++i)
		{
			for(int j=i+1;j<=n;++j)
			{
				ll c=a[i]&a[j];
				maxx=max(c,maxx);
			}
			cout<<maxx<<' ';
		}
		cout<<maxx;
		return 0;
	}
	if(m==n-1)
	{
		ll s1=a[1],s2=a[2];
		for(int i=2,j=3;i<n&&j<=n;i++,j++)
		{
			s1&=a[i];
			s2&=a[j];
			if(!s1&&!s2) break;
		}
		cout<<max(s1,s2);
		return 0;
	}
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
	return 0;
} 
