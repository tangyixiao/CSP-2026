#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;
int n, sum, ans;
int a[N];
string c[N];
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	int i = 1, j = n;
	while(i <= j && sum >= 0) {
		if(c[i] != c[j]) {
			if(a[i] > a[j]) {
				ans += a[j];
				sum -= 2 * a[j];
				a[i] -= a[j]; 
				a[j] = 0;
			} else {
				ans += a[i];
				sum -= 2 * a[i];
				a[j] -= a[i];
				a[i] = 0;
			}
		} else {
			if(a[i] > a[j]) {
				sum -= 2 * a[j];
				a[i] -= a[j];	
				a[j] = 0;
			} else {
				sum -= 2 * a[i];
				a[j] -= a[i];
				a[i] = 0;
			}
		} 
		if(sum <= 0) break;
		if(a[i] > 0 && a[j] <= 0) --j;
		else if(a[j] > 0 && a[i] <= 0) ++i;
		else if(a[i] == 0 && a[j] == 0) {
			++i;
			--j; 
		}
	}
	cout << ans;
	return 0;
}