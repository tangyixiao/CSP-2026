#include <bits/stdc++.h>
using namespace std;
int n , m, cnt, ans = 2147483647, maxn = -1;
int a[200005];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++){
		for (int j = i + 1; j <= n; j++){
			cnt = 0, ans = 2147483647 & a[i];
			ans &= a[j];
			cnt++;
			if (cnt >= m)
				break;
		}
		if (ans > maxn)
			maxn = ans;
	}
	cout << maxn;
	return 0;
}
