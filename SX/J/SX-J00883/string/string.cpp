#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+5;
int  n;
ll ans, sum;

struct str {
	int a, hp;
	char c;
} s[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i].a >> s[i].c;
		sum += s[i].a;
	}
	int l = 1, r = n;
	while (l <= r) {
		int move1 = s[l].a - s[l].hp, move2 = s[r].a - s[r].hp;
		int move = min(move1, move2);
		if (s[l].c != s[r].c) {
			ans += move;
		}
		if (move1 == move2) {
			l++, r--;
		} else if (move1 < move2) {
			l++;
			s[r].hp += move1;
		} else {
			r--;
			s[l].hp += move2;
		}
	}
	cout << ans << endl;
	return 0;
}
/*
3
2 a
2 b
1 c
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
