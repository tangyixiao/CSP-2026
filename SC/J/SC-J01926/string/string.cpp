#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n;
long long a[N];
char c[N];
long long ans;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i ++){
		cin >> a[i] >> c[i];
	}
	int l = 1, r = n;
	while (l < r) {
		int num = max(a[l], a[r]);
		if (a[l] == a[r]) {
			l ++;
			r --;
		} else if (num == a[l]){
			while (a[l] >= a[r]) {
				if(c[l] != c[r]) ans += a[r];
				a[l] -= a[r];
				r --;
			}
		} else {
			while (a[r] >= a[l]) {
				if(c[l] != c[r]) ans += a[l];
				a[r] -= a[l];
				l ++;
			}
		}
	}
	cout << ans;
	return 0;
}