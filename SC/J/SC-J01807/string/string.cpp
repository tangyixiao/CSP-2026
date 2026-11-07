#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
const int N = 2e5+10;
ll x[N];
char c[N];
ll nx[N];
char nc[N];
int main() {
	freopen("string.in","r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> x[i] >> c[i];
	}
	for(int i = 0; i <= n-1; i ++) {
		nx[n-i] = x[i+1];
		nc[n-i] = c[i+1];
	}
	ll ans = 0;
	int l = 1, r = 1;
	while(1) {
		if(!l) r ++;
		if(!r) l ++;
		if(x[l] != nx[r]) {
			if(x[l] > nx[r]) {
				if(c[l] != nc[r]) {
					ans += nx[r];
				}
				x[l] -= nx[r];
				nx[r] = 0;
				r ++;
				while(1) {
					if(x[l] > nx[r]) {
						if(c[l] != nc[r]) {
							ans += nx[r];
						}
						x[l] -= nx[r];
						nx[r] = 0;
						r ++;
					} else {
						if(c[l] != nc[r]) {
							ans += x[l];
						}
						nx[r] -= x[l];
						x[l] = 0;
						break;
					}
				}
			} else {
				if(c[l] != nc[r]) {
					ans += x[l];
				}
				nx[r] -= x[l];
				x[l] = 0;
				l ++;
				while(1) {
					if(nx[r] > x[l]) {
						if(nc[r] != c[l]) {
							ans += x[l];
						}
						nx[r] -= x[l];
						x[l] = 0;
						l ++;
					} else {
						if(nc[r] != c[l]) {
							ans += nx[r];
						}
						x[l] -= nx[r];
						nx[r] = 0;
						break;
					}
				}
			}
		} else {
			if(c[l] != nc[r]) {
				ans += x[l];
			}
			l ++, r ++;
		}
		if(l == n+1 && r == n+1) {
			break;
		}
	}
	cout << ans/2;
	return 0;
}
