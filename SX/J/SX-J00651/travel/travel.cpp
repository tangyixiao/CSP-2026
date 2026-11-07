#include <bits/stdc++.h>
using namespace std;
const int N = 15, M = 205;
int r_id, x_id, r_line, x_line;
int pos[N], c[N];
vector<int> ans;
char r, x;
char c1[N], s1[N], c2[N], s2[N];

void slove() {
	int nxt = 1;
	nxt = (r_id == x_id) ? 1 : 0;
	ans.push_back(nxt);
	nxt = (r_line == x_line&&nxt) ? 1 : 0;
	ans.push_back(nxt);
	nxt = (c[int(r)] == c[int(x)] && nxt) ? 1 : 0;
	ans.push_back(nxt);
	nxt = (abs(pos[int(r)] - pos[int(x)]) == 1 && nxt) ? 1 : 0;
	ans.push_back(nxt);
	return ;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf(" %s %s %s %s", c1 + 1, s1 + 1, c2 + 1, s2 + 1);
	for (int i = 1; i <= 2; i++) {
		r_id *= 10, x_id *= 10;
		r_line *= 10, x_line *= 10;
		r_id += c1[i] - '0', x_id += c2[i] - '0';
		r_line += s1[i] - '0', x_line += s2[i] - '0';
	}
	r = s1[3], x = s2[3];
	pos['A'] = 1, pos['B'] = 2, pos['C'] = 3, pos['D'] = 5, pos['F'] = 6;
	c['A'] = 1, c['B'] = 1, c['C'] = 1, c['D'] = 2, c['F'] = 2;
	slove();
	for (auto i : ans)
		printf("%d", i);
	return 0;
}