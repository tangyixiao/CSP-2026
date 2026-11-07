#include <bits/stdc++.h>
using namespace std;
long long n, m, a;
queue<long long> q, q1;

int main() {
	//freopen("card.in", "r", stdin)
	//freopen("card.out", "w", stdout)
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a;
		q.push(a);
	}
	for (int i = 1; i <= q.size(); ++i) {
		if (q.front() != q1.front()) {
			q1.push(q.front());
			q.pop();
		} else {

			for (int j = 1; j <= q1.size(); ++j) {
				q1.pop();
			}
			q1.push(q.front());
			q.pop();
		}
	}
	cout << q1.size();
	return 0;
}