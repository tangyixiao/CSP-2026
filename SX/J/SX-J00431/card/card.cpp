#include <bits/stdc++.h>
using namespace std;
int n, m;
int pp[500005];
int oo[500005];
int s[300005];

struct Node {
	int t, id;
} d[500005];
int top = 1;

bool cmp(Node x, Node y) {
	return x.id < y.id;
}

void f(int x) {
	for (int i = 1; i < top; i++) {
		if (oo[i] == x) {
			top = i;
			break;
		}
	}
	return ;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> d[i].t;
		d[i].id = i;
	}
	for (int i = 1; i <= n; i++) {
		top = 1;
		memset(pp, 0, sizeof(pp));
		memset(oo, 0, sizeof(oo));
		sort(d + 1, d + 1 + n, cmp);
		for (int j = i; j <= n; j++) {
			pp[j - i + 1] = d[j].t;
		}
		int y = n - i + 1;
		for (int j = 1; j <= y; j++) {
			f(pp[j]);
			oo[top] = pp[j];
			top++;
		}
		for (int j = 1; j < top; j++) {
			s[oo[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << s[i] << " ";
	}
	return 0;
}
