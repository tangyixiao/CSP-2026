#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;

struct node {
	int a;
	char s;
} V[N];
string ss = "";

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> V[i].a >> V[i].s;
		for (int j = 1; j <= V[i].a; j++)
			ss += V[i].s;
	}
	int t = 0;
	for (int i = 0; i <= ss.size() / 2; i++) {
		if (ss[i] != ss[ss.size() - 1 - i])
			t++;
	}
	cout << t;
	return 0;
}