#include <bits/stdc++.h>
using namespace std;

long long n, m;
long long a[500005];

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	scanf("%lld%lld", &n, &m);
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	sort(a + 1, a + n + 1, greater<long long>());
	
	long long ans = a[1];
	for(int i = 2; i <= m; i++) ans &= a[i];
	
	cout << ans;
	
	return 0;
}

