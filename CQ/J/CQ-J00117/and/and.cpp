#include<bits/stdc++.h>
//define int unsigned long long
//define int long long
using namespace std;
const int N=1e6+10;
int n,m,maxx=INT_MIN,a[N],k[N];
void dg(int id,int cnt,int k[])
{
	if(cnt==m)
	{
		int x=k[1];
		for(int i=2;i<=cnt;i++)
		{
			x=x&k[i];
		}
		maxx=max(maxx,x);
		return ;
	}
	for(int i=id+1;i<=n;i++)
	{
		k[cnt+1]=a[i];
		dg(i,cnt+1,k);
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int falg1=1,falg2=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
		if(double(log2(a[i]-1))!=int(log2(a[i]-1)))
		{
			falg1=0;
		}
		if(a[i]!=i-1)
		{
			falg2=0;
		}
	}
	if(m==1)
	{
		sort(a+1,a+1+n);
		cout<<a[n]; 
	}
	else if(m==n)
	{
		int x=a[1];
		for(int i=2;i<=n;i++) x=x&a[i];
		cout<<x;
	}
	else if(falg1==1)
	{
		sort(a+1,a+1+n);
		cout<<1;
	}
	else if(falg2==1 && double(log2(n))==int(log2(n)))
	{
		if(m>n/2) cout<<0;
		else
		{
			cout<<n-pow(2,int(ceil(1.0*log2(m))));
		}
	}
	else if(m==n-1)
	{
		sort(a+1,a+1+n);
		int x=a[2];
		for(int i=3;i<=n;i++)
		{
			x=x&a[i];
		}
		cout<<x;
	}
	else
	{
		dg(0,0,k);
		cout<<maxx;
	}
	

	exit(0);
}
