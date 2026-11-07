#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	int l, r;
	char c;
};

const int N = 2e5 + 10;
node nd[N];
int n = 0;
ll cnt = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	// input
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x >> nd[i].c;
		nd[i].l = cnt;
		cnt += x;
		nd[i].r = cnt - 1;
	}
	// core
	int L = 0, R = cnt - 1;
	ll ans = 0;
	while (L < R) {
		// get string
		char la = 0, ra = 0;
		for (int i = 1; i <= n; i++) {
			if (L >= nd[i].l && L <= nd[i].r) {
				la = nd[i].c;
			}
			if (R >= nd[i].l && R <= nd[i].r) {
				ra = nd[i].c;
			}
			if (la != 0 && ra != 0) {
				break;
			}
		}
		// judge
		if (la != ra) {
			ans++; 
		}
		
		// point move
		L++;
		R--;
	}
	cout << ans;
	return 0;
} 
