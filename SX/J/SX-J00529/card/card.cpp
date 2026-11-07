#include <bits/stdc++.h>
using namespace std;
int m[100005];
int shuzi[100005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	stack<int> a;
	int n, l;
	cin >> n >> l;
	for (int i = 1; i <= n; i++) {
		cin >> shuzi[i];
	}
	int ju = 1;
	while (true) {
		if (ju == n)
			break;
		int mm[100005];
		for (int i = ju; i <= n; i++) {
			if (mm[shuzi[i]] != 123456) {
				a.push(shuzi[i]);
				mm[shuzi[i]] = 123456;
			} else {
				while (a.top() != mm[shuzi[i]]) {
					mm[a.top()] = 0;
					a.pop();
				}
			}
			while (!a.empty()) {
				m[a.top()]++;
				a.pop();
			}
		}
	}
	for (int i = 1; i <= l; i++) {
		cout << m[l];
	}
	return 0;
}