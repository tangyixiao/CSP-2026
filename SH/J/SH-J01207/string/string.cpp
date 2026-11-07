#include <bits/stdc++.h>
using namespace std;
int n;
int a[200010];
char c[200010];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
	}
	
	long long ans = 0;
	int l = 1, r = n;
	while (l < r){
		int x = a[l];
		while (x){
			if (c[r] == c[l]){
				int t = min(a[r], x);
				x -= t;
				a[r] -= t;
				if (a[r] == 0) r--;
			}else{
				int t = min(a[r], x);
				x -= t, ans += t;
				a[r] -= t;
				if (a[r] == 0) r--;
			}
		}
		l++;
	}
	cout << ans << endl;
	return 0;
}
