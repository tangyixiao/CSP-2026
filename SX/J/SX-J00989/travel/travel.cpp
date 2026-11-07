#include <bits/stdc++.h>
using namespace std;

int main() {
	preopen("travel.in","r",stdin);
	preopen("travel.out","w",stdout);
	char c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> c2;
	if (c1 == s1)
		cout << '1';
	else
		cout << "0000";
	if (s1 == s2 - 1) {
		cout << "1111";
	}
	return 0;
}