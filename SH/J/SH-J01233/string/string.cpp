#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a[200005];
char c[200005];

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
	}
	
	int ans = 0;
	int l = 1, r = n;
	while(l != r && l <= n && r >= 1){
//		cout << l << " " << r << '\n';
		if(a[l] < a[r]){
			ans += (c[l] != c[r]) * a[l];
			a[r] -= a[l];
			a[l] = 0;
			l++;
//			cout << "l < r\n";
		} else if(a[l] == a[r]){
			ans += (c[l] != c[r]) * a[l];
			a[l] = 0;
			a[r] = 0;
			l++;
			r--;
//			cout << "l == r\n";
		} else if(a[l] > a[r]) {
			ans += (c[l] != c[r]) * a[r];
			a[l] -= a[r];
			a[r] = 0;
			r--;
//			cout << "l > r\n";
		}
//		cout << "ans = " << ans << "\n";
	}
	
	cout << ans;
	
	return 0;
}

