#include <bits/stdc++.h>
using namespace std;
long long a[2010];
long long er[2010][25];

int pingfang(int y) {
	int answ = 1;
	for (int i = 1; i <= y; i++) {
		answ *= 2;
	}
	if (y == 1) {
		return 1;
	}
	return answ;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n;
	cin >> n;
	long long m;
	cin >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		sort(a + 1, a + n + 1);
		cout << a[n];
		return 0;
	}if (n == 2) {
		for(int i = 1;i <= n;i++){
			for(int j = n;j >= 1;j--){
				if(a[i] == a[j]){
					cout << a[i];
					return 0;
				}
			}
		}
	}
	int q = 1, p = 1;
	for (int i = 1; i <= n; i++) {
		while (a[i] > 0) {
			er[q][p] = a[i] % 2;
			p++;
			a[i] = a[i] / 2;
		}
		q++;
		p = 1;
	}
//	long long a1[n * (n - 1) / 2];
	int ans = 0;
	if (m == n) {
		for (int i = 1; i <= n; i++) {
			for (int j = 25; j >= 1; j--) {
				if (er[i][j] == er[i + 1][j] && er[i][j] == 1) {
					er[i + 1][j] = 1;
				} else {
					er[i + 1][j] = 0;
				}
			}
		}
		for (int j = 25; j >= 1; j--) {
			if (er[n][j] == 1) {
				ans += pingfang(j);
			}
		}
		cout << ans;
		return 0;
	}
	int maxx = INT_MIN;
	
	return 0;
}
/*4 2
3 15 12 12*/
