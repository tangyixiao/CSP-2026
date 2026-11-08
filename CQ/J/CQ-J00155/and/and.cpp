#include <cstdio>
#include <algorithm>
using namespace std;
long long n,m,a[200010],ans;
bool f[200010];
bool cmp(long long x,long long y){return x>y;}
void dfs(long long x,long long sum)
{
	if(x>m)
	{
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!f[i])
		{
			f[i]=1;
			dfs(x+1,sum&a[i]);
			f[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++)	scanf("%lld",&a[i]);
	if(n>2000)
	{
		sort(a+1,a+n+1,cmp);
		ans=a[1];
	}else{
		if(m!=n)	dfs(1,2147483647);
		else{
			ans=2147483647;
			for(int i=1;i<=n;i++)
				ans=ans&a[i];
		}
	}
	printf("%lld",ans);
	return 0;
}

