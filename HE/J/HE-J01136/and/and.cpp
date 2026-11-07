#include<bits/stdc++.h>
using namespace std;
long long a[110011];
long long b[101001],c[1101011];
long long n,m,p=0;
void dfs(int x)
{
	if(x==m+1)
	{
		for(int i=2;i<=x;i++)
		{
			c[i]=c[i]&c[i-1];
		}
		p=max(p,c[x]);
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			c[x]=a[i];
			b[i]=1;
			dfs(x+1);
			b[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	dfs(1);
	cout<<p;
	return 0;
}
