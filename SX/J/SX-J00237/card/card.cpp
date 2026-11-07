#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500006];
stack <int> d;
bool flag[360000];
int number[360000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (flag[a[j]] == 0) {
				cout << '\n' << a[j] << " push";
				d.push(a[j]);
				flag[a[j]] = 1;
				number[a[j]] += 1;
			} else {
				while (d.top() != a[j]) {
					cout << '\n' << a[j] << " pop";
					d.pop();
					flag[d.top()] = 0;
					number[d.top()] -= 1;
				}
				d.pop();
				flag[d.top()] = 0;
				number[d.top()] -= 1;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		printf("%d", number[i]);
	}
	return 0;
}
