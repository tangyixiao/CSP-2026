#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
struct node
{
	int flag;
	int l;
	int r;
}a[5005];
bool b[5005][3003];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	if(n<=10000)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i].l;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j++)
			{
				if(a[j].l==a[i].l)
				{
					a[i].r=j;
					a[i].flag=1;
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j++)
			{
				if(a[j].flag==0)
				{
					b[i][a[j].l]=1;
				}
				else
				{
					b[i][a[j].l]=1;
					j=a[j].r;
				}
			}
		}
		for(int j=1;j<=m;j++)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				if(b[i][j]==1)
				{
					ans++;
				}
			}
			cout<<ans<<" ";
		}
	}
} 
