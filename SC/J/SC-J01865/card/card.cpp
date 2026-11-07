#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int e,q[500005];
int cnt[300005],w[300005];
bool b[300005];
int main()
{
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			b[j]=0;
			w[j]=0;
			q[j]=0; 
		}
		e=0;
		for(int j=i;j<=n;j++)
		{
			if(b[a[j]]==1)e=w[a[j]];
			else {
				e++;
				q[e]=a[j];
				w[a[j]]=e;
				b[a[j]]=1;
			}
		}
		for(int j=1;j<=e;j++)
		{
			cnt[q[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
 }