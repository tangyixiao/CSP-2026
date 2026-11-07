#include<bits/stdc++.h>
#define int long long
#define MAXN 200010
using namespace std;
char a[MAXN];
int b[MAXN];
int n, l, r, ans, sum, sum2;
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		cin >> b[i] >> a[i];
		sum+=b[i];
	}
	l=1, r=n;
	while (l<=r)
	{
		if(b[l]>=b[r])
		{
			if(a[l]!=a[r])ans+=b[r];
			b[l]-=b[r];
			r--;
			if(b[l]==0)l++;
		}
		else
		{
			if(a[l]!=a[r])ans+=b[l];
			b[r]-=b[l];
			l++;
		}
	}
	cout << ans;
	return 0;
}
//zdjd
