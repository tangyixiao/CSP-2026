#include<bits/stdc++.h>
using namespace std;
int ans[500010],a[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		bool b[m+10]={0};
		for(int j=i;j<=n;j++)
		{
			
			if(b[a[j]]==0)
			{
				b[a[j]]=1;
				
			}
			else if(b[a[j]]==1)
			{
				
				for(int k=j;;k--) 
				{
					if()
				}
				b[a[j]]++;
			}
		}
		for(int j=1;j<=m;j++) ans[j]+=b[j];
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}