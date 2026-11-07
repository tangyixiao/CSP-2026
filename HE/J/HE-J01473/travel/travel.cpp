#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int a1 = (c1[0]  - '0') * 10 + (c1[1]  - '0');
	int a2 = (c2[0]  - '0') * 10 + (c2[1]  - '0');
	int b1 = (s1[0]  - '0') * 10 + (s1[1]  - '0');
	int b2 = (s2[0]  - '0') * 10 + (s2[1]  - '0');
	int x1 = s1[2] - 'A' + 1;
	int x2 = s2[2] - 'A' + 1;
	
//	cout << a1 << ' ' << b1 << ' ' << x1 << ' ' << a2 << ' ' << b2 << ' ' << x2 << endl;
	
	if (a1 == a2) {
		cout << 1;
		if (b1 == b2) {
			cout << 1;
			if ((x1 == 1 || x1 == 2 || x1 == 3) && (x2 == 1 || x2 == 2 || x2 == 3) || (x1 == 4 || x1 == 5) && (x2 == 4 || x2 == 5)) {
				cout << 1;
				if (abs(x1 - x2) == 1) cout << 1;
				else cout << 0;
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

