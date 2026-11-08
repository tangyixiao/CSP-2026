#include<bits/stdc++.h>
using namespace std;
#define int long long

int tot, ans, n, a[200010];
char c[200010];

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n; ++ i)
		cin >> a[i] >> c[i], tot += a[i];
	for(int i = 1, j = n; i < j;){
		if(c[i] == c[j]){
			if(a[i] < a[j]){
				a[j] -= a[i];
				++ i;
			}
			else if(a[j] < a[i]){
				a[i] -= a[j];
				-- j;
			}
			else{
				++ i;
				-- j;
			}
		}
		else{
			if(a[i] < a[j]){
				ans += a[i];
				a[j] -= a[i];
				++ i;
			}
			else if(a[j] < a[i]){
				ans += a[j];
				a[i] -= a[j];
				-- j;
			}
			else{
				ans += a[i];
				++ i;
				-- j;
			}
		}
	}
	cout << ans;
}

