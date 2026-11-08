#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int a[N];
char c[N];
int n;
int len = 0;
//bool op = 0; // 0表示左边更大， 1表示右边更大
int sum = 0; // 现在多的一方有的数量
int l = 0, r = 0;
int lid, rid;
int lsum, rsum;
char cl, cr;
int ans = 0;
int midid = 0;
int mid;
void solve(int id) {
	r = l + a[id];
	bool f = 0;
	char cc = c[id];
//	cout << id << " " << r << '\n';
	if(l <= mid) {
		a[id] = mid - l;
		c[id] = cc;
		f = 1;
	}
	if(r > mid) {
		if(f) {
			for(int i = n + 1; i > id + 1; i--) {
				a[i] = a[i - 1];
				c[i] = c[i - 1];
			}
//			for(int i = 1; i <= n; i++) {
//				cout << a[i] <<" " << c[i] << '\n';
////		len += a[i];
//			}
			a[id + 1] = r - mid;
			c[id + 1] = cc;
			n++;
		} else {
			a[id] = r - mid;
			c[id] = cc;
		}
	}
}
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		len += a[i];
	}
//	cout << len << '\n';
	if(len == 1) {
		cout << 0;
		return 0;
	}
	mid = (len + 1) / 2;
//	cout << mid << '\n';
	for(int i = 1; i <= n; i++) {
		if(l + a[i] >= mid) {
			midid = i;
			break;
		}
		l += a[i];
	}
//	cout << midid << '\n';
	solve(midid);
//	for(int i = 1; i <= n; i++) {
//		cout << a[i] <<" " << c[i] << '\n';
////		len += a[i];
//	}
	lsum = a[1];
	lid = 2;
	rid = n;
	cl = c[1];
	while(lid <= rid) {
		if(lsum < rsum) {
			if(c[lid] != cr) {
				if(lsum + a[lid] > rsum) {
					ans += rsum - lsum;
				} else {
					ans += a[lid];
				}
			}
			cl = c[lid];
			lsum += a[lid];
			lid++;
		} else {
			if(c[rid] != cl) {
				if(rsum + a[rid] > lsum) {
					ans += lsum - rsum;
					
				} else {
					ans += a[rid];
				}
			}
			cr = c[rid];
			rsum += a[rid];
			rid--;
			
		}
//		cout << lsum <<" " << rsum <<" " << ans << '\n';
	}
	cout << ans << '\n';
}
