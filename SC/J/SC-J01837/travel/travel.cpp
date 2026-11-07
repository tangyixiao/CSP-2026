#include<bits/stdc++.h>
using namespace std;
string c1, c2, seat1, seat2;
int f1, f2;

bool tc() {
	if (seat1[2] == 'A' && (seat2[2] == 'B' || seat2[2] == 'C')) return 1;
	else if (seat1[2] == 'B' && (seat2[2] == 'A' || seat2[2] == 'C')) return 1;
	else if (seat1[2] == 'C' && (seat2[2] == 'B' || seat2[2] == 'A')) return 1;
	else if (seat1[2] == 'D' && seat2[2] == 'F') return 1;
	else if (seat1[2] == 'F' && seat2[2] == 'D') return 1;
	return 0;
}

bool near() {
	if (seat1[2] == 'A' && seat2[2] == 'B') return 1;
	else if (seat1[2] == 'B' && (seat2[2] == 'A' || seat2[2] == 'C')) return 1;
	else if (seat1[2] == 'C' && seat2[2] == 'B') return 1;
	else if (seat1[2] == 'D' && seat2[2] == 'F') return 1;
	else if (seat1[2] == 'F' && seat2[2] == 'D') return 1;
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> seat1 >> c2 >> seat2;
	for (int i = 0; i <= 1; i++) {
		if (c1[i] == c2[i]) f1++;
	}
	if (f1 != 2) {
		cout << "0000";
		return 0;
	} else {
		for (int i = 0; i <= 1; i++) {
			if (seat1[i] == seat2[i]) f2++;
		}
		if (f2 != 2) {
			cout << "1000";
			return 0;
		} else {
			if (!tc()) {
				cout << "1100";
				return 0;
			} else {
				if (!near()) {
					cout << "1110";
					return 0;
				} else {
					cout << "1111";
					return 0;
				}
			}
		}
	}
	return 0;
}