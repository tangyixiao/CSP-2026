#include <bits/stdc++.h>
using namespace std;
long long a[114514114];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	for (long long i = 1;i <= n;i++)  {
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1);
	long long ans = a[n]; 
	for (long long i = 1;i < m;i++)  {
		ans = ans & a[n-i];
	}
	cout << ans;
	return 0;
}
