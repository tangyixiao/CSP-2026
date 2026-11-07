#include<iostream>
using namespace std;
int n,m;
int a[500005];
bool tong[300005];
int last[300005];
int ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int l=1;l<=n;l++)
	{
		for(int i=l;i<=n;i++)
		{
			if(tong[a[i]])
			{
				for(int j=last[tong[a[i]]];j<i;j++)
				{
					tong[a[j]]=0;
					last[tong[a[j]]]=0;
				}
			}
			tong[a[i]]=1;
			last[tong[a[i]]]=i;
		}
		for(int i=1;i<=m;i++)
		{
			if(tong[i])ans[i]++;
			last[i]=0;
			tong[i]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
