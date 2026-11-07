#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;

struct node {
	long long a;
	string s;
} V[N];
map<int, int> mp;
long long ans = 0;

bool cmp(node a, node b) {
	return a.a > b.a;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> V[i].a;
		long long a1 = V[i].a;
		string sd = "";
		while (a1) {
			long long aa = a1 % 2 + 48;
			char c = char(aa);
			sd += c;
			a1 /= 2;
		}
		for (int j = sd.size() - 1; j >= 0; j--)
			V[i].s += sd[j];
	}
	sort(V + 1, V + 1 + n, cmp);
	for (int i = 1; i <= n - m + 1; i++) {
		string ss = V[i].s;
		int r = 1;
		while (r <= m) {
			string s1 = V[i + r].s;
			int ssl = ss.size();
			int s1l = s1.size();
			while (ssl && s1l) {
				if (ss[ssl] == s1[s1l] && ss[ssl] == '1') {
					ss[ssl] = '1';
				} else
					ss[ssl] = '0';
				ssl--;
				s1l--;
			}
			r++;
		}
		long long zl = ss.size(), t = 1, sum = 0;
		for (int j = zl - 1; j >= 0; j--) {
			sum = sum + (ss[j] - '0') * t;
			t *= 2;
		}
		if (sum > ans)
			ans = sum;
	}
	cout << ans;
	return 0;
}