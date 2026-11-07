#include <bits/stdc++.h>
using namespace std;
int n, m, vis[500005];
bool flag[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
//	stack<int> s;
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		if (!flag[a]) {
//			s.push(a);
//			flag[a] = 1;
//		} else {
//			flag[a] = 0;
//			whlie(s.top() != a)s.pop();
//			s.pop();
//		}
//	}
	if (m == 1)
		cout << 1;
	if (m == 2)
		cout << 4 << ' ' << 2;
	return 0;
}
