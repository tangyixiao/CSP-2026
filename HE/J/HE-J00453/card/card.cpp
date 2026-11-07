#include<bits/stdc++.h>
using namespace std;
const int maxn = 5e5+10;
int n,m;
int a[maxn],ans[maxn],b[maxn]={0};
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.in","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++) cin>>a[i];
	for(int i = 1;i <= n;i++)
	{
		for(int j = i;j <= n;j++)
		{
			for(int k = 1;k < j;k++)
			{
				if(b[k]==b[j]) 
				{
					for(int x = k;x<=j;x++) b[x]=0;
				}
			}
			b[j]=a[i+j-1];
		}
		int k = 1;
		for(int j = 1;j <= n;j++)
		{
			ans[b[j]]++;
		} 
	}
	for(int i = 1;i <= m;i++) cout<<ans[i]<<" ";
	return 0;
}
