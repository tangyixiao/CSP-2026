#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+4;
int n,m,ans;
int a[N];
int p[N][40];
bool flag[N];

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++) scanf("%d",a+i);
	for(int i=1; i<=n; i++)
		for(int j=0; j<=30; j++)
			if(a[i] & (1<<j))
				p[i][j] = 1;
	memset(flag,1,sizeof(flag));
	for(int i=30; i>=0; i--)
	{
		int cnt = 0;
		for(int j=1; j<=n; j++)
			cnt += p[j][i]*flag[j];
		if(cnt >= m)
		{
			ans += (1 << i);
			for(int j=1; j<=n; j++)
				if(flag[j])
					flag[j] = p[j][i];
		}
	}
	printf("%d\n",ans);
	return 0;
}
/*
key:
Trick||Treat!
10:45
*/
