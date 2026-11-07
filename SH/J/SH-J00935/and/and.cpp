#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, a[10000005], ans = 10000005;
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	for (int i = n;i >= n - m + 1;i--){
		ans = min(ans, a[i]);
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
}
