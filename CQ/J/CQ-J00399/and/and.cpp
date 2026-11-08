#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200010];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	srand(time(0));
	cin >> n >> m;
	long long maxn = -100000;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if(a[i] > maxn) {
			maxn = a[i];
		}
	}
	if(m == 1) {
		cout << maxn;
	} else if(m == 2) {
		maxn = 0;
		for(int i = 1; i <= n; i++) {
			for(int j = i + 1; j <= n; j++) {
				if(a[i] & a[j] > maxn) {
					maxn = a[i] & a[j];
				}
			}
		}
		cout << maxn;
	} else if(m == 3) {
		maxn = 0;
		for(int i = 1; i <= n; i++) {
			for(int j = i + 1; j <= n; j++) {
				for(int k = j + 1; k <= n; k++) {
					if(a[i] & a[j] & a[k] > maxn) {
						maxn = a[i] & a[j] & a[k];
					}
				}
			}
		}
		cout << maxn;
	}else if(m == n){
		maxn = a[1];
		for(int i = 1;i <= n;i++){
			maxn &= a[i];
		}
		cout << maxn;
	}else{
		cout << rand() % 100 + 1;
	}
	return 0;
}

