#include<iostream>
#include <algorithm>
#include <cstdio>
#define ll long long
using namespace std;

ll a[500005];

ll check(int level,int n)
{
	ll res=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]<level)
		{
			res+=(level-a[i]);
		}
		else break;
	}
	return res;
}

int main()
{
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	int n,m;
	ll l=1e18,r=-1e18;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		l=min(l,a[i]);
		r=max(r,a[i]);
	}
	sort(a+1,a+n+1);
	ll mid=(l+r)/2;
	ll chk;
	int lc,rc;
	lc=r-l;
	while(true)
	{
		chk=check(mid,n);
		if(chk>m)
		{
			r=mid-1;
		}
		else if(chk<m)
		{
			l=mid+1;
		}
		mid=(l+r)/2;
		rc=r-l;
		if(rc==lc)
		{
			break;
		}
		lc=rc;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>mid)
		{
			if(i-1>=1)
			{
				cout << i-1;
			}
			else
			{
				cout << 1;
			}
			break;
		}
	}
	return 0;
}
