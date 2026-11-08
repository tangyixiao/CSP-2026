#include <cstdio>
using namespace std;
long long l=0,r,n,a[200010],cnt,ans;
char c[200010],s[100000010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld %c",&a[i],&c[i]);
		for(int j=cnt;j<cnt+a[i];j++)
			s[j]=c[i];
		cnt+=a[i];
	}
	r=cnt-1;
	while(l<=r)
	{
		if(s[l]!=s[r])	ans++;
		l++;r--;
	}
	printf("%lld\n",ans);
	return 0;
}
