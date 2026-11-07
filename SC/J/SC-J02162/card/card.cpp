#include<bits/stdc++.h>
using namespace std;
int a[100005];
int q[100005];
int ans[100005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int now=1;
		for(int j=i;j<=n;j++)
		{
			int flag=0;
			for(int k=1;k<=now;k++)
				if(q[k]==a[j])
				{
					flag=k;
				}
			if(flag==0)
			{
				q[now]=a[j];
				now++;
			}
			else
			{
				for(int k=flag;k<=now;k++)
					q[k]=0;
				q[now]=a[j];
				now=flag+1;
			}
		}
		for(int j=1;j<=m;j++)
		{
			for(int k=1;k<=now;k++)
				if(q[k]==j)
					ans[j]++;
		}
		for(int j=1;j<=now;j++)
			q[j]=0;
	} 
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
