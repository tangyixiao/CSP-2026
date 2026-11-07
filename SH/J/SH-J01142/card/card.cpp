#include <bits/stdc++.h>
using namespace std;

const int N = 500010, M = 300010;
int n, m;
int a[N];
int table[N + M];
int cnt[N], last[M];

void round(int x) {
	int right = 1;
	memset(last, -1, sizeof last);
	memset(table, 0, sizeof table);
	for (int i = x; i <= n; i++) {
		if (last[a[i]] == -1) {
			table[right] = a[i];
			last[a[i]] = right;
			right++;
		}
		else {
			right = last[a[i]];
			right++;
		}
	}
	for (int i = 1; i <= right - 1; i++) {
		printf("DE:%d ", table[i]);
		cnt[table[i]]++;
	}
	puts("");
}

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (int i = 1; i <= n; i++) {
		round(i);
	}
	for (int i = 1; i <= m; i++) printf("%d ", cnt[i]);
	puts("");
	return 0;
}
