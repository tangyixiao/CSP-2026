#include <bits/stdc++.h>
using namespace std;

int m,n,s[35];
long long a[200005],ans,e;
bool y[200005][30];
int o[200005];
bool cmp(long long p,long long q)
{
	return p>q;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for (int i=1;i<=n;i++)
	{
		int u=1;
		long long b=a[i];
		while(b>0)
		{
			if (b%2==1)
			{
				y[i][u]=1;
				s[u]++;
			}
			b/=2;
			u++;
		}
	}
	for (int i=30;i>=1;i--)
	{
		if (s[i]>=m)
		{
			ans+=pow(2,i-1);
			for (int j=1;j<=i;j++)
			{
				s[j]=0;
			}
			for (int j=1;j<=n;j++)
			{
				if (y[j][i]==1&&o[j]==e)
				{
					o[j]+=i;
					for (int k=1;k<=i;k++)
					{
						if (y[j][k]==1)
							s[k]++;
					}
		 		}
			}
			e+=i;
		}
	}
	cout<<ans;
	return 0;
 } 