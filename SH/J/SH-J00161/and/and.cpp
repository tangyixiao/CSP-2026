#include <bits/stdc++.h>
using namespace std;
int n, m, a[200001], ms, s;
int main(){
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	if (n <= 20){
		for (int i = 1; i < (1 << n); i++){
			if (__builtin_popcount(i) == m){
				for (int j = 1; j <= n; j++)
					if (i & (1 << j)) s &= a[j];
					ms = max(ms, s);
			}
		}
		cout << ms;
	}
	else if (m == 1){
		sort(a + 1, a + n + 1);
		cout << a[n];
	}
	else if (m == n){
		for (int i = 1; i <= n; i++){
			s &= a[i];
		}
		cout << s;
	}
	else if (m == 2){
		for (int i = 1; i <= n; i++){
			for (int j = i; j <= n; j++){
				s = max(s, a[i] & a[j]);
			}
		}
		cout << s;
	}
	else if (m == n - 1){
		sort(a + 1, a + n + 1);
		for (int i = 2; i <= n; i++) s &= a[i];
		cout << s;
	}
	else if (n & (n - 1)){
		for (int i = n; i > n - m; i++) s &= a[i];
		cout << s;
	}
	else {
		sort(a + 1, a + n + 1);
		cout << a[n - m + 1];
	}
	return 0;
} 
