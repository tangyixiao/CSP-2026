#include<bits/stdc++.h>
using namespace std;
const long long NN=500005;
const long long MM=300005;
long long n,m;
long long a[NN],now[NN],ct;
long long ans[MM];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		ct=0;
		for(int j=i;j<=n;j++)
		{
			for(int k=1;k<=ct;k++)
			{
				if(now[k]==a[j])
				{
					for(int t=k;t<=n-2;t++)
					{
						now[t]=now[t+2];
					}
					ct-=2;
				}
			}
			now[++ct]=a[j];
		}
		for(int k=1;k<=ct;k++)
		{
			ans[now[k]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
}

