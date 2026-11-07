#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int n, a[N];
char c[N];
int sum, ans;
int b[N];
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	sum++;
//	cout << sum << '\n';
	int res = 0, id;
	for(int i = 1; i <= n; i++) {
		if(res + a[i] < sum / 2) {
			res += a[i];
//			cout << i << ' ';
		}
		else {
//			cout << i << ' ';
			id = i;
			break;
		}
	}
//	cout << '\n' << id << '\n';
	for(int i = 1; i < id; i++) b[i] = a[i];
	b[id] = sum / 2 - res;
//	cout << sum << ' ' << res << ' ' << b[id] << '\n';
	b[id + 1] = a[id] - b[id];
	for(int i = id + 1; i <= n; i++) b[i + 1] = a[i];
//	for(int i = 1; i <= n + 1; i++) cout << b[i] << ' ';
//	cout << '\n';
	int nid = n + 1;
	for(int i = 1; i <= id; i++) {
		while(b[i] > 0) {
			if(nid <= id) break;
//			cout << nid << "!\n";
			if(c[i] == c[nid - 1]) {
//				cout << c[i] << ' ' << c[nid - 1] << '\n';
//				cout << 1 << ' ' << i << ' ' << nid << '\n';
				if(b[i] >= b[nid]) {
					b[i] -= b[nid];
					b[nid] = 0;
				}
				else {
					b[nid] -= b[i];
					b[i] = 0;
				}
			}
			else {
//				cout << c[i] << ' ' << c[nid - 1] << '\n';
//				cout << 2 << ' ' << i << ' ' << nid << '\n';
				if(b[i] >= b[nid]) {
					ans += b[nid];
					b[i] -= b[nid];
					b[nid] = 0;
				}
				else {
					ans += b[i];
					b[nid] -= b[i];
					b[i] = 0;
				}
			}
			if(!b[nid]) nid--;
		}
	}
	cout << ans;
	return 0;
}
/*
hack:
5
1 a
1 c
1 b
2 c
1 z
*/