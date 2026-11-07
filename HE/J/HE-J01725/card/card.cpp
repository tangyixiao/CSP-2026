#include <bits/stdc++.h>
using namespace std;
int a[100000];
int b[100000];
int jia[100000];
stack<int> q;
map<int, int> w;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n;
	cin >> n;
	int m;
	cin >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
for (int i = 1; i <= n; i++) {
	for (int j = i; j <= n; j++) {
		if (jia[a[j]] > 0) {
			while(q.top() != a[j]) {
				q.pop();
			}
		}else {
			q.push(a[j]);
			jia[a[j]]++;
		}
	}
	while(!q.empty()) {
		w[q.top()]++;
		q.pop();
	}
	for (int j = 0; j < n; j++) {
		a[j] = b[j];
	}
	memset(jia, 0, sizeof(jia));
}
for (int i = 1; i <= m; i++) {
	cout << w[i] << " ";
}
	return 0;
}
