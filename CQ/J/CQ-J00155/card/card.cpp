#include <cstdio>
#include <cstring>
using namespace std;
long long tp,st[500010],n,m,a[500010],ans[300010];
bool f[300010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++)	scanf("%lld",&a[i]);
	for(int i=1;i<=n;i++)
	{
		memset(f,0,sizeof(f));
		tp=0;
		for(int j=i;j<=n;j++)
		{
			if(f[a[j]])
			{
				while(st[tp]!=a[j])
					f[st[tp]]=0,tp--;
			}else{
				st[++tp]=a[j];
				f[a[j]]=1;
			}
		}
		for(int j=1;j<=tp;j++)
			ans[st[j]]++;
	}
	for(int i=1;i<=m;i++)
		printf("%lld ",ans[i]);
	return 0;
}
