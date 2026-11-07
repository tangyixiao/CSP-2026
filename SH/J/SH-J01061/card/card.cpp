#include <bits/stdc++.h>
using namespace std;

const int N = 500100;

int n, m;
int a[N];
int cnt[N];
int table[N];
int len = 0;

void clean(int x) {
	for (int i = 1; i <= len; i++)
		if (table[i] == x) {
			len = i - 1;
			return;
		}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	
	for (int i = 1; i <= n; i++) {
		len = 0;
		for (int j = i; j <= n; j++) {
			clean(a[j]);
			table[++len] = a[j];
		}
		for (int j = 1; j <= len; j++)
			cnt[table[j]]++;
	}
	
	for (int i = 1; i <= m; i++)
		cout << cnt[i] << " ";
	
	return 0;
}
