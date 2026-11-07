#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005], maxa = 0, ans = 0;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		maxa =  max(maxa, a[i]);
	}
	if (m == 1) {
		cout << maxa;
		return 0;
	}
	if (m == n){
		ans = a[1];
		for (int i = 2; i <= n; i++){
			ans &= a[i];
		}
		cout << ans;
	}
	return  0;
}