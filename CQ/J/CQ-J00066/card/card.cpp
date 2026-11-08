#include<bits/stdc++.h>
using namespace std;

int a[500010];
int ans[300010];

int main()
{
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	memset(ans,0,sizeof(ans));
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=m;i++)
	{
		int p[500010];
		int t=1,w=0;
		for(int j=i;j<=n;j++)
		{
			p[++w]=a[i];
			for(int k=t;k<=w;k++)
			{
				if(p[k]==a[i])
				{
					w=k;
					break;
				}
			}
		}
		for(int j=t;j<=w;j++)
		{
			cout<<i<<" "<<p[j]<<endl;
			ans[p[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
