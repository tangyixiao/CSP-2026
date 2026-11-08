#include<bits/stdc++.h>
using namespace std;



const int N=2e5+5;

int n,m;
int ls[N];
int ans;



signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>ls[i];
	}
	
	if(n<=20)
	{
		int res;
		int cnt;
		for(int i=1;i<(1<<n);i++)
		{
			bool f=1;
			cnt=0;
			for(int j=0;j<=n;j++)
			{
				if(i&(1<<j))
				{
					cnt++;
					if(f)
					{
						res=ls[i];
						f=0;
					}
					else res&=ls[i];
				}
			}
			if(cnt==m) ans=max(ans,res);
		}
		cout<<ans;
	}
	
	else if(n<=2000)
	{
		if(m==1)
		{
			for(int i=1;i<=n;i++)
			{
				ans=max(ans,ls[i]);
			}
		}
		else if(m==n)
		{
			ans=ls[1];
			for(int i=2;i<=n;i++)
			{
				ans&=ls[i];
			}
		}
		else if(m==2)
		{
			for(int i=1;i<n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					ans=max(ans,ls[i]&ls[j]);
				}
			}
		}
		
		cout<<ans;
	}
	
	else
	{
		bool f=1;
		for(int i=1;i<=n;i++)
		{
			if(ls[i]!=i-1)
			{
				f=0;
				break;
			}
		}
		
		if(f)
		{
			if(m==1) cout<<n-1;
			for(int i=0;i<18;i++)
			{
				if(m>(1<<i) && m<=(1<<(i+1)))
				{
					ans=n-(1<<(i+1));
					break;
				}
			}
		}
		else if(m!=n-1)
		{
			sort(ls+1,ls+n+1);
			ans=ls[n-m+1];
		}
		else
		{
			int cnt;
			bool f=1;
			for(int i=18;i>=0;i--)
			{
				cnt=0;
				int p;
				for(int j=1;j<=n;j++)
				{
					if(!(ls[j]&(1<<i)))
					{
						cnt++;
						p=j;
					}
				}
				if(cnt==1)
				{
					if(p==1)
					{
						ans=ls[2];
						for(int j=3;j<=n;j++)
						{
							ans&=ls[j];
						}
					}
					else
					{
						ans=ls[1];
						for(int j=2;j<=n;j++)
						{
							if(j!=p) ans&=j;
						}
					}
					f=0;
					break;
				}
			}
			if(f)
			{
				ans=ls[1];
				for(int i=2;i<=n;i++)
				{
					ans&=ls[i];
				}
			}
		}
		cout<<ans;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
