#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
long long n,a[N],m,ans;
long long c[N];
struct Node{
	long long s[40];
	long long j=0;
}b[N];
long long maxn=-1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		long long k=a[i];
		while(k)
		{
			b[i].j+=1;
			b[i].s[b[i].j]=k%2;
			k/=2;
		}
		maxn=max(maxn,b[i].j);
	}
	long long p,ppp;
	for(int i=maxn;i>=1;i--)
	{
		memset(c,0,sizeof c);
		p=0;
		long long sum=0;
		for(long long j=1;j<=n;j++)
		{
			if(b[j].s[i]==1) 
			{
				c[p]=j;
				p+=1;
				sum+=1;
			}
		}
		if(sum>=m)
		{
			long long xs=1;
			ppp=i;
			for(int kkk=1;kkk<i;kkk++)
			{
				xs*=2;
			}
			ans+=xs;
			break;
		}
	}
	long long sum=0;
	for(long long i=ppp-1;i>=1;i--)
	{
		sum=0;
		for(long long j=0;j<p;j++)
		{
			if(b[c[j]].s[i]==1)
			{
				sum+=1;
			}
		}
		if(sum>=m)
		{
			long long xs=1;
			for(long long kkk=1;kkk<i;kkk++)
			{
				xs*=2;
			}
			ans+=xs;
		}
	}
	cout<<ans;
	return 0;
}