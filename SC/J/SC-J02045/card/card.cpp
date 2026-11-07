#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
int a[500005];
int g[300005];
int now[500005];
signed main()
{
	freopen("card3.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> k;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int x=1;x<=n;x++)
	{
		int l=0;
		now[500005]={};
		for(int y=x;y<=n;y++)
		{
			for(int i=1;i<=l;i++)
			{
				if(now[i]==a[y])
				{
					for(int j=i;j<=l-1;j++)
					{
						now[j]=-1;
					}
				}
			}
			now[l]=a[y];
		//	cout << now[l] << " ";
			l++;
		}
//		for(int i=1;i<=l-1;i++)
//		{
//			cout << now[i] << " ";
//		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=l-1;j++)
			{
				if(now[j]==i)
				{
					g[i]++;
				}
			}
		}
		cout << endl;
	}
	for(int i=1;i<=k;i++)
	{
		cout << g[i]+1 << " ";
	}

	return 0;
}
