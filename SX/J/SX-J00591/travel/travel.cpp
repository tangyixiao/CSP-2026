#include <bits/stdc++.h>
#define int long long
#define db double
#define fr(i,s,n) for(int i=s;i<=n;i++)
#define dn(i,s,n) for(int i=s;i>=n;i--)
#define please return
#define AC 0
using namespace std;

bool f(char x, char y) {
	if (x <= 'C' && y > 'C' || x > 'C' && y <= 'C')
		return 0;
	return 1;
}

bool g(char x, char y) {
	if (!f(x, y))
		return 0;
	if (x > 'C')
		return 1;
	if (x == 'B' || y == 'B')
		return 1;
	return 0;
}

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a1, b1, a2, b2;
	char c1, c2;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	if (a1 == a2 && b1 == b2 && f(c1, c2) && g(c1, c2))
		cout << "1111";
	else if (a1 == a2 && b1 == b2 && f(c1, c2))
		cout << "1110";
	else if (a1 == a2 && b1 == b2)
		cout << "1100";
	else if (a1 == a2)
		cout << "1000";
	else
		cout << "0000";
	please AC;
}