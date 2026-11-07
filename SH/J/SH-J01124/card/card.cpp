#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],ans[500010];
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
		bool flag[500010];
		long long b[500010];
		for(int j=0;j<=500010;j++)
		{
			b[j]=0;
			flag[j]=false;
		}
		for(int j=i;j<=n;j++)
		{
			
			b[j]=a[j];
			for(int k=1;k<j;k++)
			{
				if(b[k]==b[j])
				{
					int cnt=j-k,sum=k;
					while(cnt>0)
					{
						b[k]=0;
						cnt--;
						sum++;
					}
				}
			}
		}
		for(int j=i;j<=n;j++)
		{
			if(b[j]!=0)
			{
				flag[b[j]]=true;
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(flag[j]==true)
			{
				ans[j]++;
			}
		}	
	} 
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
