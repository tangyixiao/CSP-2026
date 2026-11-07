#include <bits/stdc++.h>
using namespace std;
int n, a[200010], m, b[200010], m1, ans;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	m1 = m - 1;
	while(m1--){
		for(int i = 1; i <= n-m+1; i++){
			b[i] = a[i+1] & b[i]; 
			for(int j = i+2; j <= n; j++){
				b[i] = max(a[j] & b[i], b[i]);
			}
		}
	}
	for(int i = 1; i <= n-m+1; i++){
		ans = max(ans, b[i]);
		cout << b[i] << ' ';
	}
	cout << ans;
	return 0;
}