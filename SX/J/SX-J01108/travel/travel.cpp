#include <bits/stdc++.h>
using namespace std;
int c, cc;
string s, ss, t, tt;
char r, rr;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> s >> cc >> ss;
	if (c == cc) {
		cout << '1';
		for (int i = 1; i <= 5; i++)
			if (s[i] >= '0' && s[i] <= '9')
				t += s[i];
		for (int j = 1; j <= 5; j++)
			if (ss[j] >= '0' && ss[j] <= '9')
				tt += ss[j];
		if (t == tt) {
			cout << '1';
			for (int i = 1; i <= 5; i++)
				if (s[i] >= 'A' && s[i] <= 'Z')
					r = s[i];
			for (int j = 1; j <= 5; j++)
				if (ss[j] >= 'A' && ss[j] <= 'Z')
					rr = ss[j];
			if ((r >= 'A' && r <= 'C' && rr >= 'A' && rr <= 'C') || (r >= 'D' && r <= 'F' && rr >= 'D' && rr <= 'F')) {
				cout << '1';
				if (abs(r - rr) == 1 && (r != 'C' && rr != 'D' || rr != 'C' && r != 'D') || r == 'D' && rr == 'F' || rr == 'D'
				        && r == 'F') {
					cout << '1';
				} else
					cout << "0";
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";


	return 0;
}