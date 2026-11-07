#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
const int M = 3e5+5;
int a[N];
int n, m;
map<int, int> mp;
struct node {
	bool bl, up;
} b[N];
int st[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(b, 0, sizeof b);
		memset(st, 0, sizeof st);
		int t = 0;
		for (int j = i; j <= n; j++) {
			if (b[a[j]].bl) {
				t = b[a[j]].up;
			} else {
				b[a[j]].bl = 1;
				b[a[j]].up = j;
				t++;
				st[t] = a[j];
			}
		}
		for (int j = 1; j <= t; j++) {
			mp[st[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << mp[i] << " ";
	}
	return 0;
	//O(n*n+n*m)
}