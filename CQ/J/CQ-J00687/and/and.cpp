#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
long long r[500005][100];
int main()
{
	freopen("and.in","r","stdin");
	freopen("and.out","w","stdout");
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	long long num=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		int u=1;
		int h=a[i];
		while(h>0)
		{
			r[i][u]=a[i]%2;
			u++;
			h/=2;
		}
	}
	if(k==1)
	{
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	long long maxxx=-1;
	for(int i=1;i<=n;i++)
	{
		sort(a+1,a+n+1);
		if(a[i]==a[i+1]&&a[i]>maxxx&&k==2) maxxx=a[i];
	}
	if(k==2) 
	{
		cout<<maxxx;
		return 0;
	}
	if(k==n)
	{
		int tt=a[1];
		for(int i=2;i<=n;i++)
		{
			tt=tt&a[i];
		}
		cout<<tt;
		return 0;
	}
	for(int i=2;i<=80;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(r[j][i]!=1) r[j][i]=0;
		}
	}
	for(int i=80;i>=1;i--)
	{
		num=0;
		int q=0;
		for(int j=1;j<=n;j++)
		{
			if(r[j][i]==1) 
			{
				num++;
				q=a[j];
			}
		}
		if(num>=k) 
		{
			cout<<q;
			return 0;
		}
	}
	
	return 0;
}
