#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m,a[N],c1,c2,c3,maxv;
void dfs(int x,int k,int s)
{
	if(x==n+1||k==m+1)
	{
		if(k==m+1)maxv=max(maxv,1ll*s);
		return;
	}
	if(s==-1)
	{
		dfs(x+1,k+1,a[x]);
		dfs(x+1,k,s);
	}
	else
	{
		dfs(x+1,k+1,s&a[x]);
		dfs(x+1,k,s);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	if(a[n]<4)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]==1)c1++;
			if(a[i]==2)c2++;
			if(a[i]==3)c3++;
		}
		if(c3>=m)cout<<3;
		else if(c2>=m||c2+c3>=m)cout<<2;
		else if(c1>=m||c1+c3>=m)cout<<1;
		else cout<<0;
		return 0;
	}
	if(a[2]-a[1]==1&&a[n]-a[n-1]==1&&a[3]-a[2]==1)
	{
		cout<<n-m;
		return 0;
	}
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
				maxv=max(maxv,1ll*a[i]&a[j]);
		cout<<maxv;
		return 0;
	}
	if(m==n)
	{
		maxv=a[1];
		for(int i=2;i<=n;i++)
			maxv=maxv&a[i];
		cout<<maxv;
		return 0;
	}
	dfs(1,1,-1);
	cout<<maxv;
	return 0;
}