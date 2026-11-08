#include<iostream>
#include<algorithm>
using namespace std;
#define int long long
int n,m;
int a[200005];
int b[200005];
int yu(int a,int b)
{
	int aa=max(a,b);
	int bb=min(a,b);
	if(bb==0) return 0;
	if(aa==bb) return aa;
	if(aa==3&&bb==2) return 2;
	if(aa==3&&bb==1) return 1;
	if(aa==2&&bb==1) return 0;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
		b[a[i]]++;
	}
	sort(a+1,a+n+1);
	if(b[a[n]]>=m)
	{
		cout<<a[n];
		return 0;
	}
	else if(b[a[n]]+b[a[n-1]]>=m)
	{
		cout<<a[n-1];
		return 0;
	}
	else 
	{
		cout<<0;
		return 0;
	}
	if(m==1) 
	{
		cout<<a[n];
		return 0;
	}
	if(m==2)
	{
		int maxn=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				maxn=max(maxn,yu(a[i],a[j]));
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m==3)
	{
		int maxn=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					maxn=max(yu(yu(a[i],a[k]),a[j]),max(yu(yu(a[i],a[j]),a[k]),max(maxn,yu(a[i],yu(a[j],a[k])))));
				}
			}
		}
		cout<<maxn;
		return 0;
	}
	return 0;
}

