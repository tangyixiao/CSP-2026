#include<bits/stdc++.h>
using namespace std;
const int maxn=500005;
int n,m,a[maxn],a2[maxn];
queue<int>q,q2;
int ans[100005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		q.push(a[i]);
	}
	int k=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int w=1;w<=j;w++)
			{
				if(a2[w]==q.front())
				{
					for(int e=1;e<=j;e++)
					{
						a2[e]=0;
					}
					continue;
				}
			}
			a2[k]=q.front();
			q.pop();
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=k;j++)
			{
				if(a[i]==a2[j])
				{
					ans[a2[j]]++;
				}
			}
		}
	}
	int ans2=0;
	for(int i=1;i<=n;i++)
	{
		if(ans[i]!=0)cout<<ans[i]<<" ";
		ans2+=ans[i];
	}
	cout<<ans2;
	return 0;
}
