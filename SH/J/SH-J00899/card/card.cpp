#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int a[500010];
int b[500010];
int f[500010];
int ans[500010];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		int you=0;
		for(int j=1;j<=n;j++){
			f[j]=0;
			b[j]=a[j];
		}
		for(int j=i;j<=n;j++)
		{
			if(f[a[j]]==0)
			{
				you=a[j];
				f[a[j]]=j;
			}
			else 
			{
				
						for(int t=f[a[j]];t<=j-1;t++)
						{
							if(b[t]!=0)
							{
								f[b[t]]=0;
								b[t]=0;
							}
							
						}
					
					
				
				f[a[j]]=j;
				you=a[j];
			}
		}
		for(int j=i;j<=n;j++){
		if(f[a[j]] && b[j]){
			ans[a[j]]++;
			//cout<<b[j]<<" "; 
		}
		
		}
		//cout<<endl;
	}
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
    return 0;
}
