#include <bits/stdc++.h>
using namespace std;
long long a[200005];
long long maxn = -1;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a+1, a+n+1);
	if (m == 1){
		cout << a[n];
		return 0;
	}
	for (long long i = 1; i <= n; i++){
		for (long long j = i+1; j <= n; j++){
			maxn = max(a[i]&a[j], maxn);
		}
	}
	cout << maxn;
	return 0;
}