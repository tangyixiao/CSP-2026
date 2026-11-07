#include <bits/stdc++.h>
using namespace std;
string  c1, s1, c2, s2;
int p, q;
int tw = 0;

int main() {
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;

	if (s1 == s2 )
		cout << "0000";
	else if (s1 != s2 && c1 == c2) {
		tw += 1000;
		cout << tw;
	}





	return 0;
}