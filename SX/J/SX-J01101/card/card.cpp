#include <bits/stdc++.h>
using namespace std;

bool use[100005];
int m;

void cleanuse() {
	for (int j = 0; j < m; j++) {
		use[j] = false;
	}

	return;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	int n, t[100005];
	queue<int> nq;
	queue<int> a;
	queue<int> tab;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push(x);
	}
	while (!a.empty() || !tab.empty()) {
		tab.push(a.front());
		a.pop();
		cleanuse();
		while (!a.empty()) {
			if (use[a.front()]) {
				tab = nq;
				cleanuse();
			}
			tab.push(a.front());
			use[a.front()] = true;
			a.pop();
		}
		cleanuse();
		while (!tab.empty()) {
			if (!use[tab.front()]) {
				t[tab.front()]++;
			}
			a.push(tab.front());
			use[tab.front()] = true;
			tab.pop();
		}
		a.pop();
	}
	for (int i = 0; i < m; i++) {
		cout << t[i] << ' ';
	}

	return 0;
}