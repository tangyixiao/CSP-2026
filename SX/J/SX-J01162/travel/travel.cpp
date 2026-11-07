#include <bits/stdc++.h>
using namespace std;
int c1, c2;
char z1[5], z2[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> c1;
	for (int i = 1; i <= 3; i++)
		cin >> z1[i];
	cin >> c2;
	for (int i = 1; i <= 3; i++)
		cin >> z2[i];
	if (c1 == c2) {	//同一车厢？
		cout << '1';
		if (z1[1] == z2[1] && z1[2] == z2[2])//同一排？
			cout << '1';
		else
			cout << '0';
		if (z1[1] == z2[1] && z1[2] == z2[2] && z1[3] >= 'A' && z1[3] <= 'C' && z2[3] >= 'A' && z2[3] <= 'C' || z1[1] == z2[1]
		        && z1[2] == z2[2] && z1[3] >= 'D' && z1[3] <= 'F' && z2[3] >= 'D' && z2[3] <= 'F')//同一组？
			cout << '1';
		else
			cout << '0';
		if ((z1[1] == z2[1] && z1[2] == z2[2]) && (z1[3] == 'D' && z2[3] != 'C' || z1[3] == 'C' && z2[3] != 'D' || z1[3] != 'C'
		        && z2[3] != 'D') && (z1[3] + 1 == z2[3] || z1[3] - 1 == z2[3])) //相邻？
			cout << '1';
		else
			cout << '0';
	} else
		cout << "0000";
	return 0;
}
