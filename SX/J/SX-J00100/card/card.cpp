#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10, M = 3e5+10;
long long n, m, a[N], b[N], p = 1, cnt[M];
bool vis[M];

bool empty() {
	if (p == 1) {
		return true;
	}
	return false;
}

void push(long long x) {
	b[p] = x;
	p++;
	return;
}

void pop() {
	if (empty() == 0) {
		p--;
		return;
	}
	return;
}

long long top() {
	if (empty() == 0) {
		return b[p - 1];
	}
}

//ÍüÁËÕ»ÔõÃ´Ð´
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];

	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (vis[a[j]] == 1) {
				bool flag = 0;
				long long temp = p;
				for (int k = 1; k < temp; k++) {
					if (b[k] == a[j]) {
						flag = 1;
					}
					if (flag == 1) {
						long long temp1 = top();
						pop();
						vis[temp1] = 0;
					}
				}
			}
			push(a[j]);
			vis[a[j]] = 1;
		}
		for (int j = 1; j < p; j++) {
			cnt[b[j]]++;
		}
		p = 1;
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << ' ';
	}
	return 0;
}