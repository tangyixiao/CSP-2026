#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],maxn=-8755;
void dfs(int x,int y,long long sum)
{
	if(x>=m)
	{
		maxn=max(maxn,sum);
		return ;	
	}	
	for(int i=y+1;i<=n;i++)
	{
		if(x==0)
		dfs(x+1,i,a[i]);
		else{
			int k=sum&a[i];
			dfs(x+1,i,k);
		}
	}
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	sort(a+1,a+1+n);
	long long ans=a[n];
	if(n<=2000&&m!=1)
	{
		dfs(0,0,1);
		printf("%lld",maxn);
		return 0;
	}
	if(m==1)
	{
		printf("%lld",ans);
		return 0;
	}
	if(n>2000)
	{
		for(int i=2;i<=m;i++)
		{
			ans=ans&a[n-m+1];
		}
		printf("%lld",ans);
		return 0;
	}	
} 
