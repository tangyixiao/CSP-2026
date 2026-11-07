#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],vis[300005],pos[500005],past[500005];

int main()
{
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			bool flag=false;
			for(int k=i;k<j;k++)
			{
				if(a[k]==a[j])
				{
					flag=true;
					break;
				}
			}
			if(flag)
				for(int k=i;k<j;k++)
				{
					ans[a[k]]--;
				}
			ans[j]++;
		}
	}
		
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
