#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
long long a[maxn], sum[maxn];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int m, n;
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+ n);
	sum[0] = a[0];
	for(int i = 1; i < n; i++) sum[i] = sum[i - 1] & a[i];
	if(m == 1){
		cout << a[n - 1];
		return 0;
	} else if(m == 2){
		long long maxans = -1;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				maxans = max(maxans, (a[i] & a[j]));
			}
		}
		cout << maxans;
		return 0;
	} else if(m == n){
		cout << sum[n - 1];
		return 0;
	} else {
		int ans = a[n - 1];
		for(int i = n - 2; i >= n - m; i--){
			ans = ans & a[i];
		}
		cout << ans;
	}
	return 0;
} 
