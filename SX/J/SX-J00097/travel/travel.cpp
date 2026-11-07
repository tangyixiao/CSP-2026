#include <bits/stdc++.h>
using namespace std;

char a[7] = {'a', 'A', 'B', 'C', 'D', 'F', 'f'};
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool o1 = 0, o2 = 0, o3 = 0, o4 = 0;
	if (c1 == c2)
		o1 = 1;
	int x = 0, y = 0, b, c;
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] >= '0' && s1[i] <= '9') {

			x = x * 10 + s1[i];
			y = y * 10 + s2[i];
		}
		b = s1[i] - 'A' + 1;
		c = s2[i] - 'A' + 1;
	}

	if (x == y)
		o2 = 1;
	if ((b < 4 && c < 4 ) || (b > 4 && c > 4))
		o3 = 1;
	if (a[b + 1] == a[c] || a[b - 1] == a[c])
		o4 = 1;
	if (o1 == 1)
		cout << "1";
	else
		cout << "0";
	if (o2 == 1 && o1 == 1)
		cout << "1";
	else
		cout << "0";
	if (o3 == 1 && o2 == 1 && o1 == 1)
		cout << "1";
	else
		cout << "0";
	if (o1 == 1 && o2 == 1 && o3 == 1 && o4 == 1)
		cout << "1";
	else
		cout << "0";
	return 0;
}
