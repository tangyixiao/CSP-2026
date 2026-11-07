#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[500005];
bool vis[300005];
int res[300005];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		stack <int> s;
		for (int j = i; j <= n; j++) {
			if (vis[a[j]] == 1){
				while (s.top() != a[j]) {
					vis[s.top()] = 0;
					s.pop();
				}
			} else {
				s.push(a[j]);
				vis[a[j]] = 1;
			}
		}
		while (s.empty() == 0) {
			vis[s.top()] = 0;
			res[s.top()] ++;
//			cout << s.top() << ' ';
			s.pop();
		}
//		cout << endl;
	}
	for (int i = 1; i <= m; i++) {
		cout << res[i] << ' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

