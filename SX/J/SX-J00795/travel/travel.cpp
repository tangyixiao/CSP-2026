#include <bits/stdc++.h>
using namespace std;

int ge(char c) {
	if (c == 'A' || c == 'B' || c == 'C')
		return 0;
	if (c == 'D' || c == 'F')
		return 1;
	return -1;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	char ch1 = s1.back();
	char ch2 = s2.back();
	int r1 = stoi(s1.substr(0, s1.size() - 1));
	int r2 = stoi(s2.substr(0, s2.size() - 1));
	bool sr = (r1 == r2);
	int se1 = ge(ch1), se2 = ge(ch2);
	bool ss = (se1 == se2);
	bool iN = false;
	if (ss) {
		if (se1 == 0) {
			if ((ch1 == 'A' && ch2 == 'B') || (ch1 == 'B' && ch2 == 'A') || (ch1 == 'C' && ch2 == 'B') || (ch1 == 'B'
			        && ch2 == 'C'))
				iN = true;
		} else if ((ch1 == 'D' && ch2 == 'F') || (ch1 == 'F' && ch2 == 'D'))
			iN = true;
	}
	if (c1 == c2) {
		cout << '1';
		if (sr) {
			cout << '1';
			if (ss)
				cout << '1';
			else
				cout << '0';
			if (iN)
				cout << '1';
			else
				cout << '0';
		} else
			cout << '0' << '0' << '0';
	}	else
		cout << '0' << '0' << '0' << '0';

	fclose(stdin);
	fclose(stdout);
	return 0;
}
