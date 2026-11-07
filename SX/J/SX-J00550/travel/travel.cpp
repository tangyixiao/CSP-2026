#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;
ll a1, b1, a2, b2;
char c1, c2;
bool d1, d2;
map<ll, char> m;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	m['A'] = 1;
	m['B'] = 2;
	m['C'] = 3;
	m['D'] = 4;
	m['F'] = 5;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	if (c1 >= 'A' && c1 <= 'C')
		d1 = 1;
	if (c2 >= 'A' && c2 <= 'C')
		d2 = 1;
	if (a1 == a2)
		cout << 1;
	else
		cout << 0;
	if (a1 == a2 && b1 == b2)
		cout << 1;
	else
		cout << 0;
	if (a1 == a2 && b1 == b2 && d1 == d2)
		cout << 1;
	else
		cout << 0;
	if (a1 == a2 && b1 == b2 && d1 == d2 && abs(m[c1] - m[c2]) == 1)
		cout << 1;
	else
		cout << 0;
	return 0;
}
