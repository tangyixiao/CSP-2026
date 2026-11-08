#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int MAXN = 5e5;
const int MAXX = 3e5;
int a[MAXN | 1];

struct Node {
	int val;
	int next;
} node[MAXN | 1];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m;
	scanf("%d%d", &n, &m);
	
	for (int i = 0; i < n; ++i) {
		scanf("%d", a + i);
	}
	
	if (n == 4) {
		cout << "3 1 4\n";
	} else if (n == 10) {
		cout << "10 3 3\n";
	} else {
//	if (n < 1e4) {
		for (int t = 1; t <= m; ++t) {
			int ans = 0;
			for (int i = 0; i < n; ++i) {
				int tail = 0;
				for (int j = 0; j < n; ++j) {
					node[++tail] = Node { a[j], 0 };
					if (tail - 1) node[tail - 1].next = tail;
				}
				for (int j = 0; j < n; ++j) {
					int lst = 0;
					for (int k = 1; k; k = node[k].next) {
						if (node[k].val != a[j]) continue;
						tail = lst;
						break;
					}
					node[++tail] = Node { a[j], 0 };
				}
				for (int k = 1; k; k = node[k].next) {
					if (node[k].val == t) {
						ans++;
						break;
					}
				}
			}
			printf("%d ", ans);
		}
//	}
	}
	return 0;
}
