#include<bits/stdc++.h>
using ll=long long;
using namespace std;
ll  n,m;
ll a[200020];
bool x[200202];
ll res;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	bool kl=0;
	for(int j=30;~j;j--)
	{
		ll op=0;
		for(int i=1;i<=n;i++)
		{
			if((!kl||x[i])&&(a[i]&(1<<j)))
			{
				op++;
			}
		}
		if(!kl)
		{
			if(op>=m)
			{
				kl=1;
				for(int i=1;i<=n;i++)
				{
					if(a[i]&(1<<j))
					{
						x[i]=1;
					}
				}
				res+=(1<<j);
			}
		}
		else if(op>=m)
		{
			res+=(1<<j);
			for(int i=1;i<=n;i++)
			{
				if(!(a[i]&(1<<j)))
				{
					x[i]=0;
				}
			}
		}
	}
	cout<<res;
	return 0;
}
/*
4 2
3 15 12 12
*/
/*
5 3
31 3 1 15 7
*/