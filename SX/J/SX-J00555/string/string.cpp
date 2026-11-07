#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
long long a[N];
char s[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	for (int i = 1;i <= n;i++)
	{
		scanf("%lld %c",&a[i],&s[i]);
	}
	long long ans = 0;
	int x = n;
	long long y = a[x];
	for (int i = 1;i < x;i++)
	{
		while (i < x&&a[i] > 0)
		{
			int t = min(a[i],y);
			a[i]-= t;
			y -= t;
			if(s[i]!=s[x])
			{
				ans += t;
			}
			if(y == 0)
			{
				x--;
				y = a[x];
			}
		}
	}
	printf("%lld",ans);
	return 0;
}