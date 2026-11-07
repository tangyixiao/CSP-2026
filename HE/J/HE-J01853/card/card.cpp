#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
map<int,int> ans;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		map<int,int> m1,x;
		for(int j=i;j<=n;j++)
		{
			if(m1[a[j]]==0)
			{
				m1[a[j]]=1;
				x[a[j]]=j;
			}
			else	
			{
				for(int p=x[a[j]];p<=j;p++)
				{
					m1[a[p]]=0;
				}	
				m1[a[j]]=1;
			}	
		}
		for(int j=1;j<=m;j++)
			if(m1[j]==1)
			{
				ans[j]++;
			}	 	
	}
	for(int i=1;i<=m;i++)
	{
		printf("%d ",ans[i]);
	}
} 
