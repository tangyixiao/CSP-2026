#include<bits/stdc++.h>
using namespace std;
const int M=2e5+5;
int n,m,ans,a[M];
bool vis[M];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=31;i>=0;i--)
	{
		int t=0;
		for(int j=1;j<=n;j++)if((!vis[j])&&(a[j]&(1<<i)))t++;
		if(t>=m)
		{
			ans+=(1<<i);
			for(int j=1;j<=n;j++)
				if(!(a[j]&(1<<i)))vis[j]=true;
		}
	}
	printf("%d",ans);
	return 0;
}
