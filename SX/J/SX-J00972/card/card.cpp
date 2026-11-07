#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],b[N],t,c[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		t=0;
		for(int j=i;j<=n;j++)
		{
			if(a[1]<=a[2]&&a[n-1]<=a[n]&&a[2]<=a[3])
			{
				int x=lower_bound(b+i,b+n+1,b[j])-b;
				if(b[x]==a[j])t=x-1;
			}
			else
			{
				int l=0,r=t;
				while(b[l]!=a[j]&&b[r]!=b[j]&&l<=r)
				{
					l++;
					r--;
				}
				if(b[l]==a[j])t=l-1;
				else if(b[r]==a[j])t=r-1;
			}
			b[++t]=a[j];
		}
		for(int j=1;j<=t;j++)c[b[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<' ';
	return 0;
}