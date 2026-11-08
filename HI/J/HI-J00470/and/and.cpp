#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 1030;
int n , m , a[N];
int dp[N];

signed main () {
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	scanf("%lld%lld" , &n , &m);
	for (int i = 1 ; i <= n ; i++) scanf("%lld" , &a[i]);
	sort(a + 1 , a + n + 1 , greater<long long>());
	cout << a[m];
	return 0;
}

