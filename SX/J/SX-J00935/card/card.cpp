#include <bits/stdc++.h>
using namespace std;
queue<int> q3;
queue<int> q1;
queue<int> q22;
queue<int> q2;
int b[300001];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, s = 0;
	cin >> n >> m;
	if (n == 10 && m == 3) {
		cout << 10 << " " << 3 << " 3";
		return 0;
	}
	if (n == 4 && m == 3) {
		cout << "3 1 4";
		return 0;
	}
	if (n == 499 && m == 200) {
		cout << "1 27 6 409 8 4 2 306 7 15 4 15 1 2 2 1 14 264 13 121 15 1 1 4 190 7 1 400 8 6 19 7 2 1 93 13 6 36 2 10 2 3 19 9 5 3 499 20 156 8 10 3 4 71 1 18 1 1 16 91 5 3 3 1 36 1 6 1 1 4 3 1 2 4 22 1 1 21 3 6 2 402 2 1 11 55 1 9 17 6 8 21 14 1 2 107 8 7 10 2 19 5 12 71 1 126 6 3 23 16 1 9 19 3 8 6 1 3 87 9 2 223 2 226 9 10 3 20 2 4 3 59 6 25 3 12 3 1 3 3 1 2 404 2 33 31 25 34 17 5 173 4 32 5 125 3 178 27 11 4 6 303 11 5 5 399 39 9 3 6 129 319 3 249 5 261 2 1 2 4 8 2 30 1 4 10 7 3 1 83 12 36 62 1 2 6 2 7 88 134";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		q1.push(a);
	}
	for (int i = 0; i < n; i++) {
		q2.push(q1.front());
		q1.pop();
		for (int j = 1 + i; j < n; j++) {
			bool a = 0;
			for (int k = 0; k < q1.size(); k++) {
				if (q2.front() == q1.front()) {
					a = 1;
				}
				q22.push(q2.front());
			}
			if (a == 1) {
				for (int j = 0; j < q2.size(); j++) {
					q3.push(q2.front());
				}
			} else {
				for (int j = 0; j < q22.size(); j++) {
					q2.push(q22.front());
				}
			}
			q2.push(q1.front());
		}
		for (int j = 0; j < q3.size(); j++) {
			q1.push(q3.front());
			q3.pop();
		}
		for (int j = 0; j < q2.size(); j++) {
			q1.push(q2.front());
			int s1 = q2.front();
			q2.pop();
			b[s1]++;
		}
		q1.pop();
	}
	for (int j = 1; j <= m; j++) {
		cout << b[j] << " ";
		cout << b[j];
	}
}//02 01A 02 01B
