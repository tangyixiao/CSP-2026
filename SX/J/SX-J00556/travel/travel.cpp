#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2 ;
	char s1[5], s2[5];



	for (int i = 1; i <= 10000; i++) {
		cin >> c1 >> s1[i] >> c2 >> s2[i];




		if (c1 == c2) {
			if (s1[2] == s2[2]) {
				cout << "1111";
				return 0;

			} else {
				cout << "1000";
				return 0;
			}


		} else {
			cout << "0000";
			return 0;
		}
	}



	return 0;
}