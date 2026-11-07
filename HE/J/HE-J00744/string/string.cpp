#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 25;
int n, a[N], ans, l, r;
char c[N];

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i] >> c[i];
	l = 1;
	r = n;
	while(l < r)
	{
		int x = min(a[l], a[r]);
		if(c[l] != c[r]) ans += x;
		a[l] -= x;
		a[r] -= x;
		if(!a[l]) l++;
		if(!a[r]) r--;
	}
	cout << ans << endl;
	return 0;
 } 
