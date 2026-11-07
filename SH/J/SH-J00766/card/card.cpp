#include<bits/stdc++.h>
using namespace std;
int n=0,m=0,ans[300005]={0};
int a[300005]={0},s[300005]={0},v[300005]={0};
int pd=1;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])
		{
			pd=0;
		}
	}
	if(pd==1)
	{
		for(int i=1;i<=n;i++)
		{
			ans[a[i]]=i;
		}
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			fill(v,v+n+1,0);
			for(int j=i;j<=n;j++)
			{
				s[j]=a[j];
			}
			for(int j=i;j<=n;j++)
			{
				v[s[j]]+=1;
				ans[s[j]]+=1;
				if(v[s[j]]>1)
				{
					for(int k=j-1;k>=0;k--)
					{
						v[s[k]]-=1;
						ans[s[k]]-=1;
						if(s[k]==s[j])
						{
							s[k]=0;
							break;
						}
						s[k]=0;
					}
				}
			}
		}
	}
	
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
