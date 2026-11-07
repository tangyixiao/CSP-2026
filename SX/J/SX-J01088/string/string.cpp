#include <bits/stdc++.h>
#define ll long long
#define lf double
#define sc scanf
#define pf printf
#define stdio ios::sync_with_stdio(0);
using namespace std;

const int N = 2e5+100;
int m;
char c ;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	sc("%d", &n);
	string s = "";
	while (n--) {

		sc("%d %c", &m, &c);
		for (int i = 1; i <= m; ++i) {
			s += c;
//			printf("%d\n", i);
		}
	}
	string s1;
	for (int i = s.size() - 1; i > 0; --i)
		s1 += s[i];
	int bt = 0;
	for (int i = 0; i < s.size() / 2; ++i) {
		if (s[i] != s1[i])
			bt++;
	}
	pf("%d", bt);
	return 0;
}