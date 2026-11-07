#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
const ll maxn = 2000;
ll n, m;
ll a[maxn]; 
//只能偷点了 最多20pts 
ll maxx = -1;
ll l, r;
ll max2 = maxx;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
	}
	if (m == 1) {
		cout << maxx;
	}
	else if (m == 2) {
		for (int i = 1; i <= n - 1; i++) {
			for (int j = i + 1; j <= n; j++) {
				max2 = max(max2, a[i] & a[j]);
			}
		}
		cout << max2;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
