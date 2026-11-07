#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

long long a[N], n, m, ans;

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ ){
		cin >> a[i];
	}
	sort (a + 1, a + 1 + n);
	
	if (m == n){
		ans = a[1];
		for (int i = 2; i <= n; i ++ ) ans &= a[i];
		cout << ans;
	}
	else if (m == 1){
		cout << a[n];
	}
	else if (m == 2 && n <= 2000){
		for (int i = 1; i <= n; i ++ ){
			for (int j = i + 1; j <= n; j ++ ){
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans;
	}
	else{
		cout << a[n - m + 1];
	}
	
	return 0;
}