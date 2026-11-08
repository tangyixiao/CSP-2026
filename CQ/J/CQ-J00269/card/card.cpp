#include<bits/stdc++.h>
using namespace std;
const int N=5e5+1,M=3e5+1;
int n,m,a[N],sum[M],b[M],d[M];
bool f=1;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1]) f=0;
	}
	if(f)
	{
		for(int i=1;i<=m;i++) cout<<n;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++) b[j]=sum[j]=0;
		for(int j=i;j<=n;j++)
		{
			if(!b[a[j]]) b[a[j]]=j;
			else
			{
				sum[a[j]]--;
				sum[j]++;
				b[a[j]]=j;
			}
		}
		d[a[i]]=i+sum[a[i]];
	}
	for(int i=1;i<m;i++) cout<<d[i]<<" ";
	cout<<n;
	return 0;
}
