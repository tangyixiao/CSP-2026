#include <bits/stdc++.h>
using namespace std;
int n, m, a[500010], s[300010];
vector<int> v;
vector<int> :: iterator it;
bool f;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			f = false;
			for (it = v.begin(); it != v.end(); it++) {
				if (*it == a[j])
					f = true;
				if (f == true) {
					v.erase(it);
					it--;
				}
			}
			v.push_back(a[j]);
		}
		for (it = v.begin(); it != v.end(); it++) {
			s[*it]++;
		}
		v.clear();
	}
	for (int i = 1; i <= m; i++) {
		printf("%d ", s[i]);
	}
	printf("\n");
	return 0;
}
