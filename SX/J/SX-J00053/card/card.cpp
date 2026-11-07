#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
int n, m;
int p[N];
int vis[N];
int viss[N];
string s;

int main() {
	freopen("in.card", "r", stdin);
	freopen("out.card", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> p[i];
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			s += '0' + p[i];
			vis[i] = i;
		} else if (vis[i]) {
			s.resize(i - vis[i] + 1);
			for (auto it : s) {
				viss[it - '0']++;
			}
			cout << viss[i] << " ";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
