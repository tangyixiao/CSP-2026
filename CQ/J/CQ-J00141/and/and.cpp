#include<bits/stdc++.h>
using namespace std;
using ll=long long;

const ll MAXN=2e5+5;
ll n,m,ls[MAXN],s[MAXN],mx,t[MAXN];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>ls[i];
		mx=max(mx,ls[i]);
		s[i]=s[i-1]&ls[i];
	}
	if(m==1) cout<<mx;
	if(m==n) cout<<s[n];
	if(m==2)
	{
		mx=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j)
				{
					mx=max(mx,ls[i]&ls[j]);
				}
			}
		}
		cout<<mx;
	}
	if(m==3)
	{
		mx=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				for(int k=1;k<=n;k++)
				{
					if(i!=j && j!=k && i!=k)
					{
						mx=max(mx,(ls[i]&ls[j])&ls[k]);
					}
				}
			}
		}
		cout<<mx;
	}
	if(m==4)
	{
		mx=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				for(int k=1;k<=n;k++)
				{
					for(int a=1;a<=n;a++)
					{
						if(i!=j && j!=k && i!=k && i!=a && j!=a && k!=a)
						{
							mx=max(mx,(ls[i]&ls[j])&ls[k]);
						}
					}
				}
			}
		}
		cout<<mx;
	}
	return 0;
}
