#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6+10;
ll n,m,a[N],b[N],num,ans[N],sum[N],gay[N],la;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>=a[i-1])
		{
			num++;
			ans[a[i]]++;
		}
	}
	if(num==n)
	{
		for(int i=1;i<=m;i++)
		{
			sum[i]=sum[i-1]+ans[i];
		}
		for(int i=1;i<=m;i++)
		{
			cout<<sum[i];
			if(i!=m)
			{
				cout<<" ";
			}
		}
		return 0;
	}
	memset(ans,0,sizeof(ans));
	for(int j=1;j<=n;j++)
	{
		memset(gay,0,sizeof(gay));
		la=0;
		for(int z=j;z<=n;z++)
		{
			for(int k=1;k<=la;k++)
			{
				if(a[z]==gay[k])
				{
					la=k-1;
					break;
				}
			}
			la++;
			gay[la]=a[z];
		}
		for(int z=1;z<=la;z++)
		{
			ans[gay[z]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i];
		if(i!=m)
		{
			cout<<" ";
		}
	}
	return 0;
}
