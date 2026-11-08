#include <bits/stdc++.h>
using namespace std;

int a[200005];
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	long long cnt = a[n];
	int j = n - 1;
	for(int i = 2; i <= m; i++){
		cnt &= a[j];
		j--;
	}
	cout << cnt;
	return 0;
}
