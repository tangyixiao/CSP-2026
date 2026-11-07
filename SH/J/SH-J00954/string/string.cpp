#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+4;
int n,l,r;
int a[N];
char c[N];
char p[N];

void input()
{
	cin >> n;
	for(int i=1; i<=n; i++) cin >> a[i] >> c[i];
}

long long solve()
{
	l = 1,r = n;
	long long ans = 0;
	while(l < r)
	{
		ans += (c[l]!=c[r])*min(a[l],a[r]);
		if(a[l] < a[r]) a[r] -= a[l],l++;
		else if(a[l] > a[r]) a[l] -= a[r],r--;
		else l++,r--;
	}
	return ans;
}

bool special()
{
	long long sum = 0;
	for(int i=1; i<=n; i++)
		sum += a[i];
	if(sum*n <= 2e5) return true;
	else return false;
}

long long little()
{
	int len = 0;
	int cnt = 0;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=a[i]; j++)
			p[++len] = c[i];
	l = 1; r = len;
	while(l < r)
	{
		if(p[l] != p[r]) cnt++;
		l++,r--;
	}
	return cnt;
}

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	input();
	if(special()) cout << little();
	else cout << solve();
	
	return 0;
}
/*
key:
Trick||Treat!
10:15
*/
