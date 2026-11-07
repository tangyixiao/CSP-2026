#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;

	if (a != c)
		cout << "0000";
	else if (b[0] + b[1] != d[0] + d[1])
		cout << "1000";
	else if ((b[2] == 'D' || b[2] == 'F' || d[2] == 'D' || d[2] == 'F') && (b[2] == 'A' || b[2] == 'B' || b[2] == 'C'
	         || d[2] == 'A' || d[2] == 'B' || d[2] == 'C'))
		cout << "1100";
	else if (b[2] + d[2] != 'A' + 'B' || b[2] + d[2] != 'B' + 'A' || b[2] + d[2] != 'B' + 'C' || b[2] + d[2] != 'C' + 'B'
	         || b[2] + d[2] != 'D' + 'F' || b[2] + d[2] != 'F' + 'D')
		cout << "1110";
	else
		cout << "1111";




	return 0;
}