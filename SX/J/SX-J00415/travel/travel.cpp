#include <bits/stdc++.h>
using namespace std;
string a, b;
int x, y;
bool a1 = 0, a2 = 0, a3 = 0, a4 = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> x >> a >> y >> b;
	if (x == y)
		a1 = 1;
	else {
		cout << "0000";
		return 0;
	}
	if (a[0] == b[0] and a[1] == b[1])
		a2 = 1;
	if (a2 == 1 and a[2] == 'A' and (b[2] == 'B' or b[2] == 'C'))
		a3 = 1;
	if (a2 == 1 and a[2] == 'B' and (b[2] == 'A' or b[2] == 'C'))
		a3 = 1;
	if (a2 == 1 and a[2] == 'C' and (b[2] == 'B' or b[2] == 'A'))
		a3 = 1;
	if (a2 == 1 and a[2] == 'D' and b[2] == 'F')
		a3 = 1;
	if (a2 == 1 and a[2] == 'F' and b[2] == 'D')
		a3 = 1;
	if (a2 == 1 and a[2] == 'A' and b[2] == 'B')
		a4 = 1;
	if (a2 == 1 and a[2] == 'B' and b[2] == 'A')
		a4 = 1;
	if (a2 == 1 and a[2] == 'C' and b[2] == 'B')
		a4 = 1;
	if (a2 == 1 and a[2] == 'D' and b[2] == 'F')
		a4 = 1;
	if (a2 == 1 and a[2] == 'F' and b[2] == 'D')
		a4 = 1;
	cout << a1 << a2 << a3 << a4;
}
